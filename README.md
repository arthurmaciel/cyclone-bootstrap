[<img src="https://raw.githubusercontent.com/justinethier/cyclone/master/docs/images/cyclone-logo-04-bootstrap.png" alt="cyclone-scheme">](http://github.com/justinethier/cyclone)

Cyclone is a brand-new, R<sup>7</sup>RS Scheme-to-C compiler that uses a variant of [Cheney on the MTA](http://www.pipeline.com/~hbaker1/CheneyMTA.html) to implement full tail recursion, continuations, and generational garbage collection.

Cyclone cannot be built directly on a system that does not have Cyclone binaries installed because the compiler is [self-hosting](https://en.wikipedia.org/wiki/Self-hosting). Instead, this repository uses pre-generated C code to build and install Cyclone Scheme on a fresh system. 

Prerequisites
-------------

- [Concurrency Kit](http://concurrencykit.org/)

    The best way to install libck is via a package manager such as `apt-get`. But if a package is not available for this library it can also be built from source. Just replace `0.5.0` below with the latest version available from their website:
    
        wget http://concurrencykit.org/releases/ck-0.5.0.tar.gz
        tar xfz ck-0.5.0.tar.gz ; cd ck-0.5.0 ; ./configure && make all && sudo make install
        sudo ldconfig
    
- make
- gcc

Installation
------------

First, [download the latest release](https://github.com/justinethier/cyclone-bootstrap/releases) in either `zip` or `tar.gz` format and unpack the archive.

Use `make` without arguments to install in the default location (`/usr/local`):

    make
    sudo make install
    make test

 or include an argument to specify the install directory, EG:

    make PREFIX=/home/my-username
    make PREFIX=/home/my-username install
    make test

Note:

- When installing to a custom location, you may need to add the corresponding `bin`, `include`, and `lib` directories to your `PATH` in order to run cyclone and complete the installation.

- If you are building on a platform that requires special compiler commands, such as a Raspberry Pi, copy the appropriate `Makefile.config.X` file to `Makefile.config` before doing a build.

At the moment, Cyclone has only been tested on Linux using GCC. Other platforms may be added in the future.

Documentation
-------------
For more information please return to the main [Cyclone](https://github.com/justinethier/cyclone) page.

License
-------
Copyright (C) 2014 [Justin Ethier](http://github.com/justinethier).

Cyclone is available under the [MIT license](http://www.opensource.org/licenses/mit-license.php).
