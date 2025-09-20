//
// Created by Jason Brad Carpenter on 4/27/25.
//

#ifndef arthur_16X16_FONT_HPP
#define arthur_16X16_FONT_HPP

#include "bn_sprite_font.h"
#include "bn_sprite_items_arthur16x16.h"
#include "bn_utf8_characters_map.h"

constexpr bn::utf8_character arthur_16x16_sprite_font_utf8_characters[] = {
    "Á", "É", "Í", "Ó", "Ú", "Ü", "Ñ", "á", "é", "í", "ó", "ú", "ü", "ñ", "¡", "¿"
};

constexpr s8 arthur_16x16_sprite_font_character_widths[] = {
    7,  // 32 (space)
    7,  // 33 !
    10, // 34 \"
    14, // 35 #
    13, // 36 $
    15, // 37 %
    16, // 38 &
    6,  // 39 \'
    7,  // 40 (
    7,  // 41 )
    11, // 42 *
    12, // 43 +
    5,  // 44 ,
    13, // 45 -
    5,  // 46 .
    8,  // 47 /
    15, // 48 0
    11, // 49 1
    15, // 50 2
    15, // 51 3
    15, // 52 4
    15, // 53 5
    15, // 54 6
    15, // 55 7
    15, // 56 8
    15, // 57 9
    5,  // 58 :
    5,  // 59 ;
    9,  // 60 <
    12, // 61 =
    9,  // 62 >
    15, // 63 ?
    16, // 64 @
    14, // 65 A
    15, // 66 B
    15, // 67 C
    15, // 68 D
    15, // 69 E
    15, // 70 F
    15, // 71 G
    15, // 72 H
    11, // 73 I
    15, // 74 J
    15, // 75 K
    15, // 76 L
    16, // 77 M
    15, // 78 N
    15, // 79 O
    15, // 80 P
    15, // 81 Q
    15, // 82 R
    15, // 83 S
    15, // 84 T
    15, // 85 U
    16, // 86 V
    15, // 87 W
    15, // 88 X
    15, // 89 Y
    15, // 90 Z
    8,  // 91 [
    15, // 92 [backspace]
    8,  // 93 ]
    7,  // 94 ^
    16, // 95 _
    5,  // 96 `
    15, // 97 a
    15, // 98 b
    13, // 99 c
    14, // 100 d
    14, // 101 e
    13, // 102 f
    15, // 103 g
    15, // 104 h
    8,  // 105 i
    10, // 106 j
    15, // 107 k
    8,  // 108 l
    16, // 109 m
    15, // 110 n
    14, // 111 o
    15, // 112 p
    14, // 113 q
    15, // 114 r
    13, // 115 s
    15, // 116 t
    13, // 117 u
    14, // 118 v
    16, // 119 w
    14, // 120 x
    13, // 121 y
    14, // 122 z
    10, // 123 {
    4,  // 124 |
    10, // 125 }
    14, // 126 ~
    14, // Á
    15, // É
    11, // Í
    15, // Ó
    15, // Ú
    15, // Ü
    15, // Ñ
    15, // á
    14, // é
    8,  // í
    14, // ó
    13, // ú
    13, // ü
    15, // ñ
    7,  // ¡
    15, // ¿
};

constexpr bn::span<const bn::utf8_character> arthur_16x16_sprite_font_utf8_characters_span(
    arthur_16x16_sprite_font_utf8_characters
);

constexpr auto arthur_16x16_sprite_font_utf8_characters_map =
    bn::utf8_characters_map<arthur_16x16_sprite_font_utf8_characters_span>();

constexpr bn::sprite_font arthur_16x16_sprite_font(
    bn::sprite_items::arthur16x16, arthur_16x16_sprite_font_utf8_characters_map.reference(),
    arthur_16x16_sprite_font_character_widths
);

#endif //arthur_16X16_FONT_HPP
