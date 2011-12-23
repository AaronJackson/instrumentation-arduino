

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
 * File Name           : lwk_script
 * Date                : 02.03.2010
 * Font size in bytes  : 18162
 * Font width          : 0
 * Font height         : 21
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

#ifndef NEW_FONT_H
#define NEW_FONT_H

#define NEW_FONT_WIDTH 0
#define NEW_FONT_HEIGHT 21

static uint8_t lwk_script[] PROGMEM = {
    0x46, 0xF2, // size
    0x00, // width
    0x15, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x07, 0x05, 0x0C, 0x09, 0x0C, 0x0A, 0x02, 0x05, 0x06, 
    0x06, 0x0C, 0x02, 0x06, 0x02, 0x06, 0x0A, 0x05, 0x0A, 0x0B, 
    0x09, 0x09, 0x09, 0x08, 0x09, 0x08, 0x04, 0x05, 0x0C, 0x0C, 
    0x0C, 0x06, 0x15, 0x0E, 0x0B, 0x0C, 0x0E, 0x0D, 0x0C, 0x0B, 
    0x0E, 0x09, 0x08, 0x0E, 0x0D, 0x12, 0x0D, 0x0B, 0x0E, 0x0E, 
    0x0D, 0x0E, 0x0C, 0x0E, 0x09, 0x0F, 0x0C, 0x0C, 0x0B, 0x06, 
    0x06, 0x08, 0x09, 0x0B, 0x03, 0x09, 0x07, 0x06, 0x09, 0x06, 
    0x06, 0x08, 0x08, 0x05, 0x06, 0x08, 0x05, 0x0C, 0x08, 0x07, 
    0x09, 0x08, 0x06, 0x07, 0x06, 0x08, 0x07, 0x0B, 0x06, 0x08, 
    0x07, 0x06, 0x02, 0x06, 0x0C, 0x09, 
    
    // font data
    0x00, 0x00, 0x80, 0xE0, 0x70, 0x3C, 0x0E, 0x70, 0x72, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 33
    0x7C, 0x7C, 0x00, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x40, 0x40, 0x40, 0xF0, 0x7E, 0x42, 0x40, 0x40, 0xC0, 0xFE, 0x4E, 0x40, 0x04, 0x64, 0x7E, 0x07, 0x04, 0x04, 0x04, 0x7C, 0x0F, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0x00, 0xE0, 0xB0, 0xD0, 0xB8, 0xDC, 0xB8, 0x9C, 0x3A, 0x1C, 0x78, 0x1E, 0x79, 0x1C, 0x1B, 0x0D, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0x00, 0x70, 0x98, 0x8C, 0xC4, 0x64, 0x98, 0xC0, 0x60, 0x20, 0x10, 0x08, 0xE0, 0x70, 0x38, 0x1C, 0x06, 0x03, 0x11, 0x7C, 0x46, 0x32, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x80, 0x80, 0xF8, 0xFC, 0xA6, 0x33, 0x19, 0x0F, 0x1E, 0x3F, 0x73, 0x71, 0x78, 0x3B, 0x1F, 0x3E, 0x3E, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, // 39
    0x80, 0xE0, 0x78, 0x1C, 0x06, 0x1F, 0x3F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 40
    0x00, 0x00, 0x00, 0x82, 0xFE, 0x7C, 0x40, 0x70, 0x3C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 41
    0x34, 0x1C, 0x7F, 0x58, 0x36, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x80, 0x80, 0x80, 0x80, 0x80, 0xFC, 0xFC, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01, 0x01, 0x01, 0x01, 0x01, 0x3F, 0x3F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0xC0, 0x60, 0x00, 0x00, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x60, 0x30, 0x00, 0x00, // 46
    0x00, 0x00, 0x80, 0xF0, 0x3F, 0x03, 0xC0, 0xF8, 0x1F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0x00, 0x80, 0xE0, 0xF0, 0x38, 0x18, 0x1C, 0x0C, 0x8C, 0xF8, 0x1E, 0x7F, 0x63, 0x60, 0x70, 0x38, 0x1C, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x00, 0x10, 0xC8, 0xF4, 0x7C, 0x38, 0x7F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x00, 0x00, 0x70, 0x78, 0x4C, 0x8C, 0x8E, 0xC6, 0xE6, 0x66, 0x38, 0x6C, 0x6E, 0x77, 0x73, 0x73, 0x31, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x00, 0x00, 0x00, 0xB8, 0xB8, 0xAC, 0x8C, 0xCC, 0x4C, 0x4C, 0x6C, 0x70, 0x60, 0x60, 0x61, 0x61, 0x31, 0x31, 0x1A, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0xC0, 0x40, 0x20, 0x10, 0x10, 0xC8, 0x68, 0x0E, 0x1F, 0x0C, 0x0C, 0x7C, 0x3E, 0x0F, 0x0D, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x00, 0x00, 0xC0, 0xB0, 0xD8, 0xCC, 0xCC, 0xCC, 0x8C, 0x70, 0x70, 0x70, 0x61, 0x30, 0x30, 0x18, 0x0C, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0x00, 0x80, 0xC0, 0xE0, 0x70, 0xB0, 0x98, 0x8C, 0x0C, 0x1E, 0x3F, 0x63, 0x63, 0x71, 0x38, 0x3C, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x00, 0x18, 0x0C, 0x0C, 0x8C, 0xCC, 0xEC, 0x7C, 0x70, 0x78, 0x7E, 0x4F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0x00, 0x00, 0x78, 0xFC, 0xCC, 0x86, 0x46, 0x26, 0x16, 0x30, 0x48, 0x44, 0x43, 0x61, 0x3F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0xE0, 0xF0, 0x78, 0x3C, 0x1C, 0x0E, 0x9E, 0xEE, 0x00, 0x03, 0x62, 0x32, 0x19, 0x05, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0x00, 0x00, 0x00, 0x00, 0x60, 0x20, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, // 58
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x24, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // 59
    0x00, 0x80, 0x80, 0xC0, 0xC0, 0x40, 0x60, 0x20, 0x30, 0x30, 0x10, 0x18, 0x01, 0x03, 0x02, 0x06, 0x06, 0x04, 0x0C, 0x0C, 0x18, 0x18, 0x10, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x18, 0x10, 0x30, 0x30, 0x60, 0x60, 0x40, 0xC0, 0x80, 0x80, 0x80, 0x00, 0x30, 0x10, 0x18, 0x18, 0x0C, 0x0C, 0x04, 0x06, 0x02, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x00, 0x04, 0x0E, 0x83, 0xC3, 0x63, 0x20, 0x70, 0x0E, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0xE0, 0xF0, 0x38, 0x1C, 0x8E, 0xC6, 0x67, 0x33, 0x33, 0x33, 0x33, 0x63, 0xC3, 0xF6, 0x36, 0x0C, 0x3C, 0xF0, 0xE0, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x1F, 0x7F, 0xE1, 0xC0, 0xC0, 0xC0, 0x60, 0x20, 0x78, 0xFF, 0xC7, 0xE0, 0x60, 0x38, 0x1F, 0x07, 0x00, 0x00, 0x08, 0x18, 0x38, 0x30, 0x60, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x60, 0x60, 0x30, 0x30, 0x18, 0x08, 0x08, // 64
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x80, 0x40, 0x20, 0x10, 0xC8, 0xE4, 0x3C, 0x70, 0x10, 0x1B, 0x0F, 0x07, 0x03, 0x03, 0x03, 0x73, 0x7F, 0x27, 0x13, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0x30, 0xB8, 0x9C, 0xAC, 0xCC, 0xE6, 0xA6, 0x96, 0x56, 0x46, 0x66, 0x38, 0x7D, 0x67, 0x61, 0x61, 0x62, 0x62, 0x32, 0x32, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x84, 0xC2, 0xF2, 0xF0, 0xFC, 0xFF, 0x87, 0x01, 0x00, 0x0C, 0x8E, 0x87, 0x43, 0x41, 0x20, 0x00, 0x08, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, // 67
    0x78, 0x38, 0x5C, 0x1C, 0x9C, 0x6E, 0x3E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x1C, 0xF0, 0x70, 0x78, 0x66, 0x63, 0x60, 0x20, 0x30, 0x30, 0x10, 0x18, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0x00, 0x00, 0x70, 0x78, 0x9C, 0x9E, 0x8E, 0x8E, 0x87, 0x87, 0x97, 0x8F, 0x07, 0x70, 0xF8, 0xCC, 0xC4, 0xC6, 0xC2, 0xC2, 0x61, 0x61, 0x71, 0x31, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0x60, 0x78, 0x78, 0x5C, 0x1C, 0x1C, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0xCE, 0x00, 0x00, 0x00, 0x88, 0x88, 0x4C, 0x6C, 0x3C, 0x1C, 0x0E, 0x0F, 0x04, 0x00, 0x18, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x3C, 0x1C, 0x0E, 0x9E, 0xD7, 0x1E, 0x3F, 0x23, 0x21, 0x10, 0x98, 0xCC, 0xF6, 0x5F, 0x27, 0x23, 0x00, 0x00, 0x60, 0x70, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0x70, 0x38, 0x58, 0x1C, 0x0C, 0x0C, 0x0E, 0x86, 0x46, 0x66, 0x3E, 0x0E, 0xC0, 0x60, 0x00, 0x4C, 0x3C, 0x1C, 0x0E, 0x0E, 0x07, 0x66, 0x7E, 0x0E, 0x06, 0x07, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0x40, 0xF0, 0xB8, 0x18, 0x0C, 0x0E, 0x86, 0xE6, 0x1E, 0x00, 0x00, 0x40, 0x70, 0x38, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 73
    0x00, 0x00, 0xC0, 0xE0, 0x78, 0x1C, 0x0C, 0x06, 0x00, 0x1E, 0x0F, 0x85, 0xC4, 0x20, 0x18, 0x17, 0xE0, 0x78, 0x38, 0x08, 0x00, 0x00, 0x00, 0x00, // 74
    0x30, 0x3C, 0x1C, 0x1C, 0x0C, 0x8C, 0x8E, 0x66, 0x76, 0x2E, 0x20, 0x10, 0x10, 0x08, 0x00, 0x60, 0x30, 0x18, 0x0F, 0x07, 0x0E, 0x1C, 0x18, 0x38, 0x70, 0x60, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x10, 0xC8, 0xF4, 0x3E, 0x20, 0x30, 0x30, 0x30, 0x3C, 0x36, 0x71, 0x70, 0x60, 0x61, 0x61, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0x3C, 0x1C, 0x1C, 0x0C, 0x86, 0xE6, 0x9C, 0xC0, 0x20, 0x10, 0xC8, 0xEC, 0xBC, 0xCC, 0x60, 0xB0, 0xD8, 0x38, 0x00, 0x70, 0x78, 0x1E, 0x0F, 0x03, 0x71, 0x3C, 0x1E, 0x0F, 0x07, 0x03, 0x71, 0xFC, 0xC7, 0x41, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0x38, 0x1E, 0x1E, 0x0E, 0x8E, 0x67, 0x9F, 0xC7, 0x60, 0x30, 0xD0, 0xF8, 0x3C, 0x00, 0x70, 0x3C, 0x1A, 0x05, 0x02, 0x01, 0xF0, 0xFC, 0x47, 0x43, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0x7C, 0x3C, 0x1E, 0x1E, 0x16, 0xF8, 0x1F, 0x3F, 0x47, 0x41, 0x40, 0x20, 0x30, 0x18, 0x0C, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0x20, 0x38, 0x1C, 0x1C, 0x0C, 0x8E, 0x6E, 0x3E, 0x0E, 0x0E, 0x0E, 0x0E, 0x9C, 0xF8, 0x00, 0xE4, 0x7E, 0x0E, 0x0F, 0x0D, 0x0D, 0x0C, 0x0C, 0x06, 0x06, 0x03, 0x01, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0x00, 0x00, 0x00, 0xE0, 0xF0, 0xB0, 0xB8, 0x18, 0x18, 0x0C, 0x8C, 0xCC, 0xEC, 0x7C, 0x40, 0x70, 0x70, 0x70, 0x70, 0x78, 0x7C, 0xE4, 0xE6, 0xE3, 0xE1, 0xE1, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 81
    0x20, 0x38, 0x3C, 0x5C, 0x5C, 0x9E, 0xCE, 0x3E, 0x0E, 0x0E, 0x0E, 0x8E, 0x8E, 0xC0, 0x34, 0x1E, 0x0E, 0x1F, 0x1B, 0x3A, 0x3A, 0x73, 0xF1, 0xE1, 0xE1, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, // 82
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0x30, 0x38, 0x38, 0x1C, 0x1C, 0x5C, 0x5C, 0x3C, 0x1C, 0x60, 0xF0, 0xF0, 0xE0, 0xE1, 0xE1, 0xE3, 0xE3, 0x62, 0x72, 0x74, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x30, 0x3C, 0x5C, 0x5E, 0x1E, 0x0E, 0x0E, 0x0E, 0x0E, 0x8E, 0xCE, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0x7C, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0x70, 0x38, 0x3C, 0x1C, 0x9C, 0xCE, 0x6E, 0x3E, 0x0E, 0x80, 0xC0, 0xE0, 0xF0, 0x38, 0x00, 0x78, 0x7C, 0x37, 0x19, 0x08, 0x0C, 0x06, 0x73, 0x7D, 0x67, 0x61, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0xB0, 0xB8, 0x18, 0x9C, 0xCC, 0x7E, 0x1E, 0x0C, 0x80, 0x00, 0x78, 0xFE, 0xC7, 0x61, 0x10, 0x08, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x78, 0x38, 0x1C, 0x1C, 0x0C, 0x8C, 0xEC, 0x3C, 0x9C, 0xC0, 0xE0, 0xF0, 0x38, 0x10, 0x80, 0x00, 0x38, 0x7C, 0x37, 0x1B, 0x0D, 0x06, 0x7B, 0xFF, 0xCF, 0x73, 0x38, 0x1C, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x60, 0x70, 0x38, 0x1C, 0x1C, 0x0C, 0x0E, 0xFE, 0xFE, 0xFE, 0x20, 0x10, 0x00, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0xFF, 0xFF, 0xC0, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0xF0, 0x70, 0x38, 0x1C, 0x8C, 0x6E, 0x1E, 0x06, 0x80, 0x40, 0xF0, 0x30, 0x00, 0x70, 0x7C, 0x33, 0x19, 0x8C, 0xE6, 0xBB, 0xCF, 0x43, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, // 89
    0x80, 0xE0, 0xF0, 0x70, 0x78, 0x38, 0x38, 0x1C, 0x1C, 0x9C, 0xFC, 0x03, 0x41, 0x30, 0x18, 0x98, 0x8C, 0x4E, 0xCE, 0xFD, 0x30, 0x10, 0xC0, 0xE0, 0xB0, 0x58, 0x48, 0x20, 0x10, 0x08, 0x00, 0x00, 0x00, // 90
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0x38, 0x0E, 0x03, 0x01, 0x78, 0x70, 0x70, 0x30, 0x10, 0x00, // 91
    0x03, 0x1F, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0xFC, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 92
    0x00, 0x00, 0x00, 0x00, 0x08, 0x0C, 0x8E, 0xEE, 0x00, 0x00, 0xC0, 0x70, 0x18, 0x0E, 0x03, 0x00, 0x60, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 93
    0x00, 0xC0, 0xF0, 0x1C, 0x06, 0x1C, 0xF0, 0xC0, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 95
    0x06, 0x0E, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x38, 0x66, 0x26, 0x13, 0x7B, 0x7D, 0x67, 0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0x00, 0x00, 0xC0, 0x60, 0x90, 0x48, 0x24, 0x3C, 0x67, 0x62, 0x21, 0x3C, 0x1E, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x3C, 0x66, 0x67, 0x23, 0x27, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xE0, 0x38, 0x3C, 0x66, 0x33, 0x13, 0x09, 0x7D, 0x63, 0x20, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x3C, 0x7E, 0x6B, 0x65, 0x22, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0x00, 0x00, 0x00, 0x80, 0xE0, 0x38, 0x7C, 0x3C, 0x3E, 0xF3, 0x20, 0x10, 0x60, 0x20, 0x10, 0x08, 0x00, 0x00, // 102
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x38, 0x64, 0x62, 0xB3, 0xD9, 0x7D, 0x3E, 0x13, 0x60, 0x70, 0x38, 0x08, 0x00, 0x00, 0x00, 0x00, // 103
    0x00, 0x00, 0x00, 0x80, 0xE0, 0x70, 0x38, 0x0E, 0x78, 0x3E, 0x17, 0x0B, 0x74, 0x7A, 0x27, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0x00, 0x00, 0x00, 0x00, 0x60, 0x38, 0x7E, 0x67, 0x23, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // 105
    0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x02, 0x83, 0xE3, 0x59, 0x27, 0x70, 0x38, 0x08, 0x00, 0x00, 0x00, // 106
    0x00, 0x00, 0x80, 0xC0, 0x70, 0x38, 0x9C, 0x86, 0x78, 0x36, 0x3B, 0x75, 0x52, 0x49, 0x67, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0x00, 0x80, 0xE0, 0xB0, 0x68, 0x3E, 0x7F, 0x63, 0x21, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // 108
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x78, 0x7E, 0x17, 0x09, 0x74, 0x2F, 0x17, 0x0B, 0x64, 0x7A, 0x27, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3C, 0x3E, 0x17, 0x09, 0x76, 0x3B, 0x27, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x3C, 0x4E, 0x47, 0x43, 0x3D, 0x3F, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x20, 0x00, 0x00, 0xE4, 0x32, 0x3D, 0x67, 0x74, 0x6A, 0x27, 0x13, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x3C, 0x66, 0x62, 0xB3, 0xD9, 0x7D, 0xEE, 0x33, 0x00, 0xE0, 0xF0, 0x58, 0x20, 0x10, 0x08, 0x00, // 113
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x1A, 0x07, 0x73, 0x7F, 0x27, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x38, 0x74, 0x62, 0x71, 0x2F, 0x17, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0x00, 0xC0, 0xC0, 0xC0, 0xE0, 0xF0, 0x79, 0x7E, 0x23, 0x20, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x38, 0x66, 0x37, 0x1B, 0x69, 0x7C, 0x67, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x66, 0x63, 0x31, 0x1C, 0x16, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x66, 0x77, 0x33, 0x19, 0x7C, 0x67, 0x31, 0x1C, 0x1E, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x62, 0x31, 0x3F, 0x7F, 0x22, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x6E, 0x37, 0xD1, 0xA8, 0x5C, 0x26, 0x13, 0x00, 0x60, 0x38, 0x18, 0x08, 0x00, 0x00, 0x00, // 121
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x18, 0x17, 0xB3, 0xEB, 0x47, 0x23, 0x10, 0x50, 0x28, 0x18, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0xFC, 0xFE, 0x03, 0x03, 0x0C, 0x0E, 0xFB, 0xF1, 0x00, 0x00, 0x00, 0x00, 0x38, 0xF8, 0xC0, 0xC0, // 123
    0xFF, 0xFF, 0xFF, 0xFF, 0x78, 0x78, // 124
    0x03, 0x03, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xF1, 0xFB, 0x0E, 0x04, 0xC0, 0xC0, 0xF8, 0x78, 0x00, 0x00, // 125
    0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 127
    
};

#endif
