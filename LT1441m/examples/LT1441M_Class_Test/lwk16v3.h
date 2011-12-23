

/*
 *
 * LWK16v3
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : lwk16v3.h
 * Date                : 03.03.2010
 * Font size in bytes  : 9654
 * Font width          : 0
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef LWK16V3_H
#define LWK16V3_H

#define LWK16V3_WIDTH 0
#define LWK16V3_HEIGHT 16

static uint8_t LWK16v3[] PROGMEM = {
    0x25, 0xB6, // size
    0x00, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x03, 0x02, 0x05, 0x09, 0x08, 0x0B, 0x09, 0x02, 0x04, 0x04, 
    0x06, 0x06, 0x02, 0x05, 0x02, 0x06, 0x06, 0x06, 0x07, 0x06, 
    0x07, 0x06, 0x06, 0x07, 0x06, 0x06, 0x02, 0x03, 0x04, 0x05, 
    0x04, 0x07, 0x0C, 0x08, 0x07, 0x08, 0x07, 0x07, 0x06, 0x09, 
    0x08, 0x06, 0x08, 0x07, 0x06, 0x0A, 0x09, 0x0A, 0x05, 0x0B, 
    0x06, 0x08, 0x08, 0x08, 0x09, 0x0D, 0x09, 0x08, 0x08, 0x04, 
    0x06, 0x04, 0x06, 0x08, 0x03, 0x06, 0x06, 0x06, 0x07, 0x06, 
    0x06, 0x06, 0x06, 0x02, 0x04, 0x06, 0x02, 0x08, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x05, 0x06, 0x06, 0x06, 0x08, 0x07, 0x07, 
    0x06, 0x05, 0x02, 0x05, 0x07, 0x05, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //32
    0xFC, 0xFC, 0x0D, 0x0D, // 33
    0x3C, 0x3C, 0x00, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x30, 0xF0, 0xFC, 0x3C, 0xF0, 0xFC, 0x3C, 0x30, 0x03, 0x0F, 0x0F, 0x03, 0x0F, 0x0F, 0x03, 0x03, 0x03, // 35
    0x70, 0xF8, 0xCC, 0xFF, 0xFF, 0xCC, 0xCC, 0x80, 0x0C, 0x0C, 0x0C, 0x3F, 0x3F, 0x0C, 0x07, 0x07, // 36
    0x38, 0x7C, 0x6C, 0x7C, 0xF8, 0xF0, 0x3C, 0x8C, 0x80, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x0F, 0x03, 0x00, 0x07, 0x0F, 0x0D, 0x0F, 0x07, // 37
    0x00, 0xC0, 0xF8, 0x7C, 0xEC, 0xBC, 0x18, 0x80, 0x80, 0x07, 0x0F, 0x0C, 0x0C, 0x0D, 0x0F, 0x07, 0x0F, 0x09, // 38
    0x3C, 0x3C, 0x00, 0x00, // 39
    0xC0, 0xF0, 0x3C, 0x0C, 0x1F, 0x7F, 0xE0, 0xC0, // 40
    0x0C, 0x3C, 0xF0, 0xC0, 0xC0, 0xE0, 0x7F, 0x1F, // 41
    0x48, 0x78, 0x3C, 0x3C, 0x78, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x80, 0x80, 0xE0, 0xE0, 0x80, 0x80, 0x01, 0x01, 0x07, 0x07, 0x01, 0x01, // 43
    0x00, 0x00, 0x30, 0x18, // 44
    0x80, 0x80, 0x80, 0x80, 0x80, 0x01, 0x01, 0x01, 0x01, 0x01, // 45
    0x00, 0x00, 0x0C, 0x0C, // 46
    0x00, 0x00, 0x80, 0xE0, 0x78, 0x0C, 0x18, 0x1E, 0x03, 0x00, 0x00, 0x00, // 47
    0xF0, 0xF8, 0x0C, 0x0C, 0xFC, 0xF0, 0x03, 0x0F, 0x0C, 0x0C, 0x07, 0x03, // 48
    0x18, 0x18, 0xFC, 0xFC, 0x00, 0x00, 0x0C, 0x0C, 0x0F, 0x0F, 0x0C, 0x0C, // 49
    0x18, 0x18, 0x8C, 0xCC, 0xCC, 0x7C, 0x38, 0x0E, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, // 50
    0x18, 0xDC, 0xCC, 0xCC, 0xFC, 0xB8, 0x06, 0x0E, 0x0C, 0x0C, 0x0F, 0x07, // 51
    0x80, 0xC0, 0xA0, 0x98, 0xFC, 0xFC, 0x80, 0x01, 0x01, 0x01, 0x01, 0x0F, 0x0F, 0x01, // 52
    0x7C, 0x7C, 0x6C, 0x6C, 0xEC, 0xCC, 0x06, 0x0C, 0x0C, 0x0C, 0x07, 0x03, // 53
    0xE0, 0xF0, 0xF8, 0xDC, 0xCC, 0x80, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, // 54
    0x0C, 0x0C, 0x0C, 0xCC, 0x6C, 0x1C, 0x0C, 0x00, 0x0C, 0x0F, 0x03, 0x00, 0x00, 0x00, // 55
    0x38, 0xFC, 0xCC, 0xCC, 0xFC, 0x38, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, // 56
    0xF0, 0xFC, 0x8C, 0x8C, 0xFC, 0xF8, 0x00, 0x0D, 0x0D, 0x07, 0x03, 0x00, // 57
    0x60, 0x60, 0x06, 0x06, // 58
    0x00, 0x60, 0x60, 0x18, 0x1C, 0x0C, // 59
    0x00, 0x80, 0xC0, 0x60, 0x01, 0x03, 0x06, 0x04, // 60
    0x60, 0x60, 0x60, 0x60, 0x60, 0x06, 0x06, 0x06, 0x06, 0x06, // 61
    0x60, 0xC0, 0x80, 0x80, 0x04, 0x06, 0x03, 0x01, // 62
    0x18, 0x1C, 0x8C, 0x8C, 0xDC, 0x78, 0x30, 0x00, 0x00, 0x0D, 0x0D, 0x00, 0x00, 0x00, // 63
    0xE0, 0xF0, 0x38, 0xDC, 0xCC, 0xAC, 0xEC, 0xCC, 0x8C, 0x98, 0xF8, 0xF0, 0x03, 0x07, 0x0E, 0x1C, 0x19, 0x19, 0x19, 0x1D, 0x0D, 0x01, 0x01, 0x00, // 64
    0x00, 0x00, 0xC0, 0xF0, 0xB8, 0xFC, 0xE0, 0x00, 0x0C, 0x0F, 0x03, 0x01, 0x01, 0x01, 0x0F, 0x0C, // 65
    0xFC, 0xFC, 0xCC, 0xCC, 0xF8, 0xB8, 0x00, 0x0F, 0x0F, 0x0C, 0x0C, 0x0E, 0x07, 0x03, // 66
    0xC0, 0xE0, 0x78, 0x18, 0x0C, 0x0C, 0x1C, 0x1C, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x06, 0x06, // 67
    0xFC, 0xFC, 0x08, 0x18, 0x30, 0xE0, 0xC0, 0x07, 0x0F, 0x0C, 0x0C, 0x0E, 0x07, 0x03, // 68
    0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, // 69
    0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, // 70
    0xC0, 0xF0, 0x38, 0x1C, 0x8C, 0x8C, 0x9C, 0x98, 0x80, 0x07, 0x0F, 0x0C, 0x0D, 0x0D, 0x0D, 0x07, 0x07, 0x03, // 71
    0xFC, 0xFC, 0xC0, 0xC0, 0xC0, 0xC0, 0xFC, 0xFC, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, // 72
    0x0C, 0x0C, 0xFC, 0xFC, 0x0C, 0x0C, 0x0C, 0x0C, 0x0F, 0x0F, 0x0C, 0x0C, // 73
    0x00, 0x0C, 0x0C, 0x0C, 0xFC, 0xFC, 0x0C, 0x0C, 0x06, 0x0E, 0x18, 0x18, 0x1F, 0x0F, 0x00, 0x00, // 74
    0xFC, 0xFC, 0xE0, 0x70, 0x38, 0x1C, 0x0C, 0x0F, 0x0F, 0x01, 0x03, 0x06, 0x0E, 0x0C, // 75
    0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, // 76
    0x00, 0xE0, 0xFC, 0xFC, 0xE0, 0x00, 0xE0, 0x7C, 0xFC, 0x80, 0x0E, 0x0F, 0x01, 0x01, 0x0F, 0x0F, 0x03, 0x00, 0x0F, 0x0F, // 77
    0xFC, 0xFC, 0x30, 0x60, 0x80, 0x00, 0x00, 0xFC, 0xFC, 0x0F, 0x0F, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0F, 0x0F, // 78
    0xC0, 0xF0, 0x38, 0x1C, 0x0C, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x01, // 79
    0xFC, 0xFC, 0xCC, 0xFC, 0x78, 0x0F, 0x0F, 0x00, 0x00, 0x00, // 80
    0xE0, 0xF0, 0x38, 0x18, 0x0C, 0x0C, 0x0C, 0x0C, 0x38, 0xF8, 0xE0, 0x03, 0x07, 0x0E, 0x1C, 0x18, 0x1E, 0x1E, 0x18, 0x3C, 0x77, 0x63, // 81
    0xFC, 0xFC, 0x8C, 0x9C, 0xF8, 0x70, 0x0F, 0x0F, 0x01, 0x03, 0x06, 0x0C, // 82
    0x00, 0x70, 0xF8, 0xCC, 0xCC, 0xCC, 0xC8, 0x80, 0x06, 0x0E, 0x0C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, // 83
    0x0C, 0x0C, 0x0C, 0xFC, 0xFC, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, // 84
    0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x03, 0x07, 0x0E, 0x0C, 0x0C, 0x07, 0x03, 0x00, // 85
    0x1C, 0xFC, 0xF0, 0x00, 0x00, 0xE0, 0xF8, 0x3C, 0x0C, 0x00, 0x00, 0x03, 0x0F, 0x0F, 0x07, 0x00, 0x00, 0x00, // 86
    0x1C, 0xFC, 0xE0, 0x80, 0xE0, 0x7C, 0xFC, 0xE0, 0x00, 0xC0, 0xF0, 0x3C, 0x0C, 0x00, 0x01, 0x0F, 0x0F, 0x03, 0x00, 0x01, 0x0F, 0x0E, 0x07, 0x00, 0x00, 0x00, // 87
    0x0C, 0x1C, 0x38, 0xF0, 0xE0, 0xF0, 0x38, 0x1C, 0x0C, 0x0C, 0x0E, 0x07, 0x03, 0x01, 0x01, 0x07, 0x0E, 0x0C, // 88
    0x0C, 0x3C, 0x78, 0xC0, 0xC0, 0xF0, 0x3C, 0x0C, 0x00, 0x00, 0x0C, 0x0F, 0x07, 0x01, 0x00, 0x00, // 89
    0x0C, 0x0C, 0x8C, 0xCC, 0x6C, 0x3C, 0x0C, 0x0C, 0x0C, 0x0E, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, // 90
    0xFC, 0xFC, 0x0C, 0x0C, 0xFF, 0xFF, 0xC0, 0xC0, // 91
    0x0C, 0x3C, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1E, 0x18, // 92
    0x0C, 0x0C, 0xFC, 0xFC, 0xC0, 0xC0, 0xFF, 0xFF, // 93
    0x08, 0x0C, 0x06, 0x06, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, // 95
    0x02, 0x0E, 0x0C, 0x00, 0x00, 0x00, // 96
    0x80, 0xC0, 0xE0, 0x60, 0xE0, 0xC0, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x0F, // 97
    0xFC, 0xFC, 0x60, 0x60, 0xE0, 0xC0, 0x0F, 0x0F, 0x0C, 0x0C, 0x07, 0x03, // 98
    0x80, 0xC0, 0xE0, 0x60, 0x60, 0xC0, 0x07, 0x0F, 0x0C, 0x0C, 0x0C, 0x06, // 99
    0x80, 0xC0, 0x60, 0x60, 0x60, 0xFC, 0xFC, 0x07, 0x07, 0x0C, 0x0C, 0x0C, 0x0F, 0x0F, // 100
    0x80, 0xC0, 0x60, 0x60, 0xE0, 0xC0, 0x07, 0x0F, 0x0E, 0x0F, 0x0D, 0x05, // 101
    0x60, 0x60, 0xF8, 0xFC, 0x6C, 0x6C, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, // 102
    0x80, 0xC0, 0x60, 0x60, 0xE0, 0xC0, 0xC7, 0xCF, 0xCC, 0xEE, 0x7F, 0x3F, // 103
    0xFC, 0xFC, 0xE0, 0x60, 0xE0, 0xC0, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, // 104
    0xEC, 0xEC, 0x0F, 0x0F, // 105
    0x00, 0x00, 0xEC, 0xEC, 0xF0, 0xC0, 0xFF, 0x7F, // 106
    0xFC, 0xFC, 0x80, 0xC0, 0xE0, 0x60, 0x0F, 0x0F, 0x01, 0x03, 0x0E, 0x0C, // 107
    0xFC, 0xFC, 0x0F, 0x0F, // 108
    0xE0, 0xE0, 0xC0, 0xE0, 0xE0, 0x60, 0xE0, 0xE0, 0x0F, 0x0F, 0x00, 0x0F, 0x0F, 0x00, 0x0F, 0x0F, // 109
    0xE0, 0xE0, 0xC0, 0x60, 0xE0, 0xC0, 0x0F, 0x0F, 0x00, 0x00, 0x0F, 0x0F, // 110
    0x80, 0xC0, 0x60, 0x60, 0xE0, 0xC0, 0x07, 0x0F, 0x0C, 0x0C, 0x07, 0x03, // 111
    0xE0, 0xE0, 0x60, 0x60, 0xE0, 0xC0, 0xFF, 0xFF, 0x0C, 0x0C, 0x0F, 0x07, // 112
    0x80, 0xC0, 0xE0, 0x60, 0xE0, 0xE0, 0x07, 0x0F, 0x0C, 0x0C, 0xFF, 0xFF, // 113
    0xE0, 0xE0, 0xE0, 0x60, 0xE0, 0xE0, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, // 114
    0xC0, 0xE0, 0x60, 0x60, 0x60, 0x0C, 0x0D, 0x0D, 0x0F, 0x06, // 115
    0x60, 0x60, 0xF8, 0xF8, 0x60, 0x60, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, // 116
    0xE0, 0xE0, 0x00, 0x00, 0xE0, 0xE0, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x0F, // 117
    0x60, 0xE0, 0x80, 0x80, 0xE0, 0x60, 0x00, 0x03, 0x0F, 0x0F, 0x03, 0x00, // 118
    0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0x00, 0xE0, 0xE0, 0x03, 0x0F, 0x07, 0x01, 0x07, 0x0E, 0x07, 0x00, // 119
    0x60, 0xE0, 0xC0, 0x80, 0xC0, 0xE0, 0x60, 0x0C, 0x0E, 0x07, 0x03, 0x07, 0x0E, 0x0C, // 120
    0x60, 0xE0, 0x80, 0x00, 0xC0, 0xE0, 0x60, 0x00, 0xE1, 0xFF, 0x3E, 0x0F, 0x01, 0x00, // 121
    0x60, 0x60, 0x60, 0xE0, 0xE0, 0x60, 0x0C, 0x0E, 0x0F, 0x0D, 0x0C, 0x0C, // 122
    0x00, 0xF8, 0xFC, 0x0C, 0x0C, 0x03, 0x3F, 0xFE, 0xC0, 0xC0, // 123
    0xFC, 0xFC, 0xFF, 0xFF, // 124
    0x0C, 0x0C, 0xFC, 0xF8, 0x00, 0xC0, 0xC0, 0xFE, 0x3F, 0x03, // 125
    0x80, 0xC0, 0x40, 0xC0, 0x00, 0x80, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, // 126
    0xFC, 0x04, 0x04, 0x04, 0xFC, 0x0F, 0x08, 0x08, 0x08, 0x0F // 127
    
};

#endif
