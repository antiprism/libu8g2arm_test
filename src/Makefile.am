lib_LTLIBRARIES = libu8g2arm.la
libu8g2arm_la_SOURCES =
libu8g2arm_la_LIBADD = libu8g2armport.la libu8g2armcsrc.la

noinst_LTLIBRARIES = libu8g2armport.la libu8g2armcsrc.la

libu8g2armport_la_SOURCES = \
	port/u8g2arm.c \
	port/u8g2arm.h \
	drivers/gpio.c \
	drivers/i2c.c \
	drivers/spi.c \
	drivers/gpio.h \
	drivers/i2c.h \
	drivers/spi.h \
	# terminate list

libu8g2armcsrc_la_SOURCES = \
	csrc/u8g2_bitmap.c \
	csrc/u8g2_box.c \
	csrc/u8g2_buffer.c \
	csrc/u8g2_circle.c \
	csrc/u8g2_cleardisplay.c \
	csrc/u8g2_d_memory.c \
	csrc/u8g2_d_setup.c \
	csrc/u8g2_font.c \
	csrc/u8g2_fonts.c \
	csrc/u8g2_hvline.c \
	csrc/u8g2_input_value.c \
	csrc/u8g2_intersection.c \
	csrc/u8g2_kerning.c \
	csrc/u8g2_line.c \
	csrc/u8g2_ll_hvline.c \
	csrc/u8g2_message.c \
	csrc/u8g2_polygon.c \
	csrc/u8g2_selection_list.c \
	csrc/u8g2_setup.c \
	csrc/u8log.c \
	csrc/u8log_u8g2.c \
	csrc/u8log_u8x8.c \
	csrc/u8x8_8x8.c \
	csrc/u8x8_byte.c \
	csrc/u8x8_cad.c \
	csrc/u8x8_d_a2printer.c \
	csrc/u8x8_debounce.c \
	csrc/u8x8_d_il3820_296x128.c \
	csrc/u8x8_display.c \
	csrc/u8x8_d_ist3020.c \
	csrc/u8x8_d_ist7920.c \
	csrc/u8x8_d_ks0108.c \
	csrc/u8x8_d_lc7981.c \
	csrc/u8x8_d_ld7032_60x32.c \
	csrc/u8x8_d_ls013b7dh03.c \
	csrc/u8x8_d_max7219.c \
	csrc/u8x8_d_pcd8544_84x48.c \
	csrc/u8x8_d_pcf8812.c \
	csrc/u8x8_d_pcf8814_hx1230.c \
	csrc/u8x8_d_sbn1661.c \
	csrc/u8x8_d_sed1330.c \
	csrc/u8x8_d_sh1106_64x32.c \
	csrc/u8x8_d_sh1106_72x40.c \
	csrc/u8x8_d_sh1107.c \
	csrc/u8x8_d_sh1108.c \
	csrc/u8x8_d_sh1122.c \
	csrc/u8x8_d_ssd1305.c \
	csrc/u8x8_d_ssd1306_128x32.c \
	csrc/u8x8_d_ssd1306_128x64_noname.c \
	csrc/u8x8_d_ssd1306_48x64.c \
	csrc/u8x8_d_ssd1306_64x32.c \
	csrc/u8x8_d_ssd1306_64x48.c \
	csrc/u8x8_d_ssd1306_96x16.c \
	csrc/u8x8_d_ssd1309.c \
	csrc/u8x8_d_ssd1316.c \
	csrc/u8x8_d_ssd1317.c \
	csrc/u8x8_d_ssd1318.c \
	csrc/u8x8_d_ssd1322.c \
	csrc/u8x8_d_ssd1325.c \
	csrc/u8x8_d_ssd1326.c \
	csrc/u8x8_d_ssd1327.c \
	csrc/u8x8_d_ssd1329.c \
	csrc/u8x8_d_ssd1606_172x72.c \
	csrc/u8x8_d_ssd1607_200x200.c \
	csrc/u8x8_d_st7511.c \
	csrc/u8x8_d_st75256.c \
	csrc/u8x8_d_st7528.c \
	csrc/u8x8_d_st75320.c \
	csrc/u8x8_d_st7565.c \
	csrc/u8x8_d_st7567.c \
	csrc/u8x8_d_st7586s_erc240160.c \
	csrc/u8x8_d_st7586s_s028hn118a.c \
	csrc/u8x8_d_st7588.c \
	csrc/u8x8_d_st7920.c \
	csrc/u8x8_d_stdio.c \
	csrc/u8x8_d_t6963.c \
	csrc/u8x8_d_uc1601.c \
	csrc/u8x8_d_uc1604.c \
	csrc/u8x8_d_uc1608.c \
	csrc/u8x8_d_uc1610.c \
	csrc/u8x8_d_uc1611.c \
	csrc/u8x8_d_uc1617.c \
	csrc/u8x8_d_uc1638.c \
	csrc/u8x8_d_uc1701_dogs102.c \
	csrc/u8x8_d_uc1701_mini12864.c \
	csrc/u8x8_fonts.c \
	csrc/u8x8_gpio.c \
	csrc/u8x8_input_value.c \
	csrc/u8x8_message.c \
	csrc/u8x8_selection_list.c \
	csrc/u8x8_setup.c \
	csrc/u8x8_string.c \
	csrc/u8x8_u16toa.c \
	csrc/u8x8_u8toa.c \
	csrc/u8g2.h \
	csrc/u8x8.h \
	cppsrc/U8x8lib.cpp \
	cppsrc/U8g2lib.h \
	cppsrc/U8x8lib.h \
	# terminate list

pkginclude_HEADERS = \
	include/u8g2arm.h \
	include/gpio.h \
	include/i2c.h \
	include/spi.h \
	include/u8g2.h \
	include/u8x8.h \
	include/U8g2lib.h \
	include/U8x8lib.h \
	# terminate list
