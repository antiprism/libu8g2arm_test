# local install of libu8g2arm with, e.g. ./configure --prefix="/home/pi/inst"
INST=/home/pi/inst

CPPFLAGS=-W -Wall -I$(INST)/include/
LDFLAGS=-L$(INST)/lib
LDLIBS=-l:libu8g2arm.a
CXXFLAGS=-std=c++11

PROGRAMS=ex_init_class ex_init_c ex_init_runtime

all: $(PROGRAMS)

clean:
	rm $(PROGRAMS)
