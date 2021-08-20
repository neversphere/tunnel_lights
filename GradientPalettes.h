/*
 * Palettes Galore
 * 
 *
  Baked in pallets I'm no longer using:
  RainbowColors_p,
  CRGBPalette16( g,g,b,b, p,p,b,b, g,g,b,b, p,p,b,b),
  OceanColors_p,
  CloudColors_p,
  PartyColors_p
 */


// From ColorWavesWithPalettes by Mark Kriegsman: https://gist.github.com/kriegsman/8281905786e8b2632aeb

// Gradient Color Palette definitions for 33 different cpt-city color palettes.
//    956 bytes of PROGMEM for all of the palettes together,
//   +618 bytes of PROGMEM for gradient palette code (AVR).
//  1,494 bytes total for all 34 color palettes and associated code.

// Gradient palette "ib_jul01_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ing/xmas/tn/ib_jul01.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( ib_jul01_gp ) {
    0, 194,  1,  1,
   94,   1, 29, 18,
  132,  57,131, 28,
  255, 113,  1,  1};

// Gradient palette "es_vintage_57_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/vintage/tn/es_vintage_57.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_vintage_57_gp ) {
    0,   2,  1,  1,
   53,  18,  1,  0,
  104,  69, 29,  1,
  153, 167,135, 10,
  255,  46, 56,  4};

// Gradient palette "es_rivendell_15_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/rivendell/tn/es_rivendell_15.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_rivendell_15_gp ) {
    0,   1, 14,  5,
  101,  16, 36, 14,
  165,  56, 68, 30,
  242, 150,156, 99,
  255, 150,156, 99};

// Gradient palette "rgi_15_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds/rgi/tn/rgi_15.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE( rgi_15_gp ) {
    0,   4,  1, 31,
   31,  55,  1, 16,
   63, 197,  3,  7,
   95,  59,  2, 17,
  127,   6,  2, 34,
  159,  39,  6, 33,
  191, 112, 13, 32,
  223,  56,  9, 35,
  255,  22,  6, 38};

// Gradient palette "retro2_16_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ma/retro2/tn/retro2_16.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 8 bytes of program space.

DEFINE_GRADIENT_PALETTE( retro2_16_gp ) {
    0, 188,135,  1,
  255,  46,  7,  1};

// Gradient palette "Analogous_1_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/red/tn/Analogous_1.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Analogous_1_gp ) {
    0,   3,  0,255,
   63,  23,  0,255,
  127,  67,  0,255,
  191, 142,  0, 45,
  255, 255,  0,  0};

// Gradient palette "es_pinksplash_08_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/pink_splash/tn/es_pinksplash_08.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_pinksplash_08_gp ) {
    0, 126, 11,255,
  127, 197,  1, 22,
  175, 210,157,172,
  221, 157,  3,112,
  255, 157,  3,112};

// Gradient palette "es_pinksplash_07_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/pink_splash/tn/es_pinksplash_07.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_pinksplash_07_gp ) {
    0, 229,  1,  1,
   61, 242,  4, 63,
  101, 255, 12,255,
  127, 249, 81,252,
  153, 255, 11,235,
  193, 244,  5, 68,
  255, 232,  1,  5};

// Gradient palette "Coral_reef_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/other/tn/Coral_reef.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( Coral_reef_gp ) {
    0,  40,199,197,
   50,  10,152,155,
   96,   1,111,120,
   96,  43,127,162,
  139,  10, 73,111,
  255,   1, 34, 71};

// Gradient palette "es_ocean_breeze_068_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/ocean_breeze/tn/es_ocean_breeze_068.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_ocean_breeze_068_gp ) {
    0, 100,156,153,
   51,   1, 99,137,
  101,   1, 68, 84,
  104,  35,142,168,
  178,   0, 63,117,
  255,   1, 10, 10};

// Gradient palette "es_ocean_breeze_036_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/ocean_breeze/tn/es_ocean_breeze_036.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_ocean_breeze_036_gp ) {
    0,   1,  6,  7,
   89,   1, 99,111,
  153, 144,209,255,
  255,   0, 73, 82};

// Gradient palette "departure_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/mjf/tn/departure.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 88 bytes of program space.

DEFINE_GRADIENT_PALETTE( departure_gp ) {
    0,   8,  3,  0,
   42,  23,  7,  0,
   63,  75, 38,  6,
   84, 169, 99, 38,
  106, 213,169,119,
  116, 255,255,255,
  138, 135,255,138,
  148,  22,255, 24,
  170,   0,255,  0,
  191,   0,136,  0,
  212,   0, 55,  0,
  255,   0, 55,  0};

// Gradient palette "es_landscape_64_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/landscape/tn/es_landscape_64.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_landscape_64_gp ) {
    0,   0,  0,  0,
   37,   2, 25,  1,
   76,  15,115,  5,
  127,  79,213,  1,
  128, 126,211, 47,
  130, 188,209,247,
  153, 144,182,205,
  204,  59,117,250,
  255,   1, 37,192};

// Gradient palette "es_landscape_33_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/landscape/tn/es_landscape_33.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_landscape_33_gp ) {
    0,   1,  5,  0,
   19,  32, 23,  1,
   38, 161, 55,  1,
   63, 229,144,  1,
   66,  39,142, 74,
  255,   1,  4,  1};

// Gradient palette "rainbowsherbet_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ma/icecream/tn/rainbowsherbet.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( rainbowsherbet_gp ) {
    0, 255, 33,  4,
   43, 255, 68, 25,
   86, 255,  7, 25,
  127, 255, 82,103,
  170, 255,255,242,
  209,  42,255, 22,
  255,  87,255, 65};

// Gradient palette "gr65_hult_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/hult/tn/gr65_hult.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( gr65_hult_gp ) {
    0, 247,176,247,
   48, 255,136,255,
   89, 220, 29,226,
  160,   7, 82,178,
  216,   1,124,109,
  255,   1,124,109};

// Gradient palette "gr64_hult_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/hult/tn/gr64_hult.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( gr64_hult_gp ) {
    0,   1,124,109,
   66,   1, 93, 79,
  104,  52, 65,  1,
  130, 115,127,  1,
  150,  52, 65,  1,
  201,   1, 86, 72,
  239,   0, 55, 45,
  255,   0, 55, 45};

// Gradient palette "GMT_drywet_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gmt/tn/GMT_drywet.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( GMT_drywet_gp ) {
    0,  47, 30,  2,
   42, 213,147, 24,
   84, 103,219, 52,
  127,   3,219,207,
  170,   1, 48,214,
  212,   1,  1,111,
  255,   1,  7, 33};

// Gradient palette "ib15_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ing/general/tn/ib15.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE( ib15_gp ) {
    0, 113, 91,147,
   72, 157, 88, 78,
   89, 208, 85, 33,
  107, 255, 29, 11,
  141, 137, 31, 39,
  255,  59, 33, 89};

// Gradient palette "Fuschia_7_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ds/fuschia/tn/Fuschia-7.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Fuschia_7_gp ) {
    0,  43,  3,153,
   63, 100,  4,103,
  127, 188,  5, 66,
  191, 161, 11,115,
  255, 135, 20,182};

// Gradient palette "es_emerald_dragon_08_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/emerald_dragon/tn/es_emerald_dragon_08.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_emerald_dragon_08_gp ) {
    0,  97,255,  1,
  101,  47,133,  1,
  178,  13, 43,  1,
  255,   2, 10,  1};

// Gradient palette "Colorfull_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Colorfull.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( Colorfull_gp ) {
    0,  10, 85,  5,
   25,  29,109, 18,
   60,  59,138, 42,
   93,  83, 99, 52,
  106, 110, 66, 64,
  109, 123, 49, 65,
  113, 139, 35, 66,
  116, 192,117, 98,
  124, 255,255,137,
  168, 100,180,155,
  255,  22,121,174};

// Gradient palette "Magenta_Evening_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Magenta_Evening.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( Magenta_Evening_gp ) {
    0,  71, 27, 39,
   31, 130, 11, 51,
   63, 213,  2, 64,
   70, 232,  1, 66,
   76, 252,  1, 69,
  108, 123,  2, 51,
  255,  46,  9, 35};

// Gradient palette "Pink_Purple_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Pink_Purple.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( Pink_Purple_gp ) {
    0,  19,  2, 39,
   25,  26,  4, 45,
   51,  33,  6, 52,
   76,  68, 62,125,
  102, 118,187,240,
  109, 163,215,247,
  114, 217,244,255,
  122, 159,149,221,
  149, 113, 78,188,
  183, 128, 57,155,
  255, 146, 40,123};

