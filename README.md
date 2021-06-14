libu8g2arm
==========

**WARNING: THIS IS A PROJECT PREVIEW FOR TESTING ONLY**

The libu8g2arm package provides the
[U8g2: Library for monochrome displays](https://github.com/olikraus/u8g2)
for building and installing on Linux-based OSs running on the Raspberry Pi,
using the
[u8g2-arm-linux](https://github.com/wuhanstudio/u8g2-arm-linux)
port.

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

Using the library
---------------------------

To use the U8g2 library (contains permissive license fonts only)
include `libu8g2arm/u8g2.h`, and link to `libu8g2arm` (licence:
COPYING_permissive). To also use GPL and other copyleft fonts, additionally
include `libu8g2arm/u8g2_fonts_gplcopyleft.h` and link to
`libu8g2armfonts_gplcopyleft` (licence: COPYING_permissive and
COPYING_gplcopyleft), and note that this library is covered by
the GPL and not the LGPL. To also use noncommercial fonts, additionally
include `libu8g2arm/u8g2_fonts_noncommercial.h` and link to
`libu8g2armfonts_noncommercial` (licence COPYING_permissive and
COPYING_noncommercial).


Package Regeneration
--------------------

The package includes all the components used to generate it, which can
used to synchronise with the latest U8g2 code.

The regeneration is not required for normal use, and may need to be
updated to account for changes to U8g2. For example, the regeneration
script may fail, or some replacement files in setup/files may need to
be updated manually if the originals change.

**WARNING**: regenerating the package will delete the src directory before
recreating it, and any local changes under the src directory will be lost.

To regenerate the package, clone
[U8g2](https://github.com/olikraus/u8g2)
into a directory parallel to the libug2arm directory, then run
[setup_src.sh](setup_src.sh)
from the libug2arm top level directory.


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

