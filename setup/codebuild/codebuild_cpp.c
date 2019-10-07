#include "codebuild.c"

void do_display2(int controller_idx, int display_idx, const char *postfix)
{
  // libu8g2 START01
  if ( controller_list[controller_idx].com & COM_4WSPI )
  {
    do_display_interface(controller_idx, display_idx, postfix, 0);              /* SW SPI */
    do_display_interface(controller_idx, display_idx, postfix, 1);              /* HW SPI */
  }
  if ( controller_list[controller_idx].com & COM_3WSPI )
  {
    do_display_interface(controller_idx, display_idx, postfix, 4);              /* 3wire SW SPI */
  }
  if ( controller_list[controller_idx].com & COM_8080 )
  {
    do_display_interface(controller_idx, display_idx, postfix, 3);              /* 8080 mode */
  }
  if ( controller_list[controller_idx].com & COM_I2C )
  {
    do_display_interface(controller_idx, display_idx, postfix, 6);              /* SW I2C */
    do_display_interface(controller_idx, display_idx, postfix, 7);              /* HW I2C */
  }
  return;
  // libu8g2 END01
}



void do_controller_buffer_code2(int idx, const char *postfix, int buf_len, int rows)
{
  int display_idx = 0;
  while( controller_list[idx].display_list[display_idx].name != NULL )
  {
    do_display2(idx, display_idx, postfix);
    display_idx++;
  }
}

void do_controller_list2(void)
{
  int i;
  for( i = 0; i < sizeof(controller_list)/sizeof(*controller_list); i++ )
  {
    do_controller_buffer_code2(i, "1", controller_list[i].tile_width*8, 1);
    do_controller_buffer_code2(i, "2", controller_list[i].tile_width*8*2, 2);
    do_controller_buffer_code2(i, "f", controller_list[i].tile_width*8*controller_list[i].tile_height, controller_list[i].tile_height);
    printf("\n");
  }
}


int main(void)
{
  
  u8g2_cpp_header_fp = fopen("U8g2lib.h", "w");
  fprintf(u8g2_cpp_header_fp, "/* generated code (codebuild), u8g2 project */\n");
  
  u8x8_cpp_header_fp = fopen("U8x8lib.h", "w");
  fprintf(u8x8_cpp_header_fp, "/* generated code (codebuild), u8g2 project */\n");

  do_controller_list2();

  fclose(u8g2_cpp_header_fp);
  fclose(u8x8_cpp_header_fp);

  insert_into_file("../../cppsrc/U8g2lib.h", "U8g2lib.h", "/* Arduino constructor list start */", "/* Arduino constructor list end */");
  insert_into_file("../../cppsrc/U8x8lib.h", "U8x8lib.h", "// constructor list start", "// constructor list end");

  return 0;
}

