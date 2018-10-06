#include <ximage.h>

static uint8_t dilatation_16x16_data[] =
{
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0xEF, 0xE7, 0x07, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 
    0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0xEF, 0xE7, 0x07, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0xEF, 0xE7, 0x07, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0x00, 0x18, 0x18, 0x7C, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 
};

static const ximage image_dilatation_16x16 =
{
    &dilatation_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
