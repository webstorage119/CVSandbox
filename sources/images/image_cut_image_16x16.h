#include <ximage.h>

static uint8_t cut_image_16x16_data[] =
{
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xF0, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 
    0xF2, 0xF2, 0xF2, 0xFF, 0xF2, 0xF3, 0xF3, 0xFF, 0xF4, 0xF4, 0xF4, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 0xF5, 0xF5, 0xF7, 0xFF, 
    0xF7, 0xF6, 0xF8, 0xFF, 0xF8, 0xF8, 0xF8, 0xFF, 0xF9, 0xF9, 0xFA, 0xFF, 0xFB, 0xFA, 0xFB, 0xFF, 0xFB, 0xFB, 0xFC, 0xFF, 
    0xFC, 0xFC, 0xFD, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 
    0xEF, 0xEF, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF2, 0xF2, 0xF2, 0xFF, 0xF3, 0xF2, 0xF3, 0xFF, 0xF4, 0xF4, 0xF4, 0xFF, 
    0xF5, 0xF4, 0xF5, 0xFF, 0xF6, 0xF6, 0xF6, 0xFF, 0xF7, 0xF6, 0xF7, 0xFF, 0xF8, 0xF8, 0xF9, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 
    0xFA, 0xFA, 0xFB, 0xFF, 0xFB, 0xFB, 0xFD, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xEF, 0xEF, 0xEF, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 
    0xF3, 0xF2, 0xF3, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xF5, 0xF6, 0xF6, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 
    0x8E, 0x8E, 0x8E, 0xFF, 0xF9, 0xF9, 0xFA, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xEC, 0xEC, 0xEC, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xEE, 0xEF, 0xEF, 0xFF, 0xEF, 0xEF, 0xF0, 0xFF, 
    0xF0, 0xF0, 0xF0, 0xFF, 0xF2, 0xF1, 0xF2, 0xFF, 0xF3, 0xF2, 0xF3, 0xFF, 0xF3, 0xF4, 0xF4, 0xFF, 0xF4, 0xF5, 0xF5, 0xFF, 
    0xF6, 0xF5, 0xF7, 0xFF, 0xF7, 0xF7, 0xF8, 0xFF, 0xF8, 0xF8, 0xF9, 0xFF, 0xF9, 0xF9, 0xFA, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xEB, 0xEC, 0xFF, 0xEC, 0xEC, 0xED, 0xFF, 0xED, 0xED, 0xEE, 0xFF, 
    0xEE, 0xEE, 0xEF, 0xFF, 0xEF, 0xEF, 0xF0, 0xFF, 0xF1, 0xF1, 0xF1, 0xFF, 0xF1, 0xF2, 0xF2, 0xFF, 0xF2, 0xF2, 0xF3, 0xFF, 
    0xF4, 0xF3, 0xF5, 0xFF, 0xF5, 0xF5, 0xF5, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xF7, 0xF7, 0xF8, 0xFF, 0xF8, 0xF8, 0xF9, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEA, 0xEA, 0xEA, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 
    0xEC, 0xEC, 0xEC, 0xFF, 0xED, 0xED, 0xEE, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0xEF, 0xEF, 0xF0, 0xFF, 0xF0, 0xF1, 0xF1, 0xFF, 
    0xF2, 0xF1, 0xF2, 0xFF, 0xF3, 0xF3, 0xF3, 0xFF, 0xF4, 0xF4, 0xF5, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xF5, 0xF5, 0xF7, 0xFF, 
    0xF6, 0xF7, 0xF8, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE9, 0xE8, 0xE9, 0xFF, 
    0x8E, 0x8E, 0x8E, 0xFF, 0xEB, 0xEA, 0xEC, 0xFF, 0xEC, 0xEC, 0xEC, 0xFF, 0xED, 0xED, 0xED, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 
    0xEF, 0xEF, 0xF0, 0xFF, 0xF0, 0xF0, 0xF1, 0xFF, 0xF2, 0xF1, 0xF2, 0xFF, 0xF3, 0xF3, 0xF3, 0xFF, 0xF3, 0xF4, 0xF4, 0xFF, 
    0xF5, 0xF4, 0xF5, 0xFF, 0xF6, 0xF5, 0xF7, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xE8, 0xE8, 0xE8, 0xFF, 0xE8, 0xE9, 0xE9, 0xFF, 0xEA, 0xEA, 0xEA, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 0xEC, 0xEC, 0xEC, 0xFF, 
    0xED, 0xED, 0xED, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0xEF, 0xEF, 0xF0, 0xFF, 0xF1, 0xF0, 0xF1, 0xFF, 0xF1, 0xF1, 0xF2, 0xFF, 
    0x8E, 0x8E, 0x8E, 0xFF, 0xF4, 0xF3, 0xF4, 0xFF, 0xF5, 0xF4, 0xF5, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xE8, 0xE9, 0xE9, 0xFF, 0xE9, 0xEA, 0xEA, 0xFF, 
    0xEB, 0xEB, 0xEB, 0xFF, 0xEC, 0xEC, 0xEC, 0xFF, 0xED, 0xED, 0xED, 0xFF, 0xEF, 0xEF, 0xEF, 0xFF, 0xEF, 0xEF, 0xF0, 0xFF, 
    0xF0, 0xF0, 0xF1, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xF2, 0xF2, 0xF3, 0xFF, 0xF4, 0xF3, 0xF4, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE5, 0xE6, 0xE6, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xE8, 0xE7, 0xE8, 0xFF, 
    0xE9, 0xE9, 0xE9, 0xFF, 0xEA, 0xEA, 0xEA, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 0xEC, 0xEB, 0xEC, 0xFF, 0xED, 0xED, 0xEE, 0xFF, 
    0xEE, 0xEE, 0xEF, 0xFF, 0xEF, 0xF0, 0xF0, 0xFF, 0xF1, 0xF0, 0xF1, 0xFF, 0xF1, 0xF1, 0xF2, 0xFF, 0xF3, 0xF3, 0xF3, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE5, 0xE4, 0xE4, 0xFF, 0xE5, 0xE6, 0xE6, 0xFF, 
    0xE6, 0xE7, 0xE6, 0xFF, 0xE8, 0xE7, 0xE8, 0xFF, 0xE9, 0xE9, 0xE9, 0xFF, 0xE9, 0xE9, 0xEA, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 
    0xEC, 0xEC, 0xEC, 0xFF, 0xED, 0xED, 0xED, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xF0, 0xF1, 0xF1, 0xFF, 
    0xF2, 0xF2, 0xF1, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xE3, 0xE3, 0xE4, 0xFF, 
    0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 
    0xEA, 0xEA, 0xE9, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xEC, 0xED, 0xED, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 
    0x8E, 0x8E, 0x8E, 0xFF, 0xF0, 0xF0, 0xF1, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xE2, 0xE2, 0xE2, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xE5, 0xE5, 0xE5, 0xFF, 0xE6, 0xE5, 0xE5, 0xFF, 0xE6, 0xE6, 0xE6, 0xFF, 
    0xE8, 0xE8, 0xE8, 0xFF, 0xE9, 0xE9, 0xE9, 0xFF, 0xEA, 0xE9, 0xEA, 0xFF, 0xEB, 0xEA, 0xEB, 0xFF, 0xEB, 0xEC, 0xEC, 0xFF, 
    0xED, 0xED, 0xED, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0xEF, 0xEF, 0xEF, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFF, 0xFF, 0xFF, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x8E, 0x8E, 0x8E, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 0x62, 0x5B, 0x78, 0xFF, 
    0x62, 0x5B, 0x78, 0xFF, 
};

static const ximage image_cut_image_16x16 =
{
    &cut_image_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
