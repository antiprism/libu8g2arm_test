libu8g2arm
==========

**WARNING: THIS IS A PROJECT PREVIEW FOR TESTING ONLY**

The libu8g2arm package provides the
[U8g2: Library for monochrome displays](https://github.com/olikraus/u8g2)
in a form suitable for building and installing on Linux-based OSs
running on the Raspberry Pi.

The code comes from the
[u8g2](https://github.com/olikraus/u8g2) and
[u8g2-arm-linux](https://github.com/wuhanstudio/u8g2-arm-linux)
projects. It has been assembled into the libug2arm project by
the [setup_src.sh](setup_src.sh) script.

Build and Install
-----------------

The build system uses the Autotools. Create the configure file
by running
```
./bootstrap
```
Then, build and install in the usual way.

**System-wide install**
```
   ./configure
   make
   sudo make install-strip
```
**Local install**
```
   ./configure --prefix="/home/myname/some/dir"
   make
   make install-strip
```
**Cross-compile**

Make a *arm-unknown-linux-gnueabi* toolchain with
[crosstool-NG](https://crosstool-ng.github.io/), then
```
   ./configure --host=arm-unknown-linux-gnueabi --prefix="/home/myname/some/dir"
   make
   make install-strip
```

Package Maintenance
-------------------

Notes on preparing the package. These are not needed for normal use.

To update the code to include recent changes to u8g2 and u8g2-arm-linux,
clone these two projects into directories parallel to the libug2arm
directory, then run setup_src.sh from the libug2arm top level
directory. **WARNING**: this will delete the src directory before rebuilding
it, and any local changes under the src directory will be lost.

