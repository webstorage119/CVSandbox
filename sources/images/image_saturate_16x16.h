#include <ximage.h>

static uint8_t saturate_16x16_data[] =
{
    0xFF, 0xFF, 0xFF, 0x00, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xFF, 0xFF, 0xFF, 0x00, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x25, 0x18, 0x25, 0xFF, 0x79, 0x50, 0x79, 0xFF, 
    0x84, 0x65, 0x98, 0xFF, 0x6A, 0x65, 0x98, 0xFF, 0x65, 0x7D, 0x98, 0xFF, 0x65, 0x98, 0x98, 0xFF, 0x65, 0x98, 0x7D, 0xFF, 
    0x6A, 0x98, 0x65, 0xFF, 0x85, 0x98, 0x65, 0xFF, 0x98, 0x8E, 0x65, 0xFF, 0x98, 0x72, 0x65, 0xFF, 0xB2, 0x8B, 0x8B, 0xFF, 
    0xE7, 0xDB, 0xDB, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x29, 0x1B, 0x29, 0xFF, 
    0x7D, 0x53, 0x7D, 0xFF, 0x84, 0x65, 0x98, 0xFF, 0x6A, 0x65, 0x98, 0xFF, 0x65, 0x7D, 0x98, 0xFF, 0x65, 0x98, 0x98, 0xFF, 
    0x65, 0x98, 0x7D, 0xFF, 0x6A, 0x98, 0x65, 0xFF, 0x85, 0x98, 0x65, 0xFF, 0x98, 0x8E, 0x65, 0xFF, 0x98, 0x72, 0x65, 0xFF, 
    0xB2, 0x8B, 0x8B, 0xFF, 0xE7, 0xDB, 0xDB, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x25, 0x18, 0x25, 0xFF, 0x79, 0x50, 0x79, 0xFF, 0x84, 0x65, 0x98, 0xFF, 0x68, 0x65, 0x98, 0xFF, 0x65, 0x7D, 0x98, 0xFF, 
    0x65, 0x98, 0x98, 0xFF, 0x65, 0x98, 0x7D, 0xFF, 0x6A, 0x98, 0x65, 0xFF, 0x85, 0x98, 0x65, 0xFF, 0x98, 0x8E, 0x65, 0xFF, 
    0x98, 0x72, 0x65, 0xFF, 0xB2, 0x8B, 0x8B, 0xFF, 0xE7, 0xDB, 0xDB, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x29, 0x1B, 0x29, 0xFF, 0x79, 0x50, 0x79, 0xFF, 0x84, 0x65, 0x98, 0xFF, 0x68, 0x65, 0x98, 0xFF, 
    0x65, 0x7D, 0x98, 0xFF, 0x65, 0x98, 0x98, 0xFF, 0x65, 0x98, 0x7D, 0xFF, 0x6A, 0x98, 0x65, 0xFF, 0x85, 0x98, 0x65, 0xFF, 
    0x98, 0x8E, 0x65, 0xFF, 0x98, 0x72, 0x65, 0xFF, 0xB4, 0x8F, 0x8F, 0xFF, 0xE7, 0xDB, 0xDB, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x29, 0x1B, 0x29, 0xFF, 0x79, 0x50, 0x79, 0xFF, 0x84, 0x65, 0x98, 0xFF, 
    0x68, 0x65, 0x98, 0xFF, 0x65, 0x7D, 0x98, 0xFF, 0x65, 0x98, 0x98, 0xFF, 0x65, 0x98, 0x7D, 0xFF, 0x6A, 0x98, 0x65, 0xFF, 
    0x85, 0x98, 0x65, 0xFF, 0x98, 0x8E, 0x65, 0xFF, 0x98, 0x72, 0x65, 0xFF, 0xB4, 0x8F, 0x8F, 0xFF, 0xE7, 0xDB, 0xDB, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x3F, 0xFF, 0xCB, 0x00, 0xCB, 0xFF, 0xA1, 0x00, 0xFF, 0xFF, 
    0x1C, 0x00, 0xFF, 0xFF, 0x00, 0x70, 0xFF, 0xFF, 0x00, 0xF7, 0xFF, 0xFF, 0x00, 0xFF, 0x77, 0xFF, 0x15, 0xFF, 0x00, 0xFF, 
    0x9A, 0xFF, 0x00, 0xFF, 0xFF, 0xD2, 0x00, 0xFF, 0xFF, 0x46, 0x00, 0xFF, 0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xC3, 0xC3, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x46, 0x00, 0x46, 0xFF, 0xD2, 0x00, 0xD2, 0xFF, 
    0xA1, 0x00, 0xFF, 0xFF, 0x1C, 0x00, 0xFF, 0xFF, 0x00, 0x70, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x77, 0xFF, 
    0x15, 0xFF, 0x00, 0xFF, 0xA1, 0xFF, 0x00, 0xFF, 0xFF, 0xD2, 0x00, 0xFF, 0xFF, 0x46, 0x00, 0xFF, 0xFF, 0x3F, 0x3F, 0xFF, 
    0xFF, 0xC3, 0xC3, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x3F, 0xFF, 
    0xCB, 0x00, 0xCB, 0xFF, 0xA1, 0x00, 0xFF, 0xFF, 0x15, 0x00, 0xFF, 0xFF, 0x00, 0x70, 0xFF, 0xFF, 0x00, 0xF7, 0xFF, 0xFF, 
    0x00, 0xFF, 0x77, 0xFF, 0x15, 0xFF, 0x00, 0xFF, 0xA1, 0xFF, 0x00, 0xFF, 0xFF, 0xD2, 0x00, 0xFF, 0xFF, 0x46, 0x00, 0xFF, 
    0xFF, 0x3F, 0x3F, 0xFF, 0xFF, 0xC3, 0xC3, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 
    0x46, 0x00, 0x46, 0xFF, 0xCB, 0x00, 0xCB, 0xFF, 0xA1, 0x00, 0xFF, 0xFF, 0x15, 0x00, 0xFF, 0xFF, 0x00, 0x70, 0xFF, 0xFF, 
    0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x77, 0xFF, 0x15, 0xFF, 0x00, 0xFF, 0x9A, 0xFF, 0x00, 0xFF, 0xFF, 0xD2, 0x00, 0xFF, 
    0xFF, 0x46, 0x00, 0xFF, 0xFF, 0x46, 0x46, 0xFF, 0xFF, 0xC3, 0xC3, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0xA0, 0xA0, 0xA0, 0xFF, 
    0x00, 0x00, 0x00, 0xFF, 0x46, 0x00, 0x46, 0xFF, 0xCB, 0x00, 0xCB, 0xFF, 0xA1, 0x00, 0xFF, 0xFF, 0x15, 0x00, 0xFF, 0xFF, 
    0x00, 0x70, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x77, 0xFF, 0x15, 0xFF, 0x00, 0xFF, 0xA1, 0xFF, 0x00, 0xFF, 
    0xFF, 0xD2, 0x00, 0xFF, 0xFF, 0x46, 0x00, 0xFF, 0xFF, 0x46, 0x46, 0xFF, 0xFF, 0xC3, 0xC3, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 0x40, 0x40, 0x40, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 
};

static const ximage image_saturate_16x16 =
{
    &saturate_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
