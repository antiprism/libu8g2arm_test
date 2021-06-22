# Examples

Build the example individually with, e.g. `make ex_init_class`

* [ex_init_class](ex_init_class.cpp) initialise a display U8g2-style using C++.

  Build with
  ```
  make ex_init_class
  ```
* [ex_init_c](ex_init_c.c) initialise a display U8g2-style using C

  Build with
  ```
  make ex_init_c
  ```
* [ex_init_runtime](ex_init_runtime.cpp) initialise a display specified by a string.
  
  Build with
  ```
  make ex_init_runtime
  ```
* [ex_extra_fonts](ex_extra_fonts.cpp) use a font with a GPL licence.
  
  Build with
  ```
  LDLIBS=-l:libu8g2fonts_gplcopyleft.a make ex_extra_fonts
  ```
* [ex_init_command_line](ex_init_command_line.cpp) initialise a display specified on the command line,
  and optionally include support for SDL.

  The SDL support enables a program to be developed on
  other systems, for example Ubuntu running on an Intel processor, and display
  into a window on the desktop rather than onto a hardware screen.
  
  Build with
  ```
  make ex_init_command_line
  ```

  To enable SDL support, install an SDL development package and build with
  ```
  ENABLE_SDL=1 make ex_init_command_line
  ```
  To display using SDL, run the program with
  ```
  ./ex_init_command_line SDL
  ```
  Specify the screen resolution with, e.g.
  ```
  ./ex_init_command_line SDL,128X32
  ```

