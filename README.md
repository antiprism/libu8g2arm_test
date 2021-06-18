# libu8g2arm


**WARNING: THIS IS A PROJECT PREVIEW FOR TESTING ONLY**

The libu8g2arm package provides the
[U8g2: Library for monochrome displays](https://github.com/olikraus/u8g2)
for building and installing on Linux-based OSs running on the Raspberry Pi,
using the
[u8g2-arm-linux](https://github.com/wuhanstudio/u8g2-arm-linux)
port.

## Build and Install


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

## Using the library

A display can set up in the usual U8g2 way, with some minor differences. A
C++ method is also provided for specifying the display at runtime.

### Using C the usual way

Include
```
#include <libu8g2arm/u8g2.h>
#include <libu8g2arm/u8g2arm.h>
```

Follow the instructions for 
[U8g2 C setup](https://github.com/olikraus/u8g2/wiki/u8g2setupc).

The gpio callback is `u8x8_arm_linux_gpio_and_delay` and may be used with the
following byte routines (not all tested)
* `u8x8_byte_arm_linux_hw_i2c`
* `u8x8_byte_sw_i2c`
* `u8x8_byte_arm_linux_hw_spi`
* `u8x8_byte_4wire_sw_spi`
* `u8x8_byte_3wire_sw_spi`
* `u8x8_byte_8bit_8080mode`

When using hardware I2C or SPI routines, ensure that the corresponding linux
device is enabled (e.g. `/boot/config.txt` contains `dtparam=i2c_arm=on` or
`dtparam=spi=on`). In the program, after calling the display setup function,
register the device parameters
* Hardware I2C - u8g2arm_arm_init_hw_i2c(u8x8, bus_number)
* Hardware SPI - u8g2arm_arm_init_hw_spi(u8x8, bus_number, cs_number)

### Using C++ the usual way

Include
```
#include <libu8g2arm/u8g2arm.h>
#include <libu8g2arm/U8g2lib.h>
```

Follow the instructions for 
[U8g2 C++ setup](https://github.com/olikraus/u8g2/wiki/u8g2setupcpp)

Only the setup classes ending in `_F` are included in the library.

When using hardware I2C or SPI routines, ensure that the corresponding linux
device is enabled (e.g. `/boot/config.txt` contains `dtparam=i2c_arm=on` or
`dtparam=spi=on`). In the program, after calling the display setup function,
register the device parameters
* Hardware I2C - u8g2arm_arm_init_hw_i2c(u8x8, bus_number)
* Hardware SPI - u8g2arm_arm_init_hw_spi(u8x8, bus_number, cs_number)

### Using C++ and specifying the display at runtime

Include
```
#include <libu8g2arm/U8G2Controller.h>
#include <libu8g2arm/U8g2lib.h>
```

See
* example program [ex_init_runtime.cpp](examples/ex_init_runtime.cpp)
* header documentation [U8g2Controller.h](src/include/U8g2Controller.h),
  which includes a long list of controller and parameter settings at the end.

### Linking and Fonts

To link to the U8g2arm library, which contains contains only permissive license
code and fonts fonts, link to `libu8g2arm` (licence: COPYING_permissive).

To use GPL and other copyleft fonts, additionally include
`libu8g2arm/u8g2_fonts_gplcopyleft.h` and link to `libu8g2armfonts_gplcopyleft`
(additional licence: COPYING_gplcopyleft), and note that this library is
covered by the GPL and not the LGPL. To use noncommercial fonts, additionally
include `libu8g2arm/u8g2_fonts_noncommercial.h` and link to
`libu8g2armfonts_noncommercial` (additional licence: COPYING_noncommercial).


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

