;;;; Cyclone Scheme
;;;; https://github.com/justinethier/cyclone
;;;;
;;;; Copyright (c) 2014-2016, Justin Ethier
;;;; All rights reserved.
;;;;
;;;; This module performs CPS analysis and optimizations.
;;;;

;; TODO:
;- add 'analyze' function, can base it on expand or another transform to start
;- modify cps to use ast for lambda's
;  will need analyze to use the ast, and will need
;  closure conversion to recognize it, too.
;  at least for now, closure conversion can output 
;  regular lambda's, though.
;  can write initial analyze, but can't get too far without being able
;  to uniquely ID each lambda

;(define-library (optimize-cps)
(define-library (scheme cyclone cps-optimizations)
  (import (scheme base)
          (scheme cyclone util)
          (scheme cyclone ast)
          (scheme cyclone transforms)
          (srfi 69))
  (export
      optimize-cps 
      analyze-cps
      opt:contract
      ;adb:init!
      adb:get
      adb:get/default
      adb:set!
      adb:get-db
      simple-lambda?
      ;; Analyze variables
      adb:make-var
      %adb:make-var
      adb:variable?
      adbv:global 
      adbv:set-global!
      adbv:defined-by adbv:set-defined-by!
      adbv:assigned adbv:set-assigned!
      adbv:assigned-locally adbv:set-assigned-locally!
      adbv:ref-by
      adbv:set-ref-by!
      ;; Analyze functions
      adb:make-fnc
      %adb:make-fnc
      adb:function?
      adbf:simple adbf:set-simple!
      adbf:unused-params adbf:set-unused-params!
  )
  (begin
    (define *adb* (make-hash-table))
    (define (adb:get-db) *adb*)
    ;(define *adb* #f) ;(make-hash-table))
    ;(define (adb:init!)
    ;  ;(set! *adb* (make-hash-table)))
    ;  'TODO)
    (define (adb:get key) (hash-table-ref *adb* key))
    (define (adb:get/default key default) (hash-table-ref/default *adb* key default))
    (define (adb:set! key val) (hash-table-set! *adb* key val))
    (define-record-type <analysis-db-variable>
      (%adb:make-var global defined-by assigned assigned-locally)
      adb:variable?
      (global adbv:global adbv:set-global!)
      (defined-by adbv:defined-by adbv:set-defined-by!)
      (assigned adbv:assigned adbv:set-assigned!)
      (assigned-locally adbv:assigned-locally adbv:set-assigned-locally!)
      (ref-by adbv:ref-by adbv:set-ref-by!)
    )
    (define (adb:make-var)
      (%adb:make-var '? '? '? '? '()))

    (define-record-type <analysis-db-function>
      (%adb:make-fnc simple unused-params)
      adb:function?
      (simple adbf:simple adbf:set-simple!)
      (unused-params adbf:unused-params adbf:set-unused-params!)
    )
    (define (adb:make-fnc)
      (%adb:make-fnc '? '?))

    (define (analyze exp lid)
;(tre:error `(analyze ,lid ,exp))
      (cond
        ; Core forms:
        ((ast:lambda? exp)
         (let ((id (ast:lambda-id exp))
                (fnc (adb:make-fnc)))
           ;; save lambda to adb
           (adb:set! id fnc)
           ;; Analyze the lambda
           (for-each
            (lambda (arg)
              (let ((var (adb:get/default arg (adb:make-var))))
                (adbv:set-global! var #f)
                (adbv:set-defined-by! var id)
                (adb:set! arg var)))
            (ast:lambda-formals->list exp))
           (for-each
             (lambda (expr)
               (analyze expr id))
             (ast:lambda-body exp))))
        ((const? exp) #f)
        ((quote? exp) #f)
        ((ref? exp)
         (let ((var (adb:get/default exp (adb:make-var))))
          (adbv:set-ref-by! var (cons lid (adbv:ref-by var)))
         ))
        ((define? exp)
         (let ((var (adb:get/default (define->var exp) (adb:make-var))))
           ;; TODO:
           (adbv:set-defined-by! var lid)
           (adbv:set-ref-by! var (cons lid (adbv:ref-by var)))

           (analyze (define->exp exp) lid)))
        ((set!? exp)
         (let ((var (adb:get/default (set!->var exp) (adb:make-var))))
           ;; TODO:
           (adbv:set-ref-by! var (cons lid (adbv:ref-by var)))

           (analyze (set!->exp exp) lid)))
        ((if? exp)       `(if ,(analyze (if->condition exp) lid)
                              ,(analyze (if->then exp) lid)
                              ,(analyze (if->else exp) lid)))
        
        ; Application:
        ((app? exp)
         (for-each
           (lambda (e)
             (analyze e lid))
           exp))
;TODO         ((app? exp)      (map (lambda (e) (wrap-mutables e globals)) exp))

        ; Nothing to analyze for these?
        ;((prim? exp)     exp)
        ;((quote? exp)    exp)
        ; Should never see vanilla lambda's in this function, only AST's
        ;((lambda? exp)
        ;; Nothing to analyze for expressions that fall into this branch
        (else
          #f)))

    (define (analyze2 exp)
      (cond
        ; Core forms:
        ((ast:lambda? exp)
         (let* ((id (ast:lambda-id exp))
                (fnc (adb:get id)))
;(trace:error `(adb:get ,id ,fnc))
           (adbf:set-simple! fnc (simple-lambda? exp))
           (for-each
             (lambda (expr)
               (analyze2 expr))
             (ast:lambda-body exp))))
        ((const? exp) #f)
        ((quote? exp) #f)
;; TODO:
;        ((ref? exp)
;         (let ((var (adb:get/default exp (adb:make-var))))
;          (adbv:set-ref-by! var (cons lid (adbv:ref-by var)))
;         ))
        ((define? exp)
         ;(let ((var (adb:get/default (define->var exp) (adb:make-var))))
           (analyze2 (define->exp exp)))
        ((set!? exp)
         ;(let ((var (adb:get/default (set!->var exp) (adb:make-var))))
           (analyze2 (set!->exp exp)))
        ((if? exp)       `(if ,(analyze2 (if->condition exp))
                              ,(analyze2 (if->then exp))
                              ,(analyze2 (if->else exp))))
        ; Application:
        ((app? exp)
         (for-each (lambda (e) (analyze2 e)) exp))
        (else #f)))

    ;; TODO: make another pass for simple lambda's
    ;can use similar logic to cps-optimize-01:
    ;- body is a lambda app
    ;- no lambda args are referenced in the body of that lambda app
    ;  (ref-by is empty or the defining lid)
    ;
    ; Need to check analysis DB against CPS generated and make sure
    ; things like ref-by make sense (ref by seems like its only -1 right now??)
    ;; Does ref-by list contains references to lambdas other than owner?
    ;; int -> ast-variable -> boolean
    (define (nonlocal-ref? owner-id adb-var)
      (define (loop ref-by-ids)
        (cond
          ((null? ref-by-ids) #f)
          ((not (pair? ref-by-ids)) #f)
          (else
            (let ((ref (car ref-by-ids)))
              (if (and (number? ref) (not (= owner-id ref)))
                  #t ;; Another lambda uses this variable
                  (loop (cdr ref-by-ids)))))))
      (loop (adbv:ref-by adb-var)))
      
    ;; int -> [symbol] -> boolean
    (define (any-nonlocal-refs? owner-id vars)
      (call/cc 
        (lambda (return)
          (for-each
            (lambda (var)
              (if (nonlocal-ref? owner-id (adb:get var))
                  (return #t)))
            vars)
          (return #f))))

    ;; ast-function -> boolean
    (define (simple-lambda? ast)
      (let ((body (ast:lambda-body ast))
            (formals (ast:lambda-formals->list ast))
            (id (ast:lambda-id ast)))
        (if (pair? body)
            (set! body (car body)))
;(trace:error `(simple-lambda? ,id ,formals 
;,(and (pair? body)
;     (app? body)
;     (ast:lambda? (car body)))
;,(length formals)
;;,body
;))
        (and (pair? body)
             (app? body)
             (ast:lambda? (car body))
             (> (length formals) 0)
             (equal? (app->args body)
                     formals)
             (not (any-nonlocal-refs? id formals))
    )))

    ;; Perform contraction phase of CPS optimizations
    (define (opt:contract exp)
      (cond
        ; Core forms:
        ((ast:lambda? exp)
         (let* ((id (ast:lambda-id exp))
                (fnc (adb:get id)))
           (if (adbf:simple fnc)
               (opt:contract (caar (ast:lambda-body exp))) ;; Optimize-out the lambda
               (ast:%make-lambda
                 (ast:lambda-id exp)
                 (ast:lambda-args exp)
                 (opt:contract (ast:lambda-body exp))))))
        ((const? exp) exp)
        ((ref? exp) exp)
        ((prim? exp) exp)
        ((quote? exp) exp)
        ((define? exp)
         `(define ,(opt:contract (define->var exp))
                  ,@(opt:contract (define->exp exp))))
        ((set!? exp)
         `(set! ,(opt:contract (set!->var exp))
                ,(opt:contract (set!->exp exp))))
        ((if? exp)       `(if ,(opt:contract (if->condition exp))
                              ,(opt:contract (if->then exp))
                              ,(opt:contract (if->else exp))))
        ; Application:
        ((app? exp)
         (map (lambda (e) (opt:contract e)) exp))
        (else 
          (error "CPS optimize [1] - Unknown expression" exp))))

    (define (analyze-cps exp)
      (analyze exp -1) ;; Top-level is lambda ID -1
      (analyze2 exp) ;; Second pass
    )

    ;; NOTES:
    ;;
    ;; TODO: run CPS optimization (not all of these phases may apply)
    ;; phase 1 - constant folding, function-argument expansion, beta-contraction of functions called once,
    ;;           and other "contractions". some of this is already done in previous phases. we will leave
    ;;           that alone for now
    ;; phase 2 - beta expansion
    ;; phase 3 - eta reduction
    ;; phase 4 - hoisting
    ;; phase 5 - common subexpression elimination
    ;; TODO: re-run phases again until program is stable (less than n opts made, more than r rounds performed, etc)
    ;; END notes

    (define (optimize-cps ast)
      (analyze-cps ast)
      (trace:info "---------------- cps analysis db:")
      (trace:info (adb:get-db))
      ;ast ;; DEBUGGING!!!
      (opt:contract ast)
    )

;; Older code, delete this soon
;;;; TODO: don't think we can assume lambda body is single expr, if we want
;;;;       to do optimizations such as inlining
;;(define (cps-optimize-01 exp)
;;  exp) ;; Temporarily disabling while this is reworked.
;;;  (define (opt-lambda exp)
;;;    (let ((body (car (lambda->exp exp)))) ;; Single expr after CPS
;;;      ;(trace:error `(DEBUG 
;;;      ;  ,exp
;;;      ;  ,body
;;;      ;  ,(if (and (pair? body) (app? body) (lambda? (car body)))
;;;      ;    (list (app->args body)
;;;      ;          (lambda->formals exp))
;;;      ;    #f)))
;;;      (cond
;;;        ;; Does the function just call its continuation?
;;;        ((and (pair? body) 
;;;              (app? body)
;;;              (lambda? (car body))
;;;              ;; TODO: need to check body length if we allow >1 expr in a body
;;;              ;; TODO: not sure this is good enough for all cases
;;;              (equal? (app->args body)
;;;                      ;(lambda->formals (car body))
;;;                      (lambda->formals exp)
;;;                      )
;;;              (> (length (lambda->formals exp)) 0)
;;;              ;; TODO: don't do it if args are used in the body
;;;              ;; this won't work if we have any num other than 1 arg
;;;              (not (member 
;;;                      (car (lambda->formals exp))
;;;                      (free-vars (car body))))
;;;              )
;;;          (cps-optimize-01 (car body)))
;;;        (else
;;;          `(lambda ,(lambda->formals exp)
;;;             ,(cps-optimize-01 (car (lambda->exp exp)))) ;; Assume single expr in lambda body, since after CPS phase
;;;  ))))
;;;  (cond
;;;    ; Core forms:
;;;    ((const? exp)    exp)
;;;    ((ref? exp)      exp)
;;;    ((prim? exp)     exp)
;;;    ((quote? exp)    exp)
;;;    ((lambda? exp)   (opt-lambda exp)) 
;;;    ((set!? exp)     `(set!
;;;                        ,(set!->var exp) 
;;;                        ,(cps-optimize-01 (set!->exp exp))))
;;;    ((if? exp)       `(if ,(cps-optimize-01 (if->condition exp))
;;;                          ,(cps-optimize-01 (if->then exp))
;;;                          ,(cps-optimize-01 (if->else exp))))
;;;    ; Application:
;;;    ((app? exp)      (map (lambda (e) (cps-optimize-01 e)) exp))
;;;    (else            (error "CPS optimize unknown expression type: " exp))))

))