// Gradient palette "Sunset_Real_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Sunset_Real.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( Sunset_Real_gp ) {
    0, 120,  0,  0,
   22, 179, 22,  0,
   51, 255,104,  0,
   85, 167, 22, 18,
  135, 100,  0,103,
  198,  16,  0,130,
  255,   0,  0,160};

// Gradient palette "es_autumn_19_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/es/autumn/tn/es_autumn_19.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 52 bytes of program space.

DEFINE_GRADIENT_PALETTE( es_autumn_19_gp ) {
    0,  26,  1,  1,
   51,  67,  4,  1,
   84, 118, 14,  1,
  104, 137,152, 52,
  112, 113, 65,  1,
  122, 133,149, 59,
  124, 137,152, 52,
  135, 113, 65,  1,
  142, 139,154, 46,
  163, 113, 13,  1,
  204,  55,  3,  1,
  249,  17,  1,  1,
  255,  17,  1,  1};

// Gradient palette "BlacK_Blue_Magenta_White_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Blue_Magenta_White.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( BlacK_Blue_Magenta_White_gp ) {
    0,   0,  0,  0,
   42,   0,  0, 45,
   84,   0,  0,255,
  127,  42,  0,255,
  170, 255,  0,255,
  212, 255, 55,255,
  255, 255,255,255};

// Gradient palette "BlacK_Magenta_Red_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Magenta_Red.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( BlacK_Magenta_Red_gp ) {
    0,   0,  0,  0,
   63,  42,  0, 45,
  127, 255,  0,255,
  191, 255,  0, 45,
  255, 255,  0,  0};

// Gradient palette "BlacK_Red_Magenta_Yellow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Red_Magenta_Yellow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE( BlacK_Red_Magenta_Yellow_gp ) {
    0,   0,  0,  0,
   42,  42,  0,  0,
   84, 255,  0,  0,
  127, 255,  0, 45,
  170, 255,  0,255,
  212, 255, 55, 45,
  255, 255,255,  0};

// Gradient palette "Blue_Cyan_Yellow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/Blue_Cyan_Yellow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Blue_Cyan_Yellow_gp ) {
    0,   0,  0,255,
   63,   0, 55,255,
  127,   0,255,255,
  191,  42,255, 45,
  255, 255,255,  0};


// Added August 2021

// Gradient palette "droz12_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/fractint/123maps/tn/droz12.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 2040 bytes of program space.

DEFINE_GRADIENT_PALETTE( droz12_gp ) {
    0,   1,  1,  0,
    0,   1,  1,  0,
    0,   1,  1,  0,
    1,   1,  1,  0,
    1,   1,  1,  0,
    3,   1,  1,  0,
    3,   2,  1,  0,
    4,   2,  1,  0,
    4,   4,  1,  0,
    4,   4,  1,  0,
    4,   7,  2,  0,
    5,   7,  2,  0,
    5,  10,  3,  0,
    7,  10,  3,  0,
    7,  14,  4,  0,
    8,  14,  4,  0,
    8,  18,  5,  0,
    9,  18,  5,  0,
    9,  21,  6,  0,
    9,  21,  6,  0,
    9,  25,  7,  0,
   10,  25,  7,  0,
   10,  28,  8,  0,
   12,  28,  8,  0,
   12,  31,  9,  0,
   13,  31,  9,  0,
   13,  33,  9,  0,
   13,  33,  9,  0,
   13,  35, 10,  0,
   14,  35, 10,  0,
   14,  35, 10,  0,
   15,  35, 10,  0,
   15,  35, 10,  0,
   17,  35, 10,  0,
   17,  33,  9,  0,
   18,  33,  9,  0,
   18,  30,  77, 73,  1,
  231,  77, 73,  1,
  231, 103, 93,  1,
  231, 103, 93,  1,
  231, 130,114,  1,
  232, 130,114,  1,
  232, 157,135,  1,
  233, 157,135,  1,
  233, 182,152,  1,
  235, 182,152,  1,
  235, 206,169,  1,
  236, 206,169,  1,
  236, 227,184,  1,
  236, 227,184,  1,
  236, 242,193,  1,
  237, 242,193,  1,
  237, 249,199,  1,
  239, 249,199,  1,
  239, 255,203,  1,
  240, 255,203,  1,
  240, 249,199,  1,
  241, 249,199,  1,
  241, 242,193,  1,
  241, 242,193,  1,
  241, 227,184,  1,
  242, 227,184,  1,
  242, 206,169,  1,
  244, 206,169,  1,
  244, 182,152,  1,
  245, 182,152,  1,
  245, 157,135,  1,
  245, 157,135,  1,
  245, 130,114,  1,
  246, 130,114,  1,
  246, 103, 93,  1,
  247, 103, 93,  1,
  247,  77, 73,  1,
  249,  77, 73,  1,
  249,  54, 55,  1,
  250,  54, 55,  1,
  250,  35, 38,  1,
  250,  35, 38,  1,
  250,  20, 24,  1,
  251,  20, 24,  1,
  251,  10, 13,  1,
  253,  10, 13,  1,
  253,   3,  5,  1,
  254,   3,  5,  1,
  254,   1,  1,  1,
  255,   1,  1,  1};

// Gradient palette "wiki_precip_mm_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/wkp/precip/tn/wiki-precip-mm.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 144 bytes of program space.

DEFINE_GRADIENT_PALETTE( wiki_precip_mm_gp ) {
    0, 255,255,255,
    7, 120,235,125,
   14,  66,225, 69,
   21,  30,213, 33,
   29,   9,201, 11,
   36,   1,191,  1,
   43,   1,169, 36,
   51,   1,149,151,
   58,   1,136,142,
   65,   1,124,137,
   72,   1,114,132,
   80,   1,103,127,
   87,   1, 92,120,
   94,   1, 82,115,
  102,   1, 74,112,
  109,   0, 65,108,
  116,   1, 57,103,
  123,   1, 50, 99,
  131,   1, 42, 93,
  138,   1, 36, 91,
  145,   1, 31, 88,
  153,   0, 25, 83,
  160,   0, 21, 79,
  167,   0, 16, 75,
  174,   0, 13, 72,
  182,   1,  9, 67,
  189,   1,  7, 65,
  196,   1,  4, 62,
  204,   1,  3, 59,
  211,   1,  1, 55,
  218,   1,  1, 51,
  225,   1,  1, 47,
  233,   1,  1, 48,
  240,   0,  0, 47,
  247,   0,  0, 47,
  255,   0,  0, 47};

// Gradient palette "purplefly_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/rc/tn/purplefly.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE( purplefly_gp ) {
    0,   0,  0,  0,
   63, 239,  0,122,
  191, 252,255, 78,
  255,   0,  0,  0};




// Simple colors
CRGB p = CHSV( HUE_PURPLE, 255, 255);
CRGB g = CHSV( HUE_GREEN, 255, 255);
CRGB b = CRGB::Black;
CRGB w = CRGB::White;


// Gradient palette "cequal_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/imagej/tn/cequal.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 1860 bytes of program space.

DEFINE_GRADIENT_PALETTE( cequal_gp ) {
    0,   1,  1,  1,
    0,   1,  1,  1,
    1,   1,  1,  1,
    2,   1,  1,  1,
    3,   1,  1,  1,
    4,   1,  1,  1,
    5,   1,  1,  1,
    6,   1,  1,  1,
    7,   1,  1,  1,
    8,   1,  1,  1,
    9,   1,  1,  1,
   10,   1,  1,  1,
   11,   1,  1,  1,
   12,   1,  1,  1,
   13,   1,  1,  1,
   14,   1,  1,  1,
   15,   1,  1,  1,
   16,   1,  1,  1,
   17,   1,  1,  1,
   18,   1,  1,  1,
   19,   1,  1,  1,
   20,   1,  1,  1,
   21,   1,  1,  1,
   22,   1,  1,  1,
   23,   1,  1,  1,
   24,   1,  1,  1,
   25,   1,  1,  1,
   26,   1,  1,  1,
   27,   1,  1,  1,
   28,   1,  1,  1,
   29,   1,  1,  1,
   30,   1,  1,  1,
   31,   1,  1,  1,
   32,   1,  1,  1,
   32,   1,  1,  1,
   33,   1,  1,  1,
   33,   1,  1,  1,
  223, 252,252,155,
  224, 252,252,155,
  224, 252,252,158,
  225, 252,252,158,
  225, 252,252,164,
  226, 252,252,164,
  226, 252,252,170,
  227, 252,252,170,
  227, 252,252,176,
  228, 252,252,176,
  228, 252,252,182,
  229, 252,252,182,
  229, 252,252,186,
  230, 252,252,186,
  230, 252,252,192,
  231, 252,252,192,
  231, 252,252,199,
  232, 252,252,199,
  232, 252,252,205,
  233, 252,252,205,
  233, 252,252,212,
  234, 252,252,212,
  234, 252,252,216,
  235, 252,252,216,
  235, 252,252,223,
  236, 252,252,223,
  236, 252,252,230,
  237, 252,252,230,
  237, 252,252,237,
  238, 252,252,237,
  238, 252,252,245,
  239, 252,252,245,
  239, 252,252,252,
  240, 252,252,252,
  241, 252,252,252,
  242, 252,252,252,
  243, 252,252,252,
  244, 252,252,252,
  245, 252,252,252,
  246, 252,252,252,
  247, 252,252,252,
  248, 252,252,252,
  249, 252,252,252,
  250, 252,252,252,
  251, 252,252,252,
  252, 252,252,252,
  253, 252,252,252,
  254, 252,252,252,
  255, 252,252,252};

