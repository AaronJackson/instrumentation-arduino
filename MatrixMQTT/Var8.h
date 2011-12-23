

/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Var8
 * Date                : 09.07.2011
 * Font size in bytes  : 6326
 * Font width          : 10
 * Font height         : 8
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

#ifndef VAR8_H
#define VAR8_H

#define VAR8_WIDTH 10
#define VAR8_HEIGHT 8

static uint8_t Var8[] PROGMEM = {
    0x18, 0xB6, // size
    0x0A, // width
    0x08, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x02, 0x02, 0x05, 0x0A, 0x0A, 0x0A, 0x0A, 0x02, 0x04, 0x04, 
    0x05, 0x0A, 0x02, 0x0A, 0x02, 0x08, 0x0A, 0x04, 0x0A, 0x0A, 
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x02, 0x02, 0x05, 0x0A, 
    0x05, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 0x02, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x04, 
    0x08, 0x04, 0x05, 0x0A, 0x03, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 0x0A, 0x0A, 0x02, 0x0A, 0x0A, 0x02, 0x0A, 0x0A, 0x0A, 
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 0x04, 0x02, 0x04, 0x04, 0x00, 
    
    // font data
    0x00, 0x00, // 32
    0xDF, 0xDF, // 33
    0x0F, 0x0F, 0x00, 0x0F, 0x0F, // 34
    0x66, 0x66, 0xFF, 0xFF, 0x66, 0x66, 0xFF, 0xFF, 0x66, 0x66, // 35
    0xCE, 0xDF, 0xDB, 0xDB, 0xFF, 0xFF, 0xDB, 0xDB, 0xFB, 0x73, // 36
    0x07, 0xC7, 0xE7, 0x70, 0x38, 0x1C, 0x0E, 0xE7, 0xE3, 0xE0, // 37
    0x66, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x76, 0xF8, 0xD8, // 38
    0x0F, 0x0F, // 39
    0x3C, 0x7E, 0xE7, 0xC3, // 40
    0xC3, 0xE7, 0x7E, 0x3C, // 41
    0x1B, 0x1F, 0x0E, 0x1F, 0x1B, // 42
    0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, // 43
    0xF0, 0xF0, // 44
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, // 45
    0xC0, 0xC0, // 46
    0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, // 47
    0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, // 48
    0x03, 0x03, 0xFF, 0xFE, // 49
    0xF3, 0xFB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDF, 0xCE, // 50
    0xC3, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7E, // 51
    0x1F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0xFF, 0xFF, 0x30, 0x30, // 52
    0xDF, 0xDF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFB, 0x73, // 53
    0x7E, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFB, 0x70, // 54
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFE, // 55
    0x7E, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7E, // 56
    0x0E, 0xDF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7E, // 57
    0x66, 0x66, // 58
    0xE6, 0xE6, // 59
    0x18, 0x3C, 0x7E, 0xE7, 0xC3, // 60
    0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, // 61
    0xC3, 0xE7, 0x7E, 0x3C, 0x18, // 62
    0x06, 0x07, 0x03, 0x03, 0xDB, 0xDB, 0x1B, 0x1B, 0x1F, 0x0E, // 63
    0x7E, 0xFF, 0xC3, 0xFB, 0xFB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7E, // 64
    0xFE, 0xFF, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0xFF, 0xFE, // 65
    0xFF, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7E, // 66
    0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, // 67
    0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, // 68
    0x7E, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, // 69
    0xFE, 0xFF, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, // 70
    0x7E, 0xFF, 0xC3, 0xC3, 0xDB, 0xDB, 0xDB, 0xDB, 0xFB, 0xFB, // 71
    0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, // 72
    0xFF, 0xFF, // 73
    0x70, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0x7F, // 74
    0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x7E, 0xE7, 0xC3, // 75
    0x7F, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 76
    0xFF, 0xFF, 0x0E, 0x1C, 0x38, 0x38, 0x1C, 0x0E, 0xFF, 0xFF, // 77
    0xFF, 0xFF, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0xFF, 0xFF, // 78
    0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, // 79
    0xFF, 0xFF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x1E, // 80
    0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0xFE, 0xC0, // 81
    0xFF, 0xFF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x73, 0xFF, 0xCE, // 82
    0xCE, 0xDF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFB, 0x73, // 83
    0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, // 84
    0x7F, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0x7F, // 85
    0x0F, 0x1F, 0x38, 0x70, 0xE0, 0xE0, 0x70, 0x38, 0x1F, 0x0F, // 86
    0xFF, 0xFF, 0x70, 0x38, 0x1C, 0x1C, 0x38, 0x70, 0xFF, 0xFF, // 87
    0xC3, 0xE7, 0x7E, 0x3C, 0x18, 0x18, 0x3C, 0x7E, 0xE7, 0xC3, // 88
    0x0F, 0xDF, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xFF, 0x7F, // 89
    0xF3, 0xFB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDF, 0xCF, // 90
    0xFF, 0xFF, 0xC3, 0xC3, // 91
    0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0xC0, // 92
    0xC3, 0xC3, 0xFF, 0xFF, // 93
    0x06, 0x07, 0x03, 0x07, 0x06, // 94
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 95
    0x03, 0x07, 0x06, // 96
    0x70, 0xFB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0xFE, // 97
    0xFF, 0xFF, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xFC, 0x78, // 98
    0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, // 99
    0x78, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xFF, 0xFF, // 100
    0x7E, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDF, 0x1E, // 101
    0x18, 0x18, 0xFE, 0xFF, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, // 102
    0x0E, 0xDF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7F, // 103
    0xFF, 0xFF, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC, 0xF8, // 104
    0xFB, 0xFB, // 105
    0x70, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFB, 0x7B, // 106
    0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0xF8, 0xF8, 0x1F, 0x0F, // 107
    0xFF, 0xFF, // 108
    0xFF, 0xFF, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0xFF, 0xFE, // 109
    0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFE, // 110
    0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, // 111
    0xFF, 0xFF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x1E, // 112
    0x1E, 0x3F, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xFF, 0xFF, // 113
    0xFE, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, // 114
    0xCE, 0xDF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFB, 0x73, // 115
    0x0C, 0x0C, 0x7F, 0xFF, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, // 116
    0x7F, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0x7F, // 117
    0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0x7F, // 118
    0xFF, 0xFF, 0xC0, 0xC0, 0xFF, 0xFF, 0xC0, 0xC0, 0xFF, 0x7F, // 119
    0xC3, 0xE7, 0x7E, 0x3C, 0x18, 0x18, 0x3C, 0x7E, 0xE7, 0xC3, // 120
    0x0F, 0xDF, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xD8, 0xFF, 0x7F, // 121
    0xF3, 0xFB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDF, 0xCF, // 122
    0x18, 0x7E, 0xFF, 0xC3, // 123
    0xFF, 0xFF, // 124
    0xC3, 0xFF, 0x7E, 0x18, // 125
    0x03, 0x03, 0x03, 0x03, // 126
    
};

#endif
