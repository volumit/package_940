# package_940
GCC 9.4.0/Binutils 2.20/Newlib Source code for Tricore Aurix

Binutils and Newlib are a taken over from package_494
https://github.com/volumit/package_494

Binutils 2.20

Newlib 1.18

GCC 9.4.0

Relevant Testsuites g++,gcc,libstdc++ passed with zero fails.
Used emulator qemu6.2.50 
https://github.com/volumit/qemu

# Build instructions

```
$ docker run -it -v package_940/releases:/opt debian:11-slim
$ apt update
$ apt install -yy \
       bison \
       bzip2 \
       ca-certificates \
       ccache \
       flex \
       g++-9 \
       gcc-9 \
       git \
       libglib2.0-dev \
       libpixman-1-dev \
       libgmp-dev \
       libmpfr-dev \
       libmpc-dev \
       locales \
       make \
       ninja-build \
       pkgconf \
       python3-pip \
       python3-setuptools \
       python3-wheel \
       texinfo

$ git clone https://github.com/bkoppelmann/package_940.git
$ export PREFIX=/opt
$ export PATH=$PREFIX/bin:$PATH
$ export TARGET=tricore

# binutils
$ mkdir package_940/binutils/build && cd package_940/binutils/build
$ CC=gcc-9 CXX=g++-9 CFLAGS=-w ../configure --prefix=$PREFIX --target=$TARGET --enable-lto --with-sysroot --disable-nls --disable-werror
$ make && make install

# gcc1 
$ mkdir ../../gcc/build1 && cd ../../gcc/build1
$ CC=gcc-9 CXX=g++-9 CFLAGS=-w ../configure --prefix=$PREFIX --target=$TARGET --enable-lto --enable-languages=c --without-headers --with-newlib --enable-interwork  --enable-multilib --disable-shared --disable-thread
$ make all-gcc && make install-gcc

# newlib
$ mkdir ../../newlib/build/ && cd ../../newlib/build
$ ../configure --prefix=$PREFIX --target=$TARGET --disable-newlib-supplied-syscalls
$ make && make install

# gcc2
$ mkdir ../../gcc/build2 && cd ../../gcc/build2
$ CC=gcc-9 CXX=g++-9 ../configure --prefix=$PREFIX --target=$TARGET --enable-lto --enable-languages=c,c++ --with-newlib --enable-interwork  --enable-multilib --disable-shared --disable-thread
$ make && make install

# strip binaries
$ cd /opt 
$ strip --strip-all bin/*
$ strip --strip-all libexec/gcc/tricore/9.4.0/*
$ strip --strip-all tricore/bin/*

$ exit 
$ cd package_940/releases
$ tar -czvf tricore-toolchain-9.4.0.tar.gz *
```