// Gradient palette "mby_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/mby/tn/mby.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 60 bytes of program space.

DEFINE_GRADIENT_PALETTE( mby_gp ) {
    0,   0,  0, 14,
   39,   0,  2, 24,
   78,   0,  7, 25,
  107,   1, 38, 79,
  153,   1, 68,147,
  155,  48,159,242,
  156,  97,195,255,
  156,   0, 30, 10,
  157,   1, 51,  3,
  166, 199,173, 42,
  180,  79, 13,  0,
  192,  44,  2,  1,
  211,  77, 92, 80,
  235, 146,159,149,
  255, 255,255,255};

// Gradient palette "sunlitwave_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/rc/tn/sunlitwave.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( sunlitwave_gp ) {
    0,   5,  9, 84,
   45,  37, 24,111,
   81,  16,  5, 59,
  112,  24,  1, 20,
  150,  34,  1,  2,
  198, 175, 36,  7,
  237, 208,104, 16,
  255, 239,211,158};

// Gradient palette "ncar_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gist/tn/ncar.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 800 bytes of program space.

DEFINE_GRADIENT_PALETTE( ncar_gp ) {
    0,   0,  0, 45,
    1,   0,  1, 34,
    2,   0,  1, 26,
    3,   0,  1, 19,
    5,   0,  3, 13,
    6,   0,  6,  8,
    7,   0,  9,  5,
    8,   0, 13,  2,
   10,   0, 17,  1,
   11,   0, 22,  1,
   12,   0, 29,  1,
   14,   0, 28,  1,
   15,   0, 22,  2,
   16,   0, 17,  7,
   17,   0, 13, 16,
   19,   0,  9, 31,
   20,   0,  6, 51,
   21,   0,  3, 77,
   23,   0,  1,111,
   24,   0,  1,151,
   25,   0,  1,199,
   26,   0,  0,255,
   28,   0,  1,255,
   29,   0,  3,255,
   30,   0,  8,255,
   32,   0, 16,255,
   33,   0, 27,255,
   34,   0, 40,255,
   35,   0, 55,255,
   37,   0, 74,255,
   38,   0, 97,255,
   39,   0,122,255,
   41,   0,139,255,
   42,   0,149,255,
   43,   0,159,255,
   44,   0,169,255,
   46,   0,180,255,
  193, 255,  0, 28,
  194, 255,  0, 47,
  196, 255,  0, 73,
  197, 255,  0,105,
  198, 255,  0,144,
  199, 255,  0,192,
  201, 255,  0,247,
  202, 232,  1,255,
  203, 208,  1,255,
  205, 188,  1,255,
  206, 167,  1,255,
  207, 150,  1,255,
  208, 132,  1,255,
  210, 117,  2,255,
  211, 101,  3,255,
  212,  88,  4,255,
  213,  75,  5,255,
  215,  73,  7,252,
  216,  83, 10,247,
  217,  94, 13,245,
  219, 106, 16,240,
  220, 118, 21,235,
  221, 130, 25,233,
  222, 144, 31,228,
  224, 159, 36,223,
  225, 175, 42,221,
  226, 192, 49,216,
  228, 210, 56,214,
  229, 213, 62,214,
  230, 215, 69,216,
  231, 215, 74,216,
  233, 217, 81,219,
  234, 220, 88,221,
  235, 220, 96,221,
  237, 222,103,223,
  238, 224,111,226,
  239, 224,119,226,
  240, 227,127,228,
  242, 229,136,230,
  243, 232,147,233,
  244, 234,157,235,
  246, 237,168,237,
  247, 239,178,240,
  248, 242,189,242,
  249, 244,203,245,
  251, 247,215,247,
  252, 249,227,250,
  253, 252,239,252,
  255, 255,255,255};

// Gradient palette "bhw1_28_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_28.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw1_28_gp ) {
    0,  75,  1,221,
   30, 252, 73,255,
   48, 169,  0,242,
  119,   0,149,242,
  170,  43,  0,242,
  206, 252, 73,255,
  232,  78, 12,214,
  255,   0,149,242};

// Gradient palette "xkcd_bath_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/xkcd/tn/xkcd-bath.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 504 bytes of program space.

DEFINE_GRADIENT_PALETTE( xkcd_bath_gp ) {
    0,   1,  1,  1,
    2,   1,  1,  1,
    4,   1,  1,  1,
    6,   1,  1,  1,
    8,   1,  1,  1,
   10,   1,  1,  1,
   12,   1,  1,  1,
   14,   1,  1,  1,
   16,   1,  1,  1,
   18,   1,  1,  1,
   20,   1,  1,  1,
   22,   1,  1,  1,
   24,   1,  1,  1,
   26,   1,  1,  1,
   28,   1,  1,  1,
   30,   1,  1,  1,
   32,   1,  1,  1,
   34,   1,  1,  1,
   36,   1,  1,  1,
   38,   1,  1,  1,
   40,   1,  1,  1,
   42,   1,  1,  1,
   44,   1,  1,  1,
   46,   1,  1,  1,
   48,   1,  1,  1,
   51,   1,  1,  1,
   53,   1,  1,  1,
   55,   1,  1,  1,
   57,   1,  1,  1,
   59,   1,  1,  1,
   61,   1,  1,  1,
   63,   1,  1,  2,
   65,   1,  1,  2,
   67,   1,  1,  2,
   69,   1,  1,  2,
   71,   1,  1,  2,
  157,   2, 24, 72,
  159,   2, 26, 77,
  161,   2, 27, 80,
  163,   2, 29, 84,
  165,   2, 31, 88,
  167,   3, 32, 93,
  169,   3, 33, 98,
  171,   3, 36,102,
  173,   4, 38,106,
  175,   4, 41,112,
  177,   4, 44,117,
  179,   5, 47,123,
  181,   5, 50,128,
  183,   5, 53,133,
  185,   6, 56,138,
  187,   7, 60,144,
  189,   7, 63,149,
  191,   7, 68,155,
  193,   8, 72,160,
  195,   9, 78,164,
  197,  10, 82,170,
  199,  10, 86,174,
  201,  11, 90,178,
  204,  12, 96,182,
  206,  12,100,186,
  208,  13,104,190,
  210,  14,109,194,
  212,  15,117,199,
  214,  16,122,203,
  216,  17,128,205,
  218,  18,133,210,
  220,  19,138,212,
  222,  20,144,216,
  224,  21,149,221,
  226,  21,154,223,
  228,  22,159,226,
  230,  24,166,228,
  232,  25,171,233,
  234,  26,178,235,
  236,  27,182,237,
  238,  27,186,240,
  240,  28,189,242,
  242,  30,193,247,
  244,  30,199,250,
  246,  31,203,252,
  248,  31,205,252,
  250,  32,209,255,
  252,  32,209,255,
  255,  33,211,255};

// Gradient palette "sst_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/oc/tn/sst.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 1016 bytes of program space.

