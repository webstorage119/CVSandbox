#include <ximage.h>

static uint8_t shift_image_16x16_data[] =
{
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x58, 0x58, 0x58, 0x00, 0x58, 0x58, 0x58, 0x00, 0x58, 0x58, 0x58, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x58, 0x58, 0x58, 0x00, 
    0x58, 0x58, 0x58, 0x00, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF3, 0xF3, 0xF3, 0xFF, 
    0xF5, 0xF5, 0xF6, 0xFF, 0xF7, 0xF8, 0xF7, 0xFF, 0xF9, 0xF9, 0xF9, 0xFF, 0xFB, 0xFB, 0xFB, 0xFF, 0xFC, 0xFC, 0xFD, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0x00, 0x58, 0x58, 0x58, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x58, 0x58, 0x58, 0x00, 0x62, 0x5B, 0x78, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xEE, 0xEE, 0xEF, 0xFF, 
    0xF0, 0xF1, 0xF0, 0xFF, 0xF3, 0xF2, 0xF3, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 0xF7, 0xF8, 0xF7, 0xFF, 0xF9, 0xF9, 0xF9, 0xFF, 
    0xFB, 0xFB, 0xFB, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xEC, 0xEC, 0xEB, 0xFF, 0xEF, 0xEF, 0xEF, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 
    0xF6, 0xF7, 0xF7, 0xFF, 0xF9, 0xF9, 0xF9, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x5B, 0x78, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xEA, 0xE9, 0xE9, 0xFF, 0xEB, 0xEB, 0xEC, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0xF0, 0xF0, 0xF1, 0xFF, 
    0xF2, 0xF2, 0xF2, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 0xF6, 0xF7, 0xF6, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x62, 0x5B, 0x78, 0xF5, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xE9, 0xE9, 0xE9, 0xFF, 0xEC, 0xEB, 0xEB, 0xFF, 
    0xEE, 0xEE, 0xED, 0xFF, 0xF0, 0xF0, 0xF0, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 0xF4, 0xF5, 0xF4, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE4, 0xE4, 0xE5, 0xFF, 0xE6, 0xE6, 0xE6, 0xFF, 
    0xE8, 0xE9, 0xE9, 0xFF, 0xEB, 0xEB, 0xEC, 0xFF, 0xEE, 0xED, 0xED, 0xFF, 0xF0, 0xF0, 0xEF, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE2, 0xE2, 0xE2, 0xFF, 
    0xE4, 0xE4, 0xE4, 0xFF, 0xE6, 0xE6, 0xE7, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 0xED, 0xED, 0xEE, 0xFF, 
    0xF0, 0xEF, 0xF0, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0x00, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 
    0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 
    0x58, 0x58, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0xFF, 
    0x00, 0x54, 0xA6, 0x00, 0x58, 0x58, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 
    0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 
    0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 0x58, 0x58, 0x58, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0xFF, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x58, 0x58, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0xFF, 
    0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x58, 0x58, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0x00, 
    0x00, 0x54, 0xA6, 0x00, 0x00, 0x54, 0xA6, 0xFF, 0x00, 0x54, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
};

static const ximage image_shift_image_16x16 =
{
    &shift_image_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};