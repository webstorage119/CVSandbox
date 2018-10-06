#include <ximage.h>

static uint8_t objects_thinning_16x16_data[] =
{
    0xF6, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0xFF, 
    0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xFF, 0xEB, 0xEB, 0xEC, 0xFF, 0xEC, 0xEB, 0xEB, 0xFF, 0xEA, 0xEB, 0xEA, 0xFF, 
    0xEA, 0xEA, 0xE9, 0xFF, 0xE9, 0xE8, 0xE8, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0xE8, 0xE8, 0xE8, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0x92, 0x92, 0x92, 0xFF, 
    0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0xC8, 0xE1, 0xF8, 0xFF, 0xC3, 0xE0, 0xF8, 0xFF, 0xBB, 0xDF, 0xF9, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0xE6, 0xE6, 0xE6, 0xFF, 
    0xE6, 0xE6, 0xE6, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 0xEC, 0xEC, 0xEB, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0xC8, 0xE1, 0xF8, 0xFF, 0xC3, 0xE0, 0xF8, 0xFF, 0xBB, 0xE0, 0xF8, 0xFF, 0xB4, 0xDF, 0xF8, 0xFF, 0xAC, 0xDE, 0xF9, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0xE6, 0xE5, 0xE5, 0xFF, 0xE4, 0xE4, 0xE4, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 0xEB, 0xEB, 0xEB, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0xC8, 0xE1, 0xF8, 0xFF, 0xC4, 0xE1, 0xF8, 0xFF, 0xBC, 0xDF, 0xF9, 0xFF, 0xB5, 0xDF, 0xF8, 0xFF, 0xAD, 0xDE, 0xF9, 0xFF, 
    0xA5, 0xDE, 0xF8, 0xFF, 0x9E, 0xDD, 0xF9, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0xE4, 0xE3, 0xE3, 0xFF, 0x92, 0x92, 0x92, 0xFF, 
    0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 0xEA, 0xEA, 0xEB, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0xC4, 0xE1, 0xF8, 0xFF, 0xBD, 0xDF, 0xF8, 0xFF, 0xB5, 0xDF, 0xF9, 0xFF, 0xAD, 0xDE, 0xF9, 0xFF, 
    0xA6, 0xDE, 0xF8, 0xFF, 0x9F, 0xDD, 0xF9, 0xFF, 0x97, 0xDC, 0xF8, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0xE3, 0xE2, 0xE2, 0xFF, 
    0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 
    0xE9, 0xE9, 0xEA, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0xBD, 0xE0, 0xF8, 0xFF, 0xB5, 0xE0, 0xF8, 0xFF, 0xAE, 0xDF, 0xF9, 0xFF, 
    0xA6, 0xDE, 0xF9, 0xFF, 0x9F, 0xDD, 0xF9, 0xFF, 0x98, 0xDC, 0xF9, 0xFF, 0x8F, 0xDB, 0xF9, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0xE2, 0xE1, 0xE2, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x92, 0x92, 0x92, 0xFF, 0xE9, 0xE8, 0xE9, 0xFF, 0xE8, 0xE8, 0xE8, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0xAE, 0xDE, 0xF9, 0xFF, 
    0xA7, 0xDD, 0xF9, 0xFF, 0x9F, 0xDD, 0xF9, 0xFF, 0x98, 0xDC, 0xF9, 0xFF, 0x90, 0xDB, 0xF9, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0xE3, 0xE1, 0xE1, 0xFF, 0xE2, 0xE0, 0xE0, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 0xE7, 0xE7, 0xE6, 0xFF, 0xE7, 0xE6, 0xE6, 0xFF, 
    0x04, 0x71, 0xD7, 0xFF, 0xA0, 0xDD, 0xF9, 0xFF, 0x98, 0xDC, 0xF9, 0xFF, 0x91, 0xDC, 0xF9, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0x92, 0x92, 0x92, 0x00, 0x92, 0x92, 0x92, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 
    0xE5, 0xE5, 0xE5, 0xFF, 0xE5, 0xE5, 0xE4, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 0x04, 0x71, 0xD7, 0xFF, 
    0xE2, 0xE1, 0xE1, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 0xE4, 0xE4, 0xE4, 0xFF, 0xE3, 0xE3, 0xE3, 0xFF, 0xE3, 0xE2, 0xE2, 0xFF, 
    0xE2, 0xE1, 0xE1, 0xFF, 0xE1, 0xE1, 0xE0, 0xFF, 0xF6, 0x00, 0x00, 0xFF, 0xF6, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xFF, 
    0xF6, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0xFF, 
    0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0xFF, 0x92, 0x92, 0x92, 0x00, 0xF6, 0x00, 0x00, 0x00, 
    0xF6, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x92, 0x92, 0x92, 0x00, 0x92, 0x92, 0x92, 0x00, 0x92, 0x92, 0x92, 0x00, 0x92, 0x92, 0x92, 0x00, 0x92, 0x92, 0x92, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xF6, 0x00, 0x00, 0x00, 
};

static const ximage image_objects_thinning_16x16 =
{
    &objects_thinning_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