DEFINE_GRADIENT_PALETTE( sst_gp ) {
    0,  21,  1, 55,
    1,  30,  1, 93,
    2,  39,  1,142,
    3,  44,  1,182,
    4,  42,  1,205,
    5,  35,  1,214,
    6,  28,  1,214,
    7,  22,  1,216,
    8,  16,  1,216,
    9,   9,  1,216,
   10,   4,  1,216,
   11,   1,  1,214,
   12,   1,  1,210,
   13,   1,  1,203,
   14,   1,  1,192,
   15,   1,  1,184,
   16,   1,  1,178,
   17,   1,  1,170,
   18,   1,  1,160,
   19,   1,  1,151,
   20,   1,  1,140,
   21,   1,  1,132,
   22,   1,  1,123,
   23,   1,  1,114,
   24,   1,  1,105,
   25,   1,  1, 96,
   26,   1,  1, 87,
   27,   1,  1, 78,
   28,   1,  1, 71,
   29,   1,  1, 64,
   30,   1,  1, 55,
   31,   1,  1, 47,
   32,   1,  2, 39,
   33,   1,  3, 34,
   34,   1,  5, 30,
   35,   1,  8, 28,
   36,   1, 11, 27,
  206,  32,  1,  1,
  207,  34,  2,  1,
  208,  35,  3,  1,
  209,  36,  3,  2,
  210,  38,  4,  2,
  211,  39,  5,  3,
  212,  41,  6,  4,
  213,  42,  7,  5,
  214,  44,  9,  5,
  215,  46, 10,  6,
  216,  47, 12,  7,
  217,  49, 13,  9,
  218,  51, 15, 10,
  219,  53, 17, 11,
  220,  55, 19, 13,
  221,  56, 21, 14,
  222,  58, 22, 16,
  223,  60, 25, 18,
  224,  63, 27, 20,
  225,  64, 30, 22,
  226,  66, 32, 24,
  227,  68, 35, 27,
  228,  71, 37, 29,
  229,  73, 41, 31,
  230,  75, 44, 34,
  231,  78, 47, 37,
  232,  80, 51, 41,
  233,  82, 54, 43,
  234,  86, 57, 47,
  235,  87, 61, 51,
  236,  88, 66, 53,
  237,  92, 69, 57,
  238,  95, 73, 62,
  239,  97, 78, 66,
  240, 100, 82, 71,
  241, 104, 86, 74,
  242, 106, 90, 78,
  243, 107, 95, 83,
  244, 110,100, 88,
  245, 115,104, 93,
  246, 118,109, 98,
  247, 120,115,103,
  248, 123,121,109,
  249, 126,125,114,
  250, 130,131,120,
  251, 133,136,127,
  252, 135,144,133,
  253, 139,149,140,
  255, 142,156,145};


// Gradient palette "celsius_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/grass/tn/celsius.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 864 bytes of program space.

DEFINE_GRADIENT_PALETTE( celsius_gp ) {
    0,   0,  0,  2,
   63,  17,  1, 89,
   79, 173,184,176,
   87,  17,  7, 45,
   95,   3,  0, 67,
  103,   1,  1, 47,
  111,   1,  8, 28,
  114,   1,  1, 67,
  119,   0,  7,255,
  124,   1,  1, 37,
  127,   1, 42, 73,
  127,   1, 46, 75,
  127,   1, 51, 77,
  127,   1, 55, 78,
  127,   1, 60, 78,
  128,   1, 63, 79,
  128,   1, 68, 82,
  128,   1, 73, 83,
  128,   1, 79, 85,
  128,   1, 86, 87,
  128,   1, 92, 88,
  128,   1, 99, 91,
  129,   1,107, 95,
  129,   1,114,102,
  129,   1,121,109,
  129,   1,128,117,
  129,   1,136,125,
  129,   1,144,133,
  129,   1,149,138,
  130,   1,156,145,
  130,   1,164,155,
  130,   1,171,162,
  130,   1,176,168,
  130,   1,182,174,
  130,   1,187,180,
  131,   1,193,186,
  174,  35,  3,  1,
  174,  36,  3,  2,
  175,  38,  4,  2,
  175,  39,  5,  3,
  176,  41,  6,  4,
  176,  42,  7,  5,
  177,  44,  9,  5,
  177,  46, 10,  6,
  178,  47, 12,  7,
  178,  49, 13,  9,
  179,  51, 15, 10,
  179,  53, 17, 11,
  180,  55, 19, 13,
  180,  56, 21, 14,
  181,  58, 22, 16,
  181,  60, 25, 18,
  182,  63, 27, 20,
  182,  64, 30, 22,
  183,  66, 32, 24,
  183,  68, 35, 27,
  184,  71, 37, 29,
  184,  73, 41, 31,
  185,  75, 44, 34,
  185,  78, 47, 37,
  186,  80, 51, 41,
  186,  82, 54, 43,
  187,  86, 57, 47,
  187,  87, 61, 51,
  188,  88, 66, 53,
  189,  92, 69, 57,
  189,  95, 73, 62,
  190,  97, 78, 66,
  190, 100, 82, 71,
  191, 104, 86, 74,
  191, 106, 90, 78,
  192, 107, 95, 83,
  192, 110,100, 88,
  193, 115,104, 93,
  194, 118,109, 98,
  194, 120,115,103,
  195, 123,121,109,
  195, 126,125,114,
  196, 130,131,120,
  196, 133,136,127,
  197, 135,144,133,
  198, 139,149,140,
  198, 142,156,145,
  199, 146,159,149,
  255,  69,  1, 73};

// Gradient palette "earth_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gist/tn/earth.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 960 bytes of program space.

DEFINE_GRADIENT_PALETTE( earth_gp ) {
    0,   0,  0,  0,
    1,   0,  0,  3,
    2,   0,  0,  6,
    3,   0,  0,  9,
    4,   0,  0, 14,
    5,   0,  0, 19,
    6,   0,  0, 27,
    7,   0,  0, 35,
    8,   0,  1, 35,
    9,   1,  1, 35,
   10,   1,  1, 35,
   11,   1,  1, 35,
   12,   1,  1, 36,
   13,   1,  1, 36,
   14,   1,  1, 36,
   16,   1,  1, 36,
   17,   1,  1, 36,
   18,   1,  1, 37,
   19,   1,  1, 37,
   20,   1,  2, 37,
   21,   1,  2, 37,
   22,   1,  3, 37,
   23,   1,  3, 37,
   24,   1,  4, 37,
   25,   1,  5, 37,
   26,   1,  5, 37,
   27,   1,  6, 37,
   28,   1,  7, 38,
   29,   1,  7, 38,
   30,   1,  8, 38,
   32,   1,  9, 38,
   33,   1, 10, 38,
   34,   1, 10, 39,
   35,   1, 12, 39,
   36,   1, 13, 39,
   37,   1, 13, 39,
   38,   1, 14, 39,
  203, 130, 97, 31,
  204, 132, 97, 33,
  205, 133, 99, 35,
  206, 137,100, 37,
  208, 139,100, 39,
  209, 140,101, 41,
  210, 142,103, 43,
  211, 144,104, 46,
  212, 148,105, 48,
  213, 150,107, 51,
  214, 152,108, 53,
  215, 153,109, 55,
  216, 155,111, 59,
  217, 159,112, 62,
  218, 161,114, 65,
  219, 163,115, 67,
  220, 165,117, 71,
  221, 167,119, 74,
  222, 171,121, 78,
  224, 173,124, 82,
  225, 175,125, 85,
  226, 177,128, 89,
  227, 179,130, 92,
  228, 184,133, 96,
  229, 186,136,100,
  230, 188,139,105,
  231, 190,142,109,
  232, 192,146,114,
  233, 197,149,120,
  234, 199,152,125,
  235, 201,156,130,
  236, 203,159,135,
  237, 206,162,140,
  238, 210,168,145,
  240, 213,171,151,
  241, 215,175,158,
  242, 217,180,164,
  243, 220,186,170,
  244, 224,189,176,
  245, 227,195,184,
  246, 229,201,190,
  247, 232,207,197,
  248, 234,213,205,
  249, 239,219,212,
  250, 242,225,221,
  251, 244,231,228,
  252, 247,239,237,
  253, 249,246,245,
  255, 255,255,255};

// Gradient palette "bhw2_22_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw2/tn/bhw2_22.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( bhw2_22_gp ) {
    0,   0,  0,  0,
   99, 227,  1,  1,
  130, 249,199, 95,
  155, 227,  1,  1,
  255,   0,  0,  0};

// Gradient palette "colorcube_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/h5/tn/colorcube.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 256 bytes of program space.

DEFINE_GRADIENT_PALETTE( colorcube_gp ) {
    0,  14, 22,  0,
    4,  14,104,  0,
    8,  14,255,  0,
   12,  88, 22,  0,
   16,  88,104,  0,
   20,  88,255,  0,
   24, 255, 22,  0,
   28, 255,104,  0,
   32, 255,255,  0,
   36,   0, 22, 44,
   40,   0,104, 44,
   44,   0,255, 44,
   48,  14,  0, 44,
   52,  14, 22, 44,
   56,  14,104, 44,
   60,  14,255, 44,
   64,  88,  0, 44,
   68,  88, 22, 44,
   72,  88,104, 44,
   76,  88,255, 44,
   80, 255,  0, 44,
   84, 255, 22, 44,
   89, 255,104, 44,
   93, 255,255, 44,
   97,   0, 22,255,
  101,   0,104,255,
  105,   0,255,255,
  109,  14,  0,255,
  113,  14, 22,255,
  117,  14,104,255,
  121,  14,255,255,
  125,  88,  0,255,
  129,  88, 22,255,
  133,  88,104,255,
  137,  88,255,255,
  141, 255,  0,255,
  145, 255, 22,255,
  149, 255,104,255,
  153,   2,  0,  0,
  157,  14,  0,  0,
  161,  41,  0,  0,
  165,  88,  0,  0,
  170, 157,  0,  0,
  174, 255,  0,  0,
  178,   0,  4,  0,
  182,   0, 22,  0,
  186,   0, 55,  0,
  190,   0,104,  0,
  194,   0,169,  0,
  198,   0,255,  0,
  202,   0,  0,  2,
  206,   0,  0, 15,
  210,   0,  0, 44,
  214,   0,  0, 92,
  218,   0,  0,160,
  222,   0,  0,255,
  226,   0,  0,  0,
  230,   1,  3,  1,
  234,   9, 15, 10,
  238,  27, 39, 30,
  242,  58, 73, 62,
  246, 106,121,109,
  250, 169,180,172,
  255, 255,255,255};

