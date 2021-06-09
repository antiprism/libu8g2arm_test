#include "../u8g2.h"

#include "u8x8_fonts_gplcopyleft.h"

extern const uint8_t u8g2_font_siji_t_6x10[] U8G2_FONT_SECTION("u8g2_font_siji_t_6x10");
extern const uint8_t u8g2_font_mozart_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_mozart_nbp_tf");
extern const uint8_t u8g2_font_mozart_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_mozart_nbp_tr");
extern const uint8_t u8g2_font_mozart_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_mozart_nbp_tn");
extern const uint8_t u8g2_font_mozart_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_mozart_nbp_t_all");
extern const uint8_t u8g2_font_mozart_nbp_h_all[] U8G2_FONT_SECTION("u8g2_font_mozart_nbp_h_all");
extern const uint8_t u8g2_font_glasstown_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_glasstown_nbp_tf");
extern const uint8_t u8g2_font_glasstown_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_glasstown_nbp_tr");
extern const uint8_t u8g2_font_glasstown_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_glasstown_nbp_tn");
extern const uint8_t u8g2_font_glasstown_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_glasstown_nbp_t_all");
extern const uint8_t u8g2_font_shylock_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_shylock_nbp_tf");
extern const uint8_t u8g2_font_shylock_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_shylock_nbp_tr");
extern const uint8_t u8g2_font_shylock_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_shylock_nbp_tn");
extern const uint8_t u8g2_font_shylock_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_shylock_nbp_t_all");
extern const uint8_t u8g2_font_roentgen_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_roentgen_nbp_tf");
extern const uint8_t u8g2_font_roentgen_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_roentgen_nbp_tr");
extern const uint8_t u8g2_font_roentgen_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_roentgen_nbp_tn");
extern const uint8_t u8g2_font_roentgen_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_roentgen_nbp_t_all");
extern const uint8_t u8g2_font_roentgen_nbp_h_all[] U8G2_FONT_SECTION("u8g2_font_roentgen_nbp_h_all");
extern const uint8_t u8g2_font_calibration_gothic_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_calibration_gothic_nbp_tf");
extern const uint8_t u8g2_font_calibration_gothic_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_calibration_gothic_nbp_tr");
extern const uint8_t u8g2_font_calibration_gothic_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_calibration_gothic_nbp_tn");
extern const uint8_t u8g2_font_calibration_gothic_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_calibration_gothic_nbp_t_all");
extern const uint8_t u8g2_font_smart_patrol_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_smart_patrol_nbp_tf");
extern const uint8_t u8g2_font_smart_patrol_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_smart_patrol_nbp_tr");
extern const uint8_t u8g2_font_smart_patrol_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_smart_patrol_nbp_tn");
extern const uint8_t u8g2_font_prospero_bold_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_prospero_bold_nbp_tf");
extern const uint8_t u8g2_font_prospero_bold_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_prospero_bold_nbp_tr");
extern const uint8_t u8g2_font_prospero_bold_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_prospero_bold_nbp_tn");
extern const uint8_t u8g2_font_prospero_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_prospero_nbp_tf");
extern const uint8_t u8g2_font_prospero_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_prospero_nbp_tr");
extern const uint8_t u8g2_font_prospero_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_prospero_nbp_tn");
extern const uint8_t u8g2_font_balthasar_regular_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_balthasar_regular_nbp_tf");
extern const uint8_t u8g2_font_balthasar_regular_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_balthasar_regular_nbp_tr");
extern const uint8_t u8g2_font_balthasar_regular_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_balthasar_regular_nbp_tn");
extern const uint8_t u8g2_font_balthasar_titling_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_balthasar_titling_nbp_tf");
extern const uint8_t u8g2_font_balthasar_titling_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_balthasar_titling_nbp_tr");
extern const uint8_t u8g2_font_balthasar_titling_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_balthasar_titling_nbp_tn");
extern const uint8_t u8g2_font_synchronizer_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_synchronizer_nbp_tf");
extern const uint8_t u8g2_font_synchronizer_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_synchronizer_nbp_tr");
extern const uint8_t u8g2_font_synchronizer_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_synchronizer_nbp_tn");
extern const uint8_t u8g2_font_mercutio_basic_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_mercutio_basic_nbp_tf");
extern const uint8_t u8g2_font_mercutio_basic_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_mercutio_basic_nbp_tr");
extern const uint8_t u8g2_font_mercutio_basic_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_mercutio_basic_nbp_tn");
extern const uint8_t u8g2_font_mercutio_basic_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_mercutio_basic_nbp_t_all");
extern const uint8_t u8g2_font_mercutio_sc_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_mercutio_sc_nbp_tf");
extern const uint8_t u8g2_font_mercutio_sc_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_mercutio_sc_nbp_tr");
extern const uint8_t u8g2_font_mercutio_sc_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_mercutio_sc_nbp_tn");
extern const uint8_t u8g2_font_mercutio_sc_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_mercutio_sc_nbp_t_all");
extern const uint8_t u8g2_font_miranda_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_miranda_nbp_tf");
extern const uint8_t u8g2_font_miranda_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_miranda_nbp_tr");
extern const uint8_t u8g2_font_miranda_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_miranda_nbp_tn");
extern const uint8_t u8g2_font_nine_by_five_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_nine_by_five_nbp_tf");
extern const uint8_t u8g2_font_nine_by_five_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_nine_by_five_nbp_tr");
extern const uint8_t u8g2_font_nine_by_five_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_nine_by_five_nbp_tn");
extern const uint8_t u8g2_font_nine_by_five_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_nine_by_five_nbp_t_all");
extern const uint8_t u8g2_font_rosencrantz_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_rosencrantz_nbp_tf");
extern const uint8_t u8g2_font_rosencrantz_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_rosencrantz_nbp_tr");
extern const uint8_t u8g2_font_rosencrantz_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_rosencrantz_nbp_tn");
extern const uint8_t u8g2_font_rosencrantz_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_rosencrantz_nbp_t_all");
extern const uint8_t u8g2_font_guildenstern_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_guildenstern_nbp_tf");
extern const uint8_t u8g2_font_guildenstern_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_guildenstern_nbp_tr");
extern const uint8_t u8g2_font_guildenstern_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_guildenstern_nbp_tn");
extern const uint8_t u8g2_font_guildenstern_nbp_t_all[] U8G2_FONT_SECTION("u8g2_font_guildenstern_nbp_t_all");
extern const uint8_t u8g2_font_astragal_nbp_tf[] U8G2_FONT_SECTION("u8g2_font_astragal_nbp_tf");
extern const uint8_t u8g2_font_astragal_nbp_tr[] U8G2_FONT_SECTION("u8g2_font_astragal_nbp_tr");
extern const uint8_t u8g2_font_astragal_nbp_tn[] U8G2_FONT_SECTION("u8g2_font_astragal_nbp_tn");
extern const uint8_t u8g2_font_unifont_tf[] U8G2_FONT_SECTION("u8g2_font_unifont_tf");
extern const uint8_t u8g2_font_unifont_tr[] U8G2_FONT_SECTION("u8g2_font_unifont_tr");
extern const uint8_t u8g2_font_unifont_te[] U8G2_FONT_SECTION("u8g2_font_unifont_te");
extern const uint8_t u8g2_font_unifont_t_latin[] U8G2_FONT_SECTION("u8g2_font_unifont_t_latin");
extern const uint8_t u8g2_font_unifont_t_extended[] U8G2_FONT_SECTION("u8g2_font_unifont_t_extended");
extern const uint8_t u8g2_font_unifont_t_72_73[] U8G2_FONT_SECTION("u8g2_font_unifont_t_72_73");
extern const uint8_t u8g2_font_unifont_t_0_72_73[] U8G2_FONT_SECTION("u8g2_font_unifont_t_0_72_73");
extern const uint8_t u8g2_font_unifont_t_75[] U8G2_FONT_SECTION("u8g2_font_unifont_t_75");
extern const uint8_t u8g2_font_unifont_t_0_75[] U8G2_FONT_SECTION("u8g2_font_unifont_t_0_75");
extern const uint8_t u8g2_font_unifont_t_76[] U8G2_FONT_SECTION("u8g2_font_unifont_t_76");
extern const uint8_t u8g2_font_unifont_t_0_76[] U8G2_FONT_SECTION("u8g2_font_unifont_t_0_76");
extern const uint8_t u8g2_font_unifont_t_77[] U8G2_FONT_SECTION("u8g2_font_unifont_t_77");
extern const uint8_t u8g2_font_unifont_t_0_77[] U8G2_FONT_SECTION("u8g2_font_unifont_t_0_77");
extern const uint8_t u8g2_font_unifont_t_78_79[] U8G2_FONT_SECTION("u8g2_font_unifont_t_78_79");
extern const uint8_t u8g2_font_unifont_t_0_78_79[] U8G2_FONT_SECTION("u8g2_font_unifont_t_0_78_79");
extern const uint8_t u8g2_font_unifont_t_86[] U8G2_FONT_SECTION("u8g2_font_unifont_t_86");
extern const uint8_t u8g2_font_unifont_t_0_86[] U8G2_FONT_SECTION("u8g2_font_unifont_t_0_86");
extern const uint8_t u8g2_font_unifont_t_greek[] U8G2_FONT_SECTION("u8g2_font_unifont_t_greek");
extern const uint8_t u8g2_font_unifont_t_cyrillic[] U8G2_FONT_SECTION("u8g2_font_unifont_t_cyrillic");
extern const uint8_t u8g2_font_unifont_t_hebrew[] U8G2_FONT_SECTION("u8g2_font_unifont_t_hebrew");
extern const uint8_t u8g2_font_unifont_t_bengali[] U8G2_FONT_SECTION("u8g2_font_unifont_t_bengali");
extern const uint8_t u8g2_font_unifont_t_tibetan[] U8G2_FONT_SECTION("u8g2_font_unifont_t_tibetan");
extern const uint8_t u8g2_font_unifont_t_urdu[] U8G2_FONT_SECTION("u8g2_font_unifont_t_urdu");
extern const uint8_t u8g2_font_unifont_t_polish[] U8G2_FONT_SECTION("u8g2_font_unifont_t_polish");
extern const uint8_t u8g2_font_unifont_t_devanagari[] U8G2_FONT_SECTION("u8g2_font_unifont_t_devanagari");
extern const uint8_t u8g2_font_unifont_t_arabic[] U8G2_FONT_SECTION("u8g2_font_unifont_t_arabic");
extern const uint8_t u8g2_font_unifont_t_symbols[] U8G2_FONT_SECTION("u8g2_font_unifont_t_symbols");
extern const uint8_t u8g2_font_unifont_h_symbols[] U8G2_FONT_SECTION("u8g2_font_unifont_h_symbols");
extern const uint8_t u8g2_font_unifont_t_emoticons[] U8G2_FONT_SECTION("u8g2_font_unifont_t_emoticons");
extern const uint8_t u8g2_font_unifont_t_animals[] U8G2_FONT_SECTION("u8g2_font_unifont_t_animals");
extern const uint8_t u8g2_font_unifont_t_domino[] U8G2_FONT_SECTION("u8g2_font_unifont_t_domino");
extern const uint8_t u8g2_font_unifont_t_cards[] U8G2_FONT_SECTION("u8g2_font_unifont_t_cards");
extern const uint8_t u8g2_font_unifont_t_weather[] U8G2_FONT_SECTION("u8g2_font_unifont_t_weather");
extern const uint8_t u8g2_font_unifont_t_chinese1[] U8G2_FONT_SECTION("u8g2_font_unifont_t_chinese1");
extern const uint8_t u8g2_font_unifont_t_chinese2[] U8G2_FONT_SECTION("u8g2_font_unifont_t_chinese2");
extern const uint8_t u8g2_font_unifont_t_chinese3[] U8G2_FONT_SECTION("u8g2_font_unifont_t_chinese3");
extern const uint8_t u8g2_font_unifont_t_japanese1[] U8G2_FONT_SECTION("u8g2_font_unifont_t_japanese1");
extern const uint8_t u8g2_font_unifont_t_japanese2[] U8G2_FONT_SECTION("u8g2_font_unifont_t_japanese2");
extern const uint8_t u8g2_font_unifont_t_japanese3[] U8G2_FONT_SECTION("u8g2_font_unifont_t_japanese3");
extern const uint8_t u8g2_font_unifont_t_korean1[] U8G2_FONT_SECTION("u8g2_font_unifont_t_korean1");
extern const uint8_t u8g2_font_unifont_t_korean2[] U8G2_FONT_SECTION("u8g2_font_unifont_t_korean2");
extern const uint8_t u8g2_font_unifont_t_vietnamese1[] U8G2_FONT_SECTION("u8g2_font_unifont_t_vietnamese1");
extern const uint8_t u8g2_font_unifont_t_vietnamese2[] U8G2_FONT_SECTION("u8g2_font_unifont_t_vietnamese2");
extern const uint8_t u8g2_font_wqy12_t_chinese1[] U8G2_FONT_SECTION("u8g2_font_wqy12_t_chinese1");
extern const uint8_t u8g2_font_wqy12_t_chinese2[] U8G2_FONT_SECTION("u8g2_font_wqy12_t_chinese2");
extern const uint8_t u8g2_font_wqy12_t_chinese3[] U8G2_FONT_SECTION("u8g2_font_wqy12_t_chinese3");
extern const uint8_t u8g2_font_wqy12_t_gb2312[] U8G2_FONT_SECTION("u8g2_font_wqy12_t_gb2312");
extern const uint8_t u8g2_font_wqy12_t_gb2312a[] U8G2_FONT_SECTION("u8g2_font_wqy12_t_gb2312a");
extern const uint8_t u8g2_font_wqy12_t_gb2312b[] U8G2_FONT_SECTION("u8g2_font_wqy12_t_gb2312b");
extern const uint8_t u8g2_font_wqy13_t_chinese1[] U8G2_FONT_SECTION("u8g2_font_wqy13_t_chinese1");
extern const uint8_t u8g2_font_wqy13_t_chinese2[] U8G2_FONT_SECTION("u8g2_font_wqy13_t_chinese2");
extern const uint8_t u8g2_font_wqy13_t_chinese3[] U8G2_FONT_SECTION("u8g2_font_wqy13_t_chinese3");
extern const uint8_t u8g2_font_wqy13_t_gb2312[] U8G2_FONT_SECTION("u8g2_font_wqy13_t_gb2312");
extern const uint8_t u8g2_font_wqy13_t_gb2312a[] U8G2_FONT_SECTION("u8g2_font_wqy13_t_gb2312a");
extern const uint8_t u8g2_font_wqy13_t_gb2312b[] U8G2_FONT_SECTION("u8g2_font_wqy13_t_gb2312b");
extern const uint8_t u8g2_font_wqy14_t_chinese1[] U8G2_FONT_SECTION("u8g2_font_wqy14_t_chinese1");
extern const uint8_t u8g2_font_wqy14_t_chinese2[] U8G2_FONT_SECTION("u8g2_font_wqy14_t_chinese2");
extern const uint8_t u8g2_font_wqy14_t_chinese3[] U8G2_FONT_SECTION("u8g2_font_wqy14_t_chinese3");
extern const uint8_t u8g2_font_wqy14_t_gb2312[] U8G2_FONT_SECTION("u8g2_font_wqy14_t_gb2312");
extern const uint8_t u8g2_font_wqy14_t_gb2312a[] U8G2_FONT_SECTION("u8g2_font_wqy14_t_gb2312a");
extern const uint8_t u8g2_font_wqy14_t_gb2312b[] U8G2_FONT_SECTION("u8g2_font_wqy14_t_gb2312b");
extern const uint8_t u8g2_font_wqy15_t_chinese1[] U8G2_FONT_SECTION("u8g2_font_wqy15_t_chinese1");
extern const uint8_t u8g2_font_wqy15_t_chinese2[] U8G2_FONT_SECTION("u8g2_font_wqy15_t_chinese2");
extern const uint8_t u8g2_font_wqy15_t_chinese3[] U8G2_FONT_SECTION("u8g2_font_wqy15_t_chinese3");
extern const uint8_t u8g2_font_wqy15_t_gb2312[] U8G2_FONT_SECTION("u8g2_font_wqy15_t_gb2312");
extern const uint8_t u8g2_font_wqy15_t_gb2312a[] U8G2_FONT_SECTION("u8g2_font_wqy15_t_gb2312a");
extern const uint8_t u8g2_font_wqy15_t_gb2312b[] U8G2_FONT_SECTION("u8g2_font_wqy15_t_gb2312b");
extern const uint8_t u8g2_font_wqy16_t_chinese1[] U8G2_FONT_SECTION("u8g2_font_wqy16_t_chinese1");
extern const uint8_t u8g2_font_wqy16_t_chinese2[] U8G2_FONT_SECTION("u8g2_font_wqy16_t_chinese2");
extern const uint8_t u8g2_font_wqy16_t_chinese3[] U8G2_FONT_SECTION("u8g2_font_wqy16_t_chinese3");
extern const uint8_t u8g2_font_wqy16_t_gb2312[] U8G2_FONT_SECTION("u8g2_font_wqy16_t_gb2312");
extern const uint8_t u8g2_font_wqy16_t_gb2312a[] U8G2_FONT_SECTION("u8g2_font_wqy16_t_gb2312a");
extern const uint8_t u8g2_font_wqy16_t_gb2312b[] U8G2_FONT_SECTION("u8g2_font_wqy16_t_gb2312b");
extern const uint8_t u8g2_font_baby_tf[] U8G2_FONT_SECTION("u8g2_font_baby_tf");
extern const uint8_t u8g2_font_baby_tr[] U8G2_FONT_SECTION("u8g2_font_baby_tr");
extern const uint8_t u8g2_font_baby_tn[] U8G2_FONT_SECTION("u8g2_font_baby_tn");
extern const uint8_t u8g2_font_blipfest_07_tr[] U8G2_FONT_SECTION("u8g2_font_blipfest_07_tr");
extern const uint8_t u8g2_font_blipfest_07_tn[] U8G2_FONT_SECTION("u8g2_font_blipfest_07_tn");
extern const uint8_t u8g2_font_chikita_tf[] U8G2_FONT_SECTION("u8g2_font_chikita_tf");
extern const uint8_t u8g2_font_chikita_tr[] U8G2_FONT_SECTION("u8g2_font_chikita_tr");
extern const uint8_t u8g2_font_chikita_tn[] U8G2_FONT_SECTION("u8g2_font_chikita_tn");
extern const uint8_t u8g2_font_pixelle_micro_tr[] U8G2_FONT_SECTION("u8g2_font_pixelle_micro_tr");
extern const uint8_t u8g2_font_pixelle_micro_tn[] U8G2_FONT_SECTION("u8g2_font_pixelle_micro_tn");
extern const uint8_t u8g2_font_robot_de_niro_tf[] U8G2_FONT_SECTION("u8g2_font_robot_de_niro_tf");
extern const uint8_t u8g2_font_robot_de_niro_tr[] U8G2_FONT_SECTION("u8g2_font_robot_de_niro_tr");
extern const uint8_t u8g2_font_robot_de_niro_tn[] U8G2_FONT_SECTION("u8g2_font_robot_de_niro_tn");
extern const uint8_t u8g2_font_trixel_square_tf[] U8G2_FONT_SECTION("u8g2_font_trixel_square_tf");
extern const uint8_t u8g2_font_trixel_square_tr[] U8G2_FONT_SECTION("u8g2_font_trixel_square_tr");
extern const uint8_t u8g2_font_trixel_square_tn[] U8G2_FONT_SECTION("u8g2_font_trixel_square_tn");
extern const uint8_t u8g2_font_haxrcorp4089_tr[] U8G2_FONT_SECTION("u8g2_font_haxrcorp4089_tr");
extern const uint8_t u8g2_font_haxrcorp4089_tn[] U8G2_FONT_SECTION("u8g2_font_haxrcorp4089_tn");
extern const uint8_t u8g2_font_haxrcorp4089_t_cyrillic[] U8G2_FONT_SECTION("u8g2_font_haxrcorp4089_t_cyrillic");
extern const uint8_t u8g2_font_bubble_tr[] U8G2_FONT_SECTION("u8g2_font_bubble_tr");
extern const uint8_t u8g2_font_bubble_tn[] U8G2_FONT_SECTION("u8g2_font_bubble_tn");
extern const uint8_t u8g2_font_cardimon_pixel_tf[] U8G2_FONT_SECTION("u8g2_font_cardimon_pixel_tf");
extern const uint8_t u8g2_font_cardimon_pixel_tr[] U8G2_FONT_SECTION("u8g2_font_cardimon_pixel_tr");
extern const uint8_t u8g2_font_cardimon_pixel_tn[] U8G2_FONT_SECTION("u8g2_font_cardimon_pixel_tn");
extern const uint8_t u8g2_font_maniac_tf[] U8G2_FONT_SECTION("u8g2_font_maniac_tf");
extern const uint8_t u8g2_font_maniac_tr[] U8G2_FONT_SECTION("u8g2_font_maniac_tr");
extern const uint8_t u8g2_font_maniac_tn[] U8G2_FONT_SECTION("u8g2_font_maniac_tn");
extern const uint8_t u8g2_font_maniac_te[] U8G2_FONT_SECTION("u8g2_font_maniac_te");
extern const uint8_t u8g2_font_pxplusibmcgathin_8f[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcgathin_8f");
extern const uint8_t u8g2_font_pxplusibmcgathin_8r[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcgathin_8r");
extern const uint8_t u8g2_font_pxplusibmcgathin_8n[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcgathin_8n");
extern const uint8_t u8g2_font_pxplusibmcgathin_8u[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcgathin_8u");
extern const uint8_t u8g2_font_pxplusibmcga_8f[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcga_8f");
extern const uint8_t u8g2_font_pxplusibmcga_8r[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcga_8r");
extern const uint8_t u8g2_font_pxplusibmcga_8n[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcga_8n");
extern const uint8_t u8g2_font_pxplusibmcga_8u[] U8G2_FONT_SECTION("u8g2_font_pxplusibmcga_8u");
extern const uint8_t u8g2_font_pxplustandynewtv_8f[] U8G2_FONT_SECTION("u8g2_font_pxplustandynewtv_8f");
extern const uint8_t u8g2_font_pxplustandynewtv_8r[] U8G2_FONT_SECTION("u8g2_font_pxplustandynewtv_8r");
extern const uint8_t u8g2_font_pxplustandynewtv_8n[] U8G2_FONT_SECTION("u8g2_font_pxplustandynewtv_8n");
extern const uint8_t u8g2_font_pxplustandynewtv_8u[] U8G2_FONT_SECTION("u8g2_font_pxplustandynewtv_8u");
extern const uint8_t u8g2_font_pxplustandynewtv_t_all[] U8G2_FONT_SECTION("u8g2_font_pxplustandynewtv_t_all");
extern const uint8_t u8g2_font_pxplustandynewtv_8_all[] U8G2_FONT_SECTION("u8g2_font_pxplustandynewtv_8_all");
extern const uint8_t u8g2_font_pxplusibmvga9_tf[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_tf");
extern const uint8_t u8g2_font_pxplusibmvga9_tr[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_tr");
extern const uint8_t u8g2_font_pxplusibmvga9_tn[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_tn");
extern const uint8_t u8g2_font_pxplusibmvga9_mf[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_mf");
extern const uint8_t u8g2_font_pxplusibmvga9_mr[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_mr");
extern const uint8_t u8g2_font_pxplusibmvga9_mn[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_mn");
extern const uint8_t u8g2_font_pxplusibmvga9_t_all[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_t_all");
extern const uint8_t u8g2_font_pxplusibmvga9_m_all[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga9_m_all");
extern const uint8_t u8g2_font_pxplusibmvga8_tf[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_tf");
extern const uint8_t u8g2_font_pxplusibmvga8_tr[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_tr");
extern const uint8_t u8g2_font_pxplusibmvga8_tn[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_tn");
extern const uint8_t u8g2_font_pxplusibmvga8_mf[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_mf");
extern const uint8_t u8g2_font_pxplusibmvga8_mr[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_mr");
extern const uint8_t u8g2_font_pxplusibmvga8_mn[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_mn");
extern const uint8_t u8g2_font_pxplusibmvga8_t_all[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_t_all");
extern const uint8_t u8g2_font_pxplusibmvga8_m_all[] U8G2_FONT_SECTION("u8g2_font_pxplusibmvga8_m_all");
extern const uint8_t u8g2_font_px437wyse700a_tf[] U8G2_FONT_SECTION("u8g2_font_px437wyse700a_tf");
extern const uint8_t u8g2_font_px437wyse700a_tr[] U8G2_FONT_SECTION("u8g2_font_px437wyse700a_tr");
extern const uint8_t u8g2_font_px437wyse700a_tn[] U8G2_FONT_SECTION("u8g2_font_px437wyse700a_tn");
extern const uint8_t u8g2_font_px437wyse700a_mf[] U8G2_FONT_SECTION("u8g2_font_px437wyse700a_mf");
extern const uint8_t u8g2_font_px437wyse700a_mr[] U8G2_FONT_SECTION("u8g2_font_px437wyse700a_mr");
extern const uint8_t u8g2_font_px437wyse700a_mn[] U8G2_FONT_SECTION("u8g2_font_px437wyse700a_mn");
extern const uint8_t u8g2_font_px437wyse700b_tf[] U8G2_FONT_SECTION("u8g2_font_px437wyse700b_tf");
extern const uint8_t u8g2_font_px437wyse700b_tr[] U8G2_FONT_SECTION("u8g2_font_px437wyse700b_tr");
extern const uint8_t u8g2_font_px437wyse700b_tn[] U8G2_FONT_SECTION("u8g2_font_px437wyse700b_tn");
extern const uint8_t u8g2_font_px437wyse700b_mf[] U8G2_FONT_SECTION("u8g2_font_px437wyse700b_mf");
extern const uint8_t u8g2_font_px437wyse700b_mr[] U8G2_FONT_SECTION("u8g2_font_px437wyse700b_mr");
extern const uint8_t u8g2_font_px437wyse700b_mn[] U8G2_FONT_SECTION("u8g2_font_px437wyse700b_mn");


const font_lookup u8g2_fonts_gplcopyleft[] = {
  { "u8g2_font_siji_t_6x10", u8g2_font_siji_t_6x10},
  { "u8g2_font_mozart_nbp_tf", u8g2_font_mozart_nbp_tf},
  { "u8g2_font_mozart_nbp_tr", u8g2_font_mozart_nbp_tr},
  { "u8g2_font_mozart_nbp_tn", u8g2_font_mozart_nbp_tn},
  { "u8g2_font_mozart_nbp_t_all", u8g2_font_mozart_nbp_t_all},
  { "u8g2_font_mozart_nbp_h_all", u8g2_font_mozart_nbp_h_all},
  { "u8g2_font_glasstown_nbp_tf", u8g2_font_glasstown_nbp_tf},
  { "u8g2_font_glasstown_nbp_tr", u8g2_font_glasstown_nbp_tr},
  { "u8g2_font_glasstown_nbp_tn", u8g2_font_glasstown_nbp_tn},
  { "u8g2_font_glasstown_nbp_t_all", u8g2_font_glasstown_nbp_t_all},
  { "u8g2_font_shylock_nbp_tf", u8g2_font_shylock_nbp_tf},
  { "u8g2_font_shylock_nbp_tr", u8g2_font_shylock_nbp_tr},
  { "u8g2_font_shylock_nbp_tn", u8g2_font_shylock_nbp_tn},
  { "u8g2_font_shylock_nbp_t_all", u8g2_font_shylock_nbp_t_all},
  { "u8g2_font_roentgen_nbp_tf", u8g2_font_roentgen_nbp_tf},
  { "u8g2_font_roentgen_nbp_tr", u8g2_font_roentgen_nbp_tr},
  { "u8g2_font_roentgen_nbp_tn", u8g2_font_roentgen_nbp_tn},
  { "u8g2_font_roentgen_nbp_t_all", u8g2_font_roentgen_nbp_t_all},
  { "u8g2_font_roentgen_nbp_h_all", u8g2_font_roentgen_nbp_h_all},
  { "u8g2_font_calibration_gothic_nbp_tf", u8g2_font_calibration_gothic_nbp_tf},
  { "u8g2_font_calibration_gothic_nbp_tr", u8g2_font_calibration_gothic_nbp_tr},
  { "u8g2_font_calibration_gothic_nbp_tn", u8g2_font_calibration_gothic_nbp_tn},
  { "u8g2_font_calibration_gothic_nbp_t_all", u8g2_font_calibration_gothic_nbp_t_all},
  { "u8g2_font_smart_patrol_nbp_tf", u8g2_font_smart_patrol_nbp_tf},
  { "u8g2_font_smart_patrol_nbp_tr", u8g2_font_smart_patrol_nbp_tr},
  { "u8g2_font_smart_patrol_nbp_tn", u8g2_font_smart_patrol_nbp_tn},
  { "u8g2_font_prospero_bold_nbp_tf", u8g2_font_prospero_bold_nbp_tf},
  { "u8g2_font_prospero_bold_nbp_tr", u8g2_font_prospero_bold_nbp_tr},
  { "u8g2_font_prospero_bold_nbp_tn", u8g2_font_prospero_bold_nbp_tn},
  { "u8g2_font_prospero_nbp_tf", u8g2_font_prospero_nbp_tf},
  { "u8g2_font_prospero_nbp_tr", u8g2_font_prospero_nbp_tr},
  { "u8g2_font_prospero_nbp_tn", u8g2_font_prospero_nbp_tn},
  { "u8g2_font_balthasar_regular_nbp_tf", u8g2_font_balthasar_regular_nbp_tf},
  { "u8g2_font_balthasar_regular_nbp_tr", u8g2_font_balthasar_regular_nbp_tr},
  { "u8g2_font_balthasar_regular_nbp_tn", u8g2_font_balthasar_regular_nbp_tn},
  { "u8g2_font_balthasar_titling_nbp_tf", u8g2_font_balthasar_titling_nbp_tf},
  { "u8g2_font_balthasar_titling_nbp_tr", u8g2_font_balthasar_titling_nbp_tr},
  { "u8g2_font_balthasar_titling_nbp_tn", u8g2_font_balthasar_titling_nbp_tn},
  { "u8g2_font_synchronizer_nbp_tf", u8g2_font_synchronizer_nbp_tf},
  { "u8g2_font_synchronizer_nbp_tr", u8g2_font_synchronizer_nbp_tr},
  { "u8g2_font_synchronizer_nbp_tn", u8g2_font_synchronizer_nbp_tn},
  { "u8g2_font_mercutio_basic_nbp_tf", u8g2_font_mercutio_basic_nbp_tf},
  { "u8g2_font_mercutio_basic_nbp_tr", u8g2_font_mercutio_basic_nbp_tr},
  { "u8g2_font_mercutio_basic_nbp_tn", u8g2_font_mercutio_basic_nbp_tn},
  { "u8g2_font_mercutio_basic_nbp_t_all", u8g2_font_mercutio_basic_nbp_t_all},
  { "u8g2_font_mercutio_sc_nbp_tf", u8g2_font_mercutio_sc_nbp_tf},
  { "u8g2_font_mercutio_sc_nbp_tr", u8g2_font_mercutio_sc_nbp_tr},
  { "u8g2_font_mercutio_sc_nbp_tn", u8g2_font_mercutio_sc_nbp_tn},
  { "u8g2_font_mercutio_sc_nbp_t_all", u8g2_font_mercutio_sc_nbp_t_all},
  { "u8g2_font_miranda_nbp_tf", u8g2_font_miranda_nbp_tf},
  { "u8g2_font_miranda_nbp_tr", u8g2_font_miranda_nbp_tr},
  { "u8g2_font_miranda_nbp_tn", u8g2_font_miranda_nbp_tn},
  { "u8g2_font_nine_by_five_nbp_tf", u8g2_font_nine_by_five_nbp_tf},
  { "u8g2_font_nine_by_five_nbp_tr", u8g2_font_nine_by_five_nbp_tr},
  { "u8g2_font_nine_by_five_nbp_tn", u8g2_font_nine_by_five_nbp_tn},
  { "u8g2_font_nine_by_five_nbp_t_all", u8g2_font_nine_by_five_nbp_t_all},
  { "u8g2_font_rosencrantz_nbp_tf", u8g2_font_rosencrantz_nbp_tf},
  { "u8g2_font_rosencrantz_nbp_tr", u8g2_font_rosencrantz_nbp_tr},
  { "u8g2_font_rosencrantz_nbp_tn", u8g2_font_rosencrantz_nbp_tn},
  { "u8g2_font_rosencrantz_nbp_t_all", u8g2_font_rosencrantz_nbp_t_all},
  { "u8g2_font_guildenstern_nbp_tf", u8g2_font_guildenstern_nbp_tf},
  { "u8g2_font_guildenstern_nbp_tr", u8g2_font_guildenstern_nbp_tr},
  { "u8g2_font_guildenstern_nbp_tn", u8g2_font_guildenstern_nbp_tn},
  { "u8g2_font_guildenstern_nbp_t_all", u8g2_font_guildenstern_nbp_t_all},
  { "u8g2_font_astragal_nbp_tf", u8g2_font_astragal_nbp_tf},
  { "u8g2_font_astragal_nbp_tr", u8g2_font_astragal_nbp_tr},
  { "u8g2_font_astragal_nbp_tn", u8g2_font_astragal_nbp_tn},
  { "u8g2_font_unifont_tf", u8g2_font_unifont_tf},
  { "u8g2_font_unifont_tr", u8g2_font_unifont_tr},
  { "u8g2_font_unifont_te", u8g2_font_unifont_te},
  { "u8g2_font_unifont_t_latin", u8g2_font_unifont_t_latin},
  { "u8g2_font_unifont_t_extended", u8g2_font_unifont_t_extended},
  { "u8g2_font_unifont_t_72_73", u8g2_font_unifont_t_72_73},
  { "u8g2_font_unifont_t_0_72_73", u8g2_font_unifont_t_0_72_73},
  { "u8g2_font_unifont_t_75", u8g2_font_unifont_t_75},
  { "u8g2_font_unifont_t_0_75", u8g2_font_unifont_t_0_75},
  { "u8g2_font_unifont_t_76", u8g2_font_unifont_t_76},
  { "u8g2_font_unifont_t_0_76", u8g2_font_unifont_t_0_76},
  { "u8g2_font_unifont_t_77", u8g2_font_unifont_t_77},
  { "u8g2_font_unifont_t_0_77", u8g2_font_unifont_t_0_77},
  { "u8g2_font_unifont_t_78_79", u8g2_font_unifont_t_78_79},
  { "u8g2_font_unifont_t_0_78_79", u8g2_font_unifont_t_0_78_79},
  { "u8g2_font_unifont_t_86", u8g2_font_unifont_t_86},
  { "u8g2_font_unifont_t_0_86", u8g2_font_unifont_t_0_86},
  { "u8g2_font_unifont_t_greek", u8g2_font_unifont_t_greek},
  { "u8g2_font_unifont_t_cyrillic", u8g2_font_unifont_t_cyrillic},
  { "u8g2_font_unifont_t_hebrew", u8g2_font_unifont_t_hebrew},
  { "u8g2_font_unifont_t_bengali", u8g2_font_unifont_t_bengali},
  { "u8g2_font_unifont_t_tibetan", u8g2_font_unifont_t_tibetan},
  { "u8g2_font_unifont_t_urdu", u8g2_font_unifont_t_urdu},
  { "u8g2_font_unifont_t_polish", u8g2_font_unifont_t_polish},
  { "u8g2_font_unifont_t_devanagari", u8g2_font_unifont_t_devanagari},
  { "u8g2_font_unifont_t_arabic", u8g2_font_unifont_t_arabic},
  { "u8g2_font_unifont_t_symbols", u8g2_font_unifont_t_symbols},
  { "u8g2_font_unifont_h_symbols", u8g2_font_unifont_h_symbols},
  { "u8g2_font_unifont_t_emoticons", u8g2_font_unifont_t_emoticons},
  { "u8g2_font_unifont_t_animals", u8g2_font_unifont_t_animals},
  { "u8g2_font_unifont_t_domino", u8g2_font_unifont_t_domino},
  { "u8g2_font_unifont_t_cards", u8g2_font_unifont_t_cards},
  { "u8g2_font_unifont_t_weather", u8g2_font_unifont_t_weather},
  { "u8g2_font_unifont_t_chinese1", u8g2_font_unifont_t_chinese1},
  { "u8g2_font_unifont_t_chinese2", u8g2_font_unifont_t_chinese2},
  { "u8g2_font_unifont_t_chinese3", u8g2_font_unifont_t_chinese3},
  { "u8g2_font_unifont_t_japanese1", u8g2_font_unifont_t_japanese1},
  { "u8g2_font_unifont_t_japanese2", u8g2_font_unifont_t_japanese2},
  { "u8g2_font_unifont_t_japanese3", u8g2_font_unifont_t_japanese3},
  { "u8g2_font_unifont_t_korean1", u8g2_font_unifont_t_korean1},
  { "u8g2_font_unifont_t_korean2", u8g2_font_unifont_t_korean2},
  { "u8g2_font_unifont_t_vietnamese1", u8g2_font_unifont_t_vietnamese1},
  { "u8g2_font_unifont_t_vietnamese2", u8g2_font_unifont_t_vietnamese2},
  { "u8g2_font_wqy12_t_chinese1", u8g2_font_wqy12_t_chinese1},
  { "u8g2_font_wqy12_t_chinese2", u8g2_font_wqy12_t_chinese2},
  { "u8g2_font_wqy12_t_chinese3", u8g2_font_wqy12_t_chinese3},
  { "u8g2_font_wqy12_t_gb2312", u8g2_font_wqy12_t_gb2312},
  { "u8g2_font_wqy12_t_gb2312a", u8g2_font_wqy12_t_gb2312a},
  { "u8g2_font_wqy12_t_gb2312b", u8g2_font_wqy12_t_gb2312b},
  { "u8g2_font_wqy13_t_chinese1", u8g2_font_wqy13_t_chinese1},
  { "u8g2_font_wqy13_t_chinese2", u8g2_font_wqy13_t_chinese2},
  { "u8g2_font_wqy13_t_chinese3", u8g2_font_wqy13_t_chinese3},
  { "u8g2_font_wqy13_t_gb2312", u8g2_font_wqy13_t_gb2312},
  { "u8g2_font_wqy13_t_gb2312a", u8g2_font_wqy13_t_gb2312a},
  { "u8g2_font_wqy13_t_gb2312b", u8g2_font_wqy13_t_gb2312b},
  { "u8g2_font_wqy14_t_chinese1", u8g2_font_wqy14_t_chinese1},
  { "u8g2_font_wqy14_t_chinese2", u8g2_font_wqy14_t_chinese2},
  { "u8g2_font_wqy14_t_chinese3", u8g2_font_wqy14_t_chinese3},
  { "u8g2_font_wqy14_t_gb2312", u8g2_font_wqy14_t_gb2312},
  { "u8g2_font_wqy14_t_gb2312a", u8g2_font_wqy14_t_gb2312a},
  { "u8g2_font_wqy14_t_gb2312b", u8g2_font_wqy14_t_gb2312b},
  { "u8g2_font_wqy15_t_chinese1", u8g2_font_wqy15_t_chinese1},
  { "u8g2_font_wqy15_t_chinese2", u8g2_font_wqy15_t_chinese2},
  { "u8g2_font_wqy15_t_chinese3", u8g2_font_wqy15_t_chinese3},
  { "u8g2_font_wqy15_t_gb2312", u8g2_font_wqy15_t_gb2312},
  { "u8g2_font_wqy15_t_gb2312a", u8g2_font_wqy15_t_gb2312a},
  { "u8g2_font_wqy15_t_gb2312b", u8g2_font_wqy15_t_gb2312b},
  { "u8g2_font_wqy16_t_chinese1", u8g2_font_wqy16_t_chinese1},
  { "u8g2_font_wqy16_t_chinese2", u8g2_font_wqy16_t_chinese2},
  { "u8g2_font_wqy16_t_chinese3", u8g2_font_wqy16_t_chinese3},
  { "u8g2_font_wqy16_t_gb2312", u8g2_font_wqy16_t_gb2312},
  { "u8g2_font_wqy16_t_gb2312a", u8g2_font_wqy16_t_gb2312a},
  { "u8g2_font_wqy16_t_gb2312b", u8g2_font_wqy16_t_gb2312b},
  { "u8g2_font_baby_tf", u8g2_font_baby_tf},
  { "u8g2_font_baby_tr", u8g2_font_baby_tr},
  { "u8g2_font_baby_tn", u8g2_font_baby_tn},
  { "u8g2_font_blipfest_07_tr", u8g2_font_blipfest_07_tr},
  { "u8g2_font_blipfest_07_tn", u8g2_font_blipfest_07_tn},
  { "u8g2_font_chikita_tf", u8g2_font_chikita_tf},
  { "u8g2_font_chikita_tr", u8g2_font_chikita_tr},
  { "u8g2_font_chikita_tn", u8g2_font_chikita_tn},
  { "u8g2_font_pixelle_micro_tr", u8g2_font_pixelle_micro_tr},
  { "u8g2_font_pixelle_micro_tn", u8g2_font_pixelle_micro_tn},
  { "u8g2_font_robot_de_niro_tf", u8g2_font_robot_de_niro_tf},
  { "u8g2_font_robot_de_niro_tr", u8g2_font_robot_de_niro_tr},
  { "u8g2_font_robot_de_niro_tn", u8g2_font_robot_de_niro_tn},
  { "u8g2_font_trixel_square_tf", u8g2_font_trixel_square_tf},
  { "u8g2_font_trixel_square_tr", u8g2_font_trixel_square_tr},
  { "u8g2_font_trixel_square_tn", u8g2_font_trixel_square_tn},
  { "u8g2_font_haxrcorp4089_tr", u8g2_font_haxrcorp4089_tr},
  { "u8g2_font_haxrcorp4089_tn", u8g2_font_haxrcorp4089_tn},
  { "u8g2_font_haxrcorp4089_t_cyrillic", u8g2_font_haxrcorp4089_t_cyrillic},
  { "u8g2_font_bubble_tr", u8g2_font_bubble_tr},
  { "u8g2_font_bubble_tn", u8g2_font_bubble_tn},
  { "u8g2_font_cardimon_pixel_tf", u8g2_font_cardimon_pixel_tf},
  { "u8g2_font_cardimon_pixel_tr", u8g2_font_cardimon_pixel_tr},
  { "u8g2_font_cardimon_pixel_tn", u8g2_font_cardimon_pixel_tn},
  { "u8g2_font_maniac_tf", u8g2_font_maniac_tf},
  { "u8g2_font_maniac_tr", u8g2_font_maniac_tr},
  { "u8g2_font_maniac_tn", u8g2_font_maniac_tn},
  { "u8g2_font_maniac_te", u8g2_font_maniac_te},
  { "u8g2_font_pxplusibmcgathin_8f", u8g2_font_pxplusibmcgathin_8f},
  { "u8g2_font_pxplusibmcgathin_8r", u8g2_font_pxplusibmcgathin_8r},
  { "u8g2_font_pxplusibmcgathin_8n", u8g2_font_pxplusibmcgathin_8n},
  { "u8g2_font_pxplusibmcgathin_8u", u8g2_font_pxplusibmcgathin_8u},
  { "u8g2_font_pxplusibmcga_8f", u8g2_font_pxplusibmcga_8f},
  { "u8g2_font_pxplusibmcga_8r", u8g2_font_pxplusibmcga_8r},
  { "u8g2_font_pxplusibmcga_8n", u8g2_font_pxplusibmcga_8n},
  { "u8g2_font_pxplusibmcga_8u", u8g2_font_pxplusibmcga_8u},
  { "u8g2_font_pxplustandynewtv_8f", u8g2_font_pxplustandynewtv_8f},
  { "u8g2_font_pxplustandynewtv_8r", u8g2_font_pxplustandynewtv_8r},
  { "u8g2_font_pxplustandynewtv_8n", u8g2_font_pxplustandynewtv_8n},
  { "u8g2_font_pxplustandynewtv_8u", u8g2_font_pxplustandynewtv_8u},
  { "u8g2_font_pxplustandynewtv_t_all", u8g2_font_pxplustandynewtv_t_all},
  { "u8g2_font_pxplustandynewtv_8_all", u8g2_font_pxplustandynewtv_8_all},
  { "u8g2_font_pxplusibmvga9_tf", u8g2_font_pxplusibmvga9_tf},
  { "u8g2_font_pxplusibmvga9_tr", u8g2_font_pxplusibmvga9_tr},
  { "u8g2_font_pxplusibmvga9_tn", u8g2_font_pxplusibmvga9_tn},
  { "u8g2_font_pxplusibmvga9_mf", u8g2_font_pxplusibmvga9_mf},
  { "u8g2_font_pxplusibmvga9_mr", u8g2_font_pxplusibmvga9_mr},
  { "u8g2_font_pxplusibmvga9_mn", u8g2_font_pxplusibmvga9_mn},
  { "u8g2_font_pxplusibmvga9_t_all", u8g2_font_pxplusibmvga9_t_all},
  { "u8g2_font_pxplusibmvga9_m_all", u8g2_font_pxplusibmvga9_m_all},
  { "u8g2_font_pxplusibmvga8_tf", u8g2_font_pxplusibmvga8_tf},
  { "u8g2_font_pxplusibmvga8_tr", u8g2_font_pxplusibmvga8_tr},
  { "u8g2_font_pxplusibmvga8_tn", u8g2_font_pxplusibmvga8_tn},
  { "u8g2_font_pxplusibmvga8_mf", u8g2_font_pxplusibmvga8_mf},
  { "u8g2_font_pxplusibmvga8_mr", u8g2_font_pxplusibmvga8_mr},
  { "u8g2_font_pxplusibmvga8_mn", u8g2_font_pxplusibmvga8_mn},
  { "u8g2_font_pxplusibmvga8_t_all", u8g2_font_pxplusibmvga8_t_all},
  { "u8g2_font_pxplusibmvga8_m_all", u8g2_font_pxplusibmvga8_m_all},
  { "u8g2_font_px437wyse700a_tf", u8g2_font_px437wyse700a_tf},
  { "u8g2_font_px437wyse700a_tr", u8g2_font_px437wyse700a_tr},
  { "u8g2_font_px437wyse700a_tn", u8g2_font_px437wyse700a_tn},
  { "u8g2_font_px437wyse700a_mf", u8g2_font_px437wyse700a_mf},
  { "u8g2_font_px437wyse700a_mr", u8g2_font_px437wyse700a_mr},
  { "u8g2_font_px437wyse700a_mn", u8g2_font_px437wyse700a_mn},
  { "u8g2_font_px437wyse700b_tf", u8g2_font_px437wyse700b_tf},
  { "u8g2_font_px437wyse700b_tr", u8g2_font_px437wyse700b_tr},
  { "u8g2_font_px437wyse700b_tn", u8g2_font_px437wyse700b_tn},
  { "u8g2_font_px437wyse700b_mf", u8g2_font_px437wyse700b_mf},
  { "u8g2_font_px437wyse700b_mr", u8g2_font_px437wyse700b_mr},
  { "u8g2_font_px437wyse700b_mn", u8g2_font_px437wyse700b_mn},
};
