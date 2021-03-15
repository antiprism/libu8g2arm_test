libu8g2arm
==========

**WARNING: THIS IS A PROJECT PREVIEW FOR TESTING ONLY**

The libu8g2arm package provides the
[U8g2: Library for monochrome displays](https://github.com/olikraus/u8g2)
for building and installing on Linux-based OSs running on the Raspberry Pi.

The code comes from the
[u8g2](https://github.com/olikraus/u8g2) and
[u8g2-arm-linux](https://github.com/wuhanstudio/u8g2-arm-linux)
projects, and is assembled into the libug2arm project by
the [setup_src.sh](setup_src.sh) script.

Build and Install
-----------------

The package is built with the Autotools. Create the configure file
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

Package Regeneration
--------------------

Notes on regenerating the package. These are not needed for normal use.

To update the code to include recent changes to U8g2, clone the U8g2 
repository into a directory parallel to the libug2arm directory, then run
[setup_src.sh](setup_src.sh)
from the libug2arm top level directory.
**WARNING**: this will delete the src directory before recreating
it, and any local changes under the src directory will be lost.

Some replacement files are included in setup/files. New functions added
to the original files will not be included unless these files are manually
updated.

Contact
-------

[Adrian Rossiter](https://github.com/antiprism)

Credits
-------

The [U8g2: Library for monochrome displays](https://github.com/olikraus/u8g2)
is developed by [Olikraus](https://github.com/olikraus)

The [U8g2 Arm Linux Port](https://github.com/wuhanstudio/u8g2-arm-linux)
is developed by
*   Author: Wu Han
*   Homepage: http://wuhanstudio.cc
*   Email: wuhanstudio@hust.edu.cn