// Gradient palette "metal_black_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ocal/tn/metal-black.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( metal_black_gp ) {
    0,   0,  0,  0,
   63, 255,255,255,
  127,   0,  0,  0,
  191, 255,255,255,
  255,   0,  0,  0};

// Gradient palette "blu_grn_red_yel_gp_04", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/kst/tn/04_blu_grn_red_yel.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 2048 bytes of program space.

DEFINE_GRADIENT_PALETTE( blu_grn_red_yel_gp_04 ) {
    0,   0,  0,  0,
    0,   0,  0,  0,
    0,   0,  0,  1,
    1,   0,  0,  1,
    1,   0,  0,  1,
    2,   0,  0,  1,
    2,   0,  0,  1,
    3,   0,  0,  1,
    3,   0,  0,  1,
    4,   0,  0,  1,
    4,   0,  0,  1,
    5,   0,  0,  1,
    5,   0,  0,  1,
    6,   0,  0,  1,
    6,   0,  0,  1,
    7,   0,  0,  1,
    7,   0,  0,  1,
    8,   0,  0,  1,
    8,   0,  0,  1,
    9,   0,  0,  1,
    9,   0,  0,  1,
   10,   0,  0,  1,
   10,   0,  0,  1,
   11,   0,  0,  1,
   11,   0,  0,  1,
   12,   0,  0,  1,
   12,   0,  0,  1,
   13,   0,  0,  1,
   13,   0,  0,  1,
   14,   0,  0,  1,
   14,   0,  0,  1,
   15,   0,  0,  1,
   15,   0,  0,  1,
   16,   0,  0,  1,
   16,   0,  0,  1,
  231, 224,149,  0,
  231, 227,152,  0,
  232, 227,152,  0,
  232, 227,157,  0,
  233, 227,157,  0,
  233, 229,161,  0,
  234, 229,161,  0,
  234, 229,164,  0,
  235, 229,164,  0,
  235, 232,169,  0,
  236, 232,169,  0,
  236, 232,173,  0,
  237, 232,173,  0,
  237, 234,176,  0,
  238, 234,176,  0,
  238, 234,182,  0,
  239, 234,182,  0,
  239, 237,186,  0,
  240, 237,186,  0,
  240, 237,189,  0,
  241, 237,189,  0,
  241, 239,195,  0,
  242, 239,195,  0,
  242, 239,199,  0,
  243, 239,199,  0,
  243, 242,203,  0,
  244, 242,203,  0,
  244, 242,207,  0,
  245, 242,207,  0,
  245, 244,213,  0,
  246, 244,213,  0,
  246, 244,217,  0,
  247, 244,217,  0,
  247, 247,221,  0,
  248, 247,221,  0,
  248, 247,227,  0,
  249, 247,227,  0,
  249, 249,231,  0,
  250, 249,231,  0,
  250, 249,235,  0,
  251, 249,235,  0,
  251, 252,241,  0,
  252, 252,241,  0,
  252, 252,246,  0,
  253, 252,246,  0,
  253, 255,250,  0,
  254, 255,250,  0,
  254, 255,255,  0,
  255, 255,255,  0};

// Gradient palette "stern_special_gp_15", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/kst/tn/15_stern_special.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 2048 bytes of program space.

DEFINE_GRADIENT_PALETTE( stern_special_gp_15 ) {
    0,   0,  0,  0,
    0,   0,  0,  0,
    0,   1,  1,  1,
    1,   1,  1,  1,
    1,   1,  1,  1,
    2,   1,  1,  1,
    2,   4,  1,  1,
    3,   4,  1,  1,
    3,   9,  1,  1,
    4,   9,  1,  1,
    4,  17,  1,  1,
    5,  17,  1,  1,
    5,  27,  1,  1,
    6,  27,  1,  1,
    6,  41,  1,  1,
    7,  41,  1,  1,
    7,  58,  1,  1,
    8,  58,  1,  1,
    8,  79,  1,  1,
    9,  79,  1,  1,
    9, 104,  1,  1,
   10, 104,  1,  1,
   10, 133,  1,  1,
   11, 133,  1,  1,
   11, 167,  1,  1,
   12, 167,  1,  1,
   12, 206,  1,  1,
   13, 206,  1,  1,
   13, 252,  1,  1,
   14, 252,  1,  1,
   14, 239,  1,  1,
   15, 239,  1,  1,
   15, 227,  1,  1,
   16, 227,  1,  1,
   16, 215,  1,  1,
  231, 197,205, 83,
  231, 199,207, 88,
  232, 199,207, 88,
  232, 201,209, 93,
  233, 201,209, 93,
  233, 203,211, 99,
  234, 203,211, 99,
  234, 206,213,103,
  235, 206,213,103,
  235, 208,215,109,
  236, 208,215,109,
  236, 210,217,115,
  237, 210,217,115,
  237, 213,219,122,
  238, 213,219,122,
  238, 215,221,128,
  239, 215,221,128,
  239, 217,223,133,
  240, 217,223,133,
  240, 220,225,140,
  241, 220,225,140,
  241, 222,227,147,
  242, 222,227,147,
  242, 224,229,155,
  243, 224,229,155,
  243, 227,231,162,
  244, 227,231,162,
  244, 229,233,168,
  245, 229,233,168,
  245, 232,235,176,
  246, 232,235,176,
  246, 234,237,184,
  247, 234,237,184,
  247, 237,239,192,
  248, 237,239,192,
  248, 239,241,201,
  249, 239,241,201,
  249, 242,244,207,
  250, 242,244,207,
  250, 244,246,216,
  251, 244,246,216,
  251, 247,248,226,
  252, 247,248,226,
  252, 249,250,235,
  253, 249,250,235,
  253, 252,252,245,
  254, 252,252,245,
  254, 255,255,255,
  255, 255,255,255};

// Gradient palette "steps_gp_14", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/kst/tn/14_steps.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 2008 bytes of program space.

DEFINE_GRADIENT_PALETTE( steps_gp_14 ) {
    0,   0,  0,  0,
    0,   0,  0,  0,
    0,   0,  4,  0,
    1,   0,  4,  0,
    1,   0, 22,  0,
    2,   0, 22,  0,
    2,   0, 55,  0,
    3,   0, 55,  0,
    3,   0,104,  0,
    4,   0,104,  0,
    4,   0,169,  0,
    5,   0,169,  0,
    5,   0,255,  0,
    6,   0,255,  0,
    6,   0,235,  0,
    7,   0,235,  0,
    7,   0,215,  0,
    8,   0,215,  0,
    8,   0,195,  0,
    9,   0,195,  0,
    9,   0,176,  0,
   10,   0,176,  0,
   10,   0,159,  0,
   11,   0,159,  0,
   11,   0,144,  0,
   12,   0,144,  0,
   12,   0,128,  0,
   13,   0,128,  0,
   13,   0,114,  0,
   14,   0,114,  0,
   14,   0,100,  0,
   15,   0,100,  0,
   15,   0, 87,  0,
   16,   0, 87,  0,
   16,   0, 77,  0,
   17,   0, 77,  0,
  231, 255, 32,  8,
  231, 255, 35, 10,
  232, 255, 35, 10,
  232, 255, 38, 12,
  233, 255, 38, 12,
  233, 255, 42, 14,
  234, 255, 42, 14,
  234, 255, 47, 18,
  235, 255, 47, 18,
  235, 255, 53, 22,
  236, 255, 53, 22,
  236, 255, 58, 27,
  237, 255, 58, 27,
  237, 255, 66, 32,
  238, 255, 66, 32,
  238, 255, 72, 38,
  239, 255, 72, 38,
  239, 255, 80, 45,
  240, 255, 80, 45,
  240, 255, 87, 52,
  241, 255, 87, 52,
  241, 255, 96, 62,
  242, 255, 96, 62,
  242, 255,105, 71,
  243, 255,105, 71,
  243, 255,115, 82,
  244, 255,115, 82,
  244, 255,125, 93,
  245, 255,125, 93,
  245, 255,138,106,
  246, 255,138,106,
  246, 255,149,120,
  247, 255,149,120,
  247, 255,162,135,
  248, 255,162,135,
  248, 255,175,151,
  249, 255,175,151,
  249, 255,189,170,
  250, 255,189,170,
  250, 255,201,184,
  251, 255,201,184,
  251, 255,213,201,
  252, 255,213,201,
  252, 255,227,216,
  253, 255,227,216,
  253, 255,239,235,
  254, 255,239,235,
  254, 255,255,255,
  255, 255,255,255};

