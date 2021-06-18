# local install of libu8g2arm with, e.g. ./configure --prefix="/home/pi/inst"
INST=/home/pi/inst

CPPFLAGS=-W -Wall -I$(INST)/include/
LDFLAGS=-L$(INST)/lib
LDLIBS=-l:libu8g2arm.a
CXXFLAGS=-std=c++11

PROGRAMS=ex_init_class ex_init_c ex_init_runtime ex_extra_fonts

all: $(PROGRAMS)

ex_extra_fonts: ex_extra_fonts.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) $< $(LDLIBS) -l:libu8g2fonts_gplcopyleft.a -o $@

#$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -l:libu8g2fonts_gplcopyleft.a -o $@ $<

clean:
	rm $(PROGRAMS)
