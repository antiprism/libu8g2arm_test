#/bin/bash
# Author: Adrian Rossiter <adrian@antiprism.com>
# Licence: CC0/Public Domain http://creativecommons.org/publicdomain/zero/1.0/

PORT_SRC_DIR=../u8g2-arm-linux
U8G2_SRC_DIR=../u8g2
SRC_DIR=src
SETUP_DIR=setup


# copy all the original source files into a single directory
rm -rf ${SRC_DIR}   
mkdir ${SRC_DIR} \
      ${SRC_DIR}/setup \
      ${SRC_DIR}/include

cp -a ${PORT_SRC_DIR}/port ${SRC_DIR}
cp -a ${PORT_SRC_DIR}/drivers ${SRC_DIR}
cp -a ${U8G2_SRC_DIR}/csrc ${SRC_DIR}
cp -a ${U8G2_SRC_DIR}/cppsrc ${SRC_DIR}
cp -a ${SETUP_DIR}/files/U8x8lib.cpp ${SRC_DIR}/cppsrc  # overwrite
cp -a ${SETUP_DIR}/codebuild ${SRC_DIR}/setup
cp -a ${U8G2_SRC_DIR}/tools/codebuild/codebuild.c ${SRC_DIR}/setup/codebuild

# ...rename a couple of files (clash with u8g2 names) and ensure local includes 
mv ${SRC_DIR}/port/U8g2lib.c ${SRC_DIR}/port/u8g2arm.c
sed -i 's!"U8g2lib.h"!"u8g2arm.h"!' ${SRC_DIR}/port/u8g2arm.c
mv ${SRC_DIR}/port/U8g2lib.h ${SRC_DIR}/port/u8g2arm.h
sed -i 's!"U8G2LIB_H"!"U8G2ARM_H"!' ${SRC_DIR}/port/u8g2arm.c
sed -i 's!include "!include "../drivers/!' ${SRC_DIR}/port/u8g2arm.h
sed -i 's!<u8g2.h>!"../csrc/u8g2.h"!' ${SRC_DIR}/port/u8g2arm.h
sed -i 's!#endif!#ifdef __cplusplus\
}\
#endif\
\
#endif!' ${SRC_DIR}/port/u8g2arm.h
sed -i '/#define U8G2LIB_H/a \
\
#ifdef __cplusplus\
extern "C" {\
#endif\n' ${SRC_DIR}/port/u8g2arm.h


# ...ensure PIN code is included
sed -i 's!#ifdef ARDUINO!#if 1     // libug8arm: was #ifdef ARDUINO!' ${SRC_DIR}/csrc/u8x8.h

# Add licence to port code
for p in ${SRC_DIR}/port/* ${SRC_DIR}/drivers/* ; do
cat ${SETUP_DIR}/files/COPYING_u8g2_linux_arm ${p} > tmp.txt && \
  mv tmp.txt ${p}
done

# Create C++ interface
sed -i 's!#include <Arduino.h>!!' ${SRC_DIR}/cppsrc/U8x8lib.h
sed -i 's!#include <Print.h>!!' ${SRC_DIR}/cppsrc/U8x8lib.h
sed -i 's!#include "u8x8.h"!#include "../csrc/u8x8.h"!' ${SRC_DIR}/cppsrc/U8x8lib.h
sed -i 's! : public Print!!' ${SRC_DIR}/cppsrc/U8x8lib.h
sed -i 's!_byte_arduino_!_byte_arm_linux_!' ${SRC_DIR}/cppsrc/U8x8lib.h
sed -i 's!u8x8_gpio_and_delay_arduino!u8x8_arm_linux_gpio_and_delay!' ${SRC_DIR}/cppsrc/U8x8lib.h

sed -i 's!#include <Arduino.h>!!' ${SRC_DIR}/cppsrc/U8g2lib.h
sed -i 's!#include <Print.h>!!' ${SRC_DIR}/cppsrc/U8g2lib.h
sed -i 's!#include "u8g2.h"!#include "../csrc/u8g2.h"!' ${SRC_DIR}/cppsrc/U8g2lib.h
sed -i 's! : public Print!!' ${SRC_DIR}/cppsrc/U8g2lib.h

sed -i 's!_byte_arduino_!_byte_arm_linux_!' ${SRC_DIR}/setup/codebuild/codebuild.c
sed -i 's!u8x8_gpio_and_delay_arduino!u8x8_arm_linux_gpio_and_delay!' ${SRC_DIR}/setup/codebuild/codebuild.c
sed -i 's!u8x8_gpio_and_delay_arduino!u8x8_arm_linux_gpio_and_delay!' ${SRC_DIR}/setup/codebuild/codebuild.c
sed -i 's!int main!int main_orig!' ${SRC_DIR}/setup/codebuild/codebuild.c
(cd src/setup/codebuild; make -f makefile; ./codebuild_cpp)

# generate Makefile.am 
# TAB="$(printf '\t')"
cat << END >> ${SRC_DIR}/Makefile.am
lib_LTLIBRARIES = libu8g2arm.la
libu8g2arm_la_SOURCES =
libu8g2arm_la_LIBADD = libu8g2armport.la libu8g2armcsrc.la

noinst_LTLIBRARIES = libu8g2armport.la libu8g2armcsrc.la

libu8g2armport_la_SOURCES = \\
END

for p in ${SRC_DIR}/port/*.c ${SRC_DIR}/port/*.h ; do
f=$(basename $p)
echo -e "\tport/${f} \\" >> ${SRC_DIR}/Makefile.am
done
for p in ${SRC_DIR}/drivers/*.c ${SRC_DIR}/drivers/*.h ; do
f=$(basename $p)
echo -e "\tdrivers/${f} \\" >> ${SRC_DIR}/Makefile.am
done
echo -e "\t# terminate list" >> ${SRC_DIR}/Makefile.am


cat << END >> ${SRC_DIR}/Makefile.am

libu8g2armcsrc_la_SOURCES = \\
END

for p in ${SRC_DIR}/csrc/*.c ${SRC_DIR}/csrc/*.h ; do
f=$(basename $p)
echo -e "\tcsrc/${f} \\" >> ${SRC_DIR}/Makefile.am
done
for p in ${SRC_DIR}/cppsrc/*.cpp ${SRC_DIR}/cppsrc/*.h ; do
f=$(basename $p)
echo -e "\tcppsrc/${f} \\" >> ${SRC_DIR}/Makefile.am
done
echo -e "\t# terminate list" >> ${SRC_DIR}/Makefile.am

cat << END >> ${SRC_DIR}/Makefile.am

pkginclude_HEADERS = \\
END
for p in ${SRC_DIR}/port/*.h  ${SRC_DIR}/drivers/*.h ${SRC_DIR}/csrc/*.h ${SRC_DIR}/cppsrc/*.h ; do
cp ${p} ${SRC_DIR}/include
f=$(basename $p)
echo -e "\tinclude/${f} \\" >> ${SRC_DIR}/Makefile.am
done
echo -e "\t# terminate list" >> ${SRC_DIR}/Makefile.am

#sed 's!<u8g2.h>!"u8g2.h"!' ${PORT_SRC_DIR}/port/U8g2lib.h > ${SRC_DIR}/include/u8g2arm.h
sed -i 's!\.\./[^/]*/!!' ${SRC_DIR}/include/*.h