// Gradient palette "hardcandy_gp_28", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/kst/tn/28_hardcandy.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 2032 bytes of program space.

DEFINE_GRADIENT_PALETTE( hardcandy_gp_28 ) {
    0,   1,  7, 35,
    1,   1,  7, 35,
    1,   1,  9, 27,
    2,   1,  9, 27,
    2,   1, 12, 21,
    3,   1, 12, 21,
    3,   1, 15, 15,
    4,   1, 15, 15,
    4,   1, 19, 11,
    5,   1, 19, 11,
    5,   1, 22,  8,
    6,   1, 22,  8,
    6,   1, 27,  5,
    7,   1, 27,  5,
    7,   1, 31,  3,
    8,   1, 31,  3,
    8,   1, 36,  2,
    9,   1, 36,  2,
    9,   1, 40,  1,
   10,   1, 40,  1,
   10,   1, 45,  1,
   11,   1, 45,  1,
   11,   1, 52,  1,
   12,   1, 52,  1,
   12,   1, 56,  1,
   13,   1, 56,  1,
   13,   1, 62,  1,
   14,   1, 62,  1,
   14,   1, 69,  1,
   15,   1, 69,  1,
   15,   1, 74,  1,
   16,   1, 74,  1,
   16,   1, 81,  0,
   17,   1, 81,  0,
   17,   1, 87,  0,
   18,   1, 87,  0,
  230,  73,105,  1,
  230,  98, 99,  1,
  231,  98, 99,  1,
  231, 130, 92,  1,
  232, 130, 92,  1,
  232, 171, 86,  1,
  233, 171, 86,  1,
  233, 220, 80,  1,
  234, 220, 80,  1,
  234, 229, 74,  1,
  235, 229, 74,  1,
  235, 175, 68,  1,
  236, 175, 68,  1,
  236, 128, 62,  0,
  237, 128, 62,  0,
  237,  90, 56,  0,
  238,  90, 56,  0,
  238,  58, 51,  0,
  239,  58, 51,  0,
  239,  35, 45,  1,
  240,  35, 45,  1,
  240,  19, 40,  1,
  241,  19, 40,  1,
  241,   8, 35,  1,
  242,   8, 35,  1,
  242,   2, 31,  1,
  243,   2, 31,  1,
  243,   1, 26,  1,
  244,   1, 26,  1,
  244,   1, 22,  1,
  245,   1, 22,  1,
  245,   1, 18,  1,
  246,   1, 18,  1,
  246,   1, 15,  2,
  247,   1, 15,  2,
  247,   5, 12,  3,
  248,   5, 12,  3,
  248,  10,  9,  5,
  249,  10,  9,  5,
  249,  16,  7,  8,
  250,  16,  7,  8,
  250,  23,  5, 11,
  251,  23,  5, 11,
  251,  30,  3, 15,
  252,  30,  3, 15,
  252,  36,  2, 21,
  253,  36,  2, 21,
  253,  41,  1, 27,
  255,  41,  1, 27};

// Gradient palette "plasma_gp_32", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/kst/tn/32_plasma.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 2032 bytes of program space.

DEFINE_GRADIENT_PALETTE( plasma_gp_32 ) {
    0,   1,  1,  1,
    1,   1,  1,  1,
    1,   1,  1,  1,
    2,   1,  1,  1,
    2,   1,  1,  1,
    3,   1,  1,  1,
    3,   1,  1,  1,
    4,   1,  1,  1,
    4,   1,  2,  1,
    5,   1,  2,  1,
    5,   1,  2,  1,
    6,   1,  2,  1,
    6,   1,  3,  1,
    7,   1,  3,  1,
    7,   1,  5,  1,
    8,   1,  5,  1,
    8,   1,  7,  2,
    9,   1,  7,  2,
    9,   1,  9,  2,
   10,   1,  9,  2,
   10,   1, 12,  3,
   11,   1, 12,  3,
   11,   1, 16,  4,
   12,   1, 16,  4,
   12,   1, 20,  5,
   13,   1, 20,  5,
   13,   1, 25,  6,
   14,   1, 25,  6,
   14,   1, 31,  7,
   15,   1, 31,  7,
   15,   1, 36,  9,
   16,   1, 36,  9,
   16,   1, 44, 10,
   17,   1, 44, 10,
   17,   1, 52, 11,
   18,   1, 52, 11,
  230, 234,118,132,
  230, 234,111,133,
  231, 234,111,133,
  231, 234,103,135,
  232, 234,103,135,
  232, 234, 93,135,
  233, 234, 93,135,
  233, 234, 85,135,
  234, 234, 85,135,
  234, 234, 77,135,
  235, 234, 77,135,
  235, 234, 68,133,
  236, 234, 68,133,
  236, 234, 59,130,
  237, 234, 59,130,
  237, 234, 52,127,
  238, 234, 52,127,
  238, 234, 44,123,
  239, 234, 44,123,
  239, 237, 36,119,
  240, 237, 36,119,
  240, 237, 31,112,
  241, 237, 31,112,
  241, 237, 25,106,
  242, 237, 25,106,
  242, 239, 20, 99,
  243, 239, 20, 99,
  243, 242, 16, 91,
  244, 242, 16, 91,
  244, 244, 12, 83,
  245, 244, 12, 83,
  245, 244,  9, 74,
  246, 244,  9, 74,
  246, 247,  7, 66,
  247, 247,  7, 66,
  247, 252,  5, 59,
  248, 252,  5, 59,
  248, 255,  3, 50,
  249, 255,  3, 50,
  249, 252,  2, 42,
  250, 252,  2, 42,
  250, 247,  2, 35,
  251, 247,  2, 35,
  251, 244,  1, 29,
  252, 244,  1, 29,
  252, 239,  1, 22,
  253, 239,  1, 22,
  253, 234,  1, 17,
  255, 234,  1, 17};

// Gradient palette "Lindaa05_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/fractint/midtones/tn/Lindaa05.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 1996 bytes of program space.

DEFINE_GRADIENT_PALETTE( Lindaa05_gp ) {
    0,  80, 12,  1,
    0,  80, 12,  1,
    0,  86, 13,  1,
    1,  86, 13,  1,
    1,  86, 13,  1,
    3,  86, 13,  1,
    3,  91, 15,  1,
    4,  91, 15,  1,
    4,  91, 17,  2,
    4,  91, 17,  2,
    4,  97, 17,  3,
    5,  97, 17,  3,
    5,  97, 19,  4,
    7,  97, 19,  4,
    7, 103, 22,  6,
    8, 103, 22,  6,
    8, 103, 22,  8,
    9, 103, 22,  8,
    9, 109, 24,  9,
    9, 109, 24,  9,
    9, 109, 24, 12,
   10, 109, 24, 12,
   10, 115, 27, 14,
   12, 115, 27, 14,
   12, 115, 29, 15,
   13, 115, 29, 15,
   13, 121, 29, 19,
   13, 121, 29, 19,
   13, 121, 32, 22,
   14, 121, 32, 22,
   14, 128, 35, 27,
   15, 128, 35, 27,
   15, 121, 32, 27,
   17, 121, 32, 27,
   17, 115, 29, 24,
   18, 115, 29, 24,
   30,  66, 12, 15,
  231,  66, 12, 15,
  231,  71, 13, 17,
  231,  71, 13, 17,
  231,  80, 15, 17,
  232,  80, 15, 17,
  232,  86, 17, 19,
  233,  86, 17, 19,
  233,  91, 22, 19,
  235,  91, 22, 19,
  235, 103, 24, 22,
  236, 103, 24, 22,
  236, 109, 27, 22,
  236, 109, 27, 22,
  236, 115, 29, 24,
  237, 115, 29, 24,
  237, 128, 35, 27,
  239, 128, 35, 27,
  239, 128, 35, 24,
  240, 128, 35, 24,
  240, 121, 32, 22,
  241, 121, 32, 22,
  241, 121, 32, 17,
  241, 121, 32, 17,
  241, 115, 29, 15,
  242, 115, 29, 15,
  242, 115, 27, 14,
  244, 115, 27, 14,
  244, 109, 27, 10,
  245, 109, 27, 10,
  245, 109, 24,  9,
  245, 109, 24,  9,
  245, 103, 22,  6,
  246, 103, 22,  6,
  246, 103, 22,  5,
  247, 103, 22,  5,
  247,  97, 19,  4,
  249,  97, 19,  4,
  249,  97, 19,  3,
  250,  97, 19,  3,
  250,  91, 17,  2,
  250,  91, 17,  2,
  250,  91, 15,  1,
  251,  91, 15,  1,
  251,  86, 15,  1,
  253,  86, 15,  1,
  253,  86, 13,  1,
  254,  86, 13,  1,
  254,  80, 12,  1,
  255,  80, 12,  1};

// Gradient palette "damien5_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/fractint/midtones/tn/damien5.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 1872 bytes of program space.

DEFINE_GRADIENT_PALETTE( damien5_gp ) {
    0,   0,  0,  0,
    0,   0,  0,  0,
    0,   0,  0,  1,
    1,   0,  0,  1,
    3,   0,  0,  1,
    3,   0,  1,  1,
    4,   0,  1,  1,
    4,   0,  1,  1,
    4,   0,  1,  1,
    5,   0,  1,  1,
    5,   0,  1,  1,
    7,   0,  1,  1,
    7,   0,  1,  1,
    8,   0,  1,  1,
    9,   0,  1,  1,
    9,   0,  1,  1,
    9,   0,  1,  1,
   10,   0,  1,  1,
   10,   0,  1,  1,
   12,   0,  1,  1,
   12,   0,  1,  1,
   13,   0,  1,  1,
   13,   0,  1,  1,
   13,   0,  1,  1,
   14,   0,  1,  1,
   14,   0,  1,  2,
   15,   0,  1,  2,
   17,   0,  1,  2,
   17,   0,  1,  3,
   18,   0,  1,  3,
   18,   0,  1,  3,
   18,   0,  1,  3,
   19,   0,  1,  3,
   19,   0,  1,  4,
   21,   0,  1,  4,
   22,   0,  1,  4,
   30,  42,  0,  0,
  231,  42,  0,  0,
  231,  39,  0,  0,
  231,  39,  0,  0,
  231,  32,  0,  0,
  232,  32,  0,  0,
  232,  30,  0,  0,
  233,  30,  0,  0,
  233,  27,  0,  0,
  235,  27,  0,  0,
  235,  24,  0,  0,
  236,  24,  0,  0,
  236,  22,  0,  0,
  236,  22,  0,  0,
  236,  18,  0,  0,
  237,  18,  0,  0,
  237,  16,  0,  0,
  239,  16,  0,  0,
  239,  14,  0,  0,
  240,  14,  0,  0,
  240,  12,  0,  0,
  241,  12,  0,  0,
  241,   9,  0,  0,
  241,   9,  0,  0,
  241,   8,  0,  0,
  242,   8,  0,  0,
  242,   7,  0,  0,
  244,   7,  0,  0,
  244,   5,  0,  0,
  245,   5,  0,  0,
  245,   4,  0,  0,
  245,   4,  0,  0,
  245,   3,  0,  0,
  246,   3,  0,  0,
  246,   2,  0,  0,
  247,   2,  0,  0,
  247,   2,  0,  0,
  249,   2,  0,  0,
  249,   1,  0,  0,
  250,   1,  0,  0,
  250,   1,  0,  0,
  250,   1,  0,  0,
  250,   1,  0,  0,
  251,   1,  0,  0,
  251,   1,  0,  0,
  253,   1,  0,  0,
  253,   1,  0,  0,
  254,   1,  0,  0,
  254,   1,  0,  0,
  255,   1,  0,  0};

// Gradient palette "Lindaa06_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/fractint/midtones/tn/Lindaa06.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 1896 bytes of program space.

DEFINE_GRADIENT_PALETTE( Lindaa06_gp ) {
    0, 217, 10,  0,
    0, 217, 10,  0,
    0, 208,  9,  0,
    1, 208,  9,  0,
    1, 199,  9,  0,
    3, 199,  9,  0,
    3, 190,  7,  0,
    4, 190,  7,  0,
    4, 190,  6,  0,
    4, 190,  6,  0,
    4, 182,  6,  0,
    5, 182,  6,  0,
    5, 173,  5,  0,
    7, 173,  5,  0,
    7, 165,  4,  0,
    8, 165,  4,  0,
    8, 157,  3,  0,
    9, 157,  3,  0,
    9, 142,  2,  0,
    9, 142,  2,  0,
    9, 135,  1,  0,
   10, 135,  1,  0,
   10, 121,  1,  0,
   12, 121,  1,  0,
   12, 115,  1,  0,
   13, 115,  1,  0,
   13, 103,  1,  0,
   13, 103,  1,  0,
   13,  97,  1,  0,
   14,  97,  1,  0,
   14,  86,  1,  0,
   15,  86,  1,  0,
   15,  75,  0,  0,
   17,  75,  0,  0,
   17,  80,  1,  0,
   18,  80,  1,  0,
  30, 128,  1,  0,
  230, 121,  1,  0,
  231, 121,  1,  0,
  231, 115,  1,  0,
  231, 115,  1,  0,
  231, 109,  1,  0,
  232, 109,  1,  0,
  232, 103,  1,  0,
  233, 103,  1,  0,
  233,  97,  1,  0,
  235,  97,  1,  0,
  235,  91,  1,  0,
  236,  91,  1,  0,
  236,  86,  1,  0,
  236,  86,  1,  0,
  236,  80,  1,  0,
  237,  80,  1,  0,
  237,  75,  0,  0,
  239,  75,  0,  0,
  239,  71,  0,  0,
  240,  71,  0,  0,
  240,  75,  1,  0,
  241,  75,  1,  0,
  241,  86,  1,  0,
  241,  86,  1,  0,
  241,  97,  1,  0,
  242,  97,  1,  0,
  242, 109,  1,  0,
  244, 109,  1,  0,
  244, 121,  1,  0,
  245, 121,  1,  0,
  245, 135,  1,  0,
  245, 135,  1,  0,
  245, 150,  2,  0,
  246, 150,  2,  0,
  246, 165,  4,  0,
  247, 165,  4,  0,
  249, 165,  4,  0,
  249, 173,  5,  0,
  250, 173,  5,  0,
  250, 182,  6,  0,
  250, 182,  6,  0,
  250, 190,  6,  0,
  251, 190,  6,  0,
  251, 199,  7,  0,
  253, 199,  7,  0,
  253, 208,  9,  0,
  254, 208,  9,  0,
  254, 217, 10,  0,
  255, 217, 10,  0};



// Gradient palette "Skydye12_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/fractint/jewelmap/tn/Skydye12.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 2036 bytes of program space.

DEFINE_GRADIENT_PALETTE( Skydye12_gp ) {
    0,   1,  0, 65,
    0,   1,  0, 65,
    0,   1,  0, 56,
    1,   1,  0, 56,
    1,   1,  1, 49,
    3,   1,  1, 49,
    3,   3,  1, 38,
    4,   3,  1, 38,
    4,   4,  1, 32,
    4,   4,  1, 32,
    4,   8,  1, 27,
    5,   8,  1, 27,
    5,  10,  1, 22,
    7,  10,  1, 22,
    7,  16,  1, 15,
    8,  16,  1, 15,
    8,  20,  1, 12,
    9,  20,  1, 12,
    9,  16,  1, 10,
    9,  16,  1, 10,
    9,  14,  1,  8,
   10,  14,  1,  8,
   10,  10,  1,  6,
   12,  10,  1,  6,
   12,   8,  1,  5,
   13,   8,  1,  5,
   13,   5,  1,  3,
   13,   5,  1,  3,
   13,   4,  1,  3,
   14,   4,  1,  3,
   14,   3,  1,  2,
   15,   3,  1,  2,
   15,   2,  1,  1,
   17,   2,  1,  1,
   17,   1,  1,  1,
   18,   1,  1,  1,
 30,   2,  1, 45,
  231,   2,  1, 45,
  231,   1,  1, 52,
  231,   1,  1, 52,
  231,   1,  1, 65,
  232,   1,  1, 65,
  232,   1,  0, 74,
  233,   1,  0, 74,
  233,   0,  0, 84,
  235,   0,  0, 84,
  235,   0,  1, 95,
  236,   0,  1, 95,
  236,   0,  2,106,
  236,   0,  2,106,
  236,   0,  6,125,
  237,   0,  6,125,
  237,   0, 12,138,
  239,   0, 12,138,
  239,   0, 19,153,
  240,   0, 19,153,
  240,   0, 29,168,
  241,   0, 29,168,
  241,   0, 41,184,
  241,   0, 41,184,
  241,   0, 55,210,
  242,   0, 55,210,
  242,   0, 72,228,
  244,   0, 72,228,
  244,   0, 91,247,
  245,   0, 91,247,
  245,   0, 72,228,
  245,   0, 72,228,
  245,   0, 52,201,
  246,   0, 52,201,
  246,   0, 38,184,
  247,   0, 38,184,
  247,   0, 27,168,
  249,   0, 27,168,
  249,   0, 15,145,
  250,   0, 15,145,
  250,   0,  9,132,
  250,   0,  9,132,
  250,   0,  3,112,
  251,   0,  3,112,
  251,   0,  1,100,
  253,   0,  1,100,
  253,   0,  0, 84,
  254,   0,  0, 84,
  254,   1,  0, 74,
  255,   1,  0, 74};

// Gradient palette "Lindaa08_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/fractint/blackmap/tn/Lindaa08.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 1884 bytes of program space.

DEFINE_GRADIENT_PALETTE( Lindaa08_gp ) {
    0,   0,  0,  0,
    0,   0,  0,  0,
    1,   0,  0,  0,
    3,   0,  0,  0,
    4,   0,  0,  0,
    4,   0,  0,  0,
    5,   0,  0,  0,
    7,   0,  0,  0,
    8,   0,  0,  0,
    9,   0,  0,  0,
    9,   0,  0,  0,
   10,   0,  0,  0,
   12,   0,  0,  0,
   13,   0,  0,  0,
   13,   0,  0,  0,
   14,   0,  0,  0,
   15,   0,  0,  0,
   17,   0,  0,  0,
   18,   0,  0,  0,
   18,   1,  0,  0,
   18,   1,  0,  0,
   19,   1,  0,  0,
   19,   1,  0,  0,
   21,   1,  0,  0,
   21,   1,  0,  0,
   22,   1,  0,  0,
   22,   1,  1,  0,
   23,   1,  1,  0,
   23,   2,  1,  0,
   23,   2,  1,  0,
   23,   3,  1,  0,
   24,   3,  1,  0,
   24,   4,  1,  0,
   26,   4,  1,  0,
   26,   5,  1,  0,
   27,   5,  1,  0,
 28,   1, 41, 22,
  230,   1, 41, 22,
  230,   1, 35, 19,
  231,   1, 35, 19,
  231,   1, 32, 15,
  231,   1, 32, 15,
  231,   1, 27, 14,
  232,   1, 27, 14,
  232,   1, 22, 12,
  233,   1, 22, 12,
  233,   1, 19,  9,
  235,   1, 19,  9,
  235,   1, 15,  8,
  236,   1, 15,  8,
  236,   1, 12,  5,
  236,   1, 12,  5,
  236,   1, 10,  4,
  237,   1, 10,  4,
  237,   1,  7,  3,
  239,   1,  7,  3,
  239,   1,  5,  2,
  240,   1,  5,  2,
  241,   1,  5,  2,
  241,   1,  4,  1,
  241,   1,  4,  1,
  241,   1,  3,  1,
  242,   1,  3,  1,
  242,   1,  3,  1,
  244,   1,  3,  1,
  244,   1,  2,  1,
  245,   1,  2,  1,
  245,   1,  1,  1,
  245,   1,  1,  1,
  245,   1,  1,  1,
  246,   1,  1,  1,
  246,   1,  1,  1,
  247,   1,  1,  1,
  247,   1,  1,  1,
  249,   1,  1,  1,
  249,   1,  1,  1,
  250,   1,  1,  1,
  250,   1,  1,  1,
  250,   1,  1,  1,
  251,   1,  1,  1,
  251,   1,  1,  1,
  253,   1,  1,  1,
  253,   1,  1,  1,
  254,   1,  1,  1,
  254,   0,  0,  0,
  255,   0,  0,  0};

// Gradient palette "Banded_FG_T_BG_T_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/strips/tn/Banded_FG_T_BG_T.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 48 bytes of program space.

DEFINE_GRADIENT_PALETTE( Banded_FG_T_BG_T_gp ) {
    0,   0,  0,  0,
   31,  42, 55, 45,
   63, 255,255,255,
   63,   0,  0,  0,
   95,  42, 55, 45,
  127, 255,255,255,
  127,   0,  0,  0,
  159,  42, 55, 45,
  191, 255,255,255,
  191,   0,  0,  0,
  223,  42, 55, 45,
  255, 255,255,255};

// Gradient palette "Split_Complementary_05_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/vermillion/tn/Split_Complementary_05.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( Split_Complementary_05_gp ) {
    0,  53,  1,  1,
   63,   8,  9, 59,
  127,   0, 33,255,
  191,   0,115, 56,
  255,   0,255,  1};

// Gradient palette "Another_Sunset_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Another_Sunset.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 32 bytes of program space.

DEFINE_GRADIENT_PALETTE( Another_Sunset_gp ) {
    0, 110, 49, 11,
   29,  55, 34, 10,
   68,  22, 22,  9,
   68, 239,124,  8,
   97, 220,156, 27,
  124, 203,193, 61,
  178,  33, 53, 56,
  255,   0,  1, 52};

// Gradient palette "Melancholia_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/atmospheric/tn/Melancholia.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 44 bytes of program space.

DEFINE_GRADIENT_PALETTE( Melancholia_gp ) {
    0,  67, 35, 61,
   52,  42, 48, 92,
   90,  23, 63,130,
  100,  17, 75,178,
  111,  11, 88,235,
  118,  22, 88,170,
  126,  39, 90,117,
  151,  69, 63,108,
  181, 112, 43, 99,
  229, 118, 44,105,
  255, 125, 45,111};


// Single array of defined cpt-city color palettes.
// This will let us programmatically choose one based on
// a number, rather than having to activate each explicitly
// by name every time.
// Since it is const, this array could also be moved
// into PROGMEM to save SRAM, but for simplicity of illustration
// we'll keep it in a regular SRAM array.
//
// This list of color palettes acts as a "playlist"; you can
// add or delete, or re-arrange as you wish.

const TProgmemRGBGradientPalettePtr gGradientPalettes[] = {
  Sunset_Real_gp,
  es_rivendell_15_gp,
  es_ocean_breeze_036_gp,
  rgi_15_gp,
  retro2_16_gp,
  Analogous_1_gp,
  es_pinksplash_08_gp,
  Coral_reef_gp,
  es_ocean_breeze_068_gp,
  es_pinksplash_07_gp,
  Banded_FG_T_BG_T_gp,
  departure_gp,
  es_landscape_64_gp,
  es_landscape_33_gp,
  rainbowsherbet_gp,
  gr65_hult_gp,
  droz12_gp,
  gr64_hult_gp,
  GMT_drywet_gp,
  ib_jul01_gp,
  es_vintage_57_gp,
  ib15_gp,
  Fuschia_7_gp,
  es_emerald_dragon_08_gp,
  Colorfull_gp,
  Magenta_Evening_gp,
  Pink_Purple_gp,
  Split_Complementary_05_gp,
  es_autumn_19_gp,
  BlacK_Blue_Magenta_White_gp,
  BlacK_Magenta_Red_gp,
  wiki_precip_mm_gp,
  BlacK_Red_Magenta_Yellow_gp,
  Blue_Cyan_Yellow_gp,
  wiki_precip_mm_gp,
  droz12_gp, // red with blank
  purplefly_gp, // purple and white
  cequal_gp, //white and black
  mby_gp, //red white and blue
  sunlitwave_gp, //colorful
  ncar_gp, //
  xkcd_bath_gp,
  bhw1_28_gp,
  sst_gp,
  celsius_gp,
  earth_gp,
  bhw2_22_gp,
  colorcube_gp,
  metal_black_gp,
  blu_grn_red_yel_gp_04,
  Another_Sunset_gp,
  stern_special_gp_15,
  steps_gp_14,
  hardcandy_gp_28 ,
  plasma_gp_32,
  Lindaa05_gp,
  damien5_gp,
  Lindaa06_gp,
  Melancholia_gp,
  Lindaa05_gp,
  Lindaa08_gp
};

// Count of how many cpt-city gradients are defined:
const uint8_t gGradientPaletteCount =
  sizeof( gGradientPalettes) / sizeof( TProgmemRGBGradientPalettePtr );

/*
 * End of shared palettes
 */

// One off Palettes

 // Gradient palette "German_flag_smooth_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/ggr/tn/German_flag_smooth.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE( German_flag_smooth_gp ) {
    0,   0,  0,  0,
   63,  42,  0,  0,
  127, 255,  0,  0,
  191, 255, 55,  0,
  255, 255,255,  0};
