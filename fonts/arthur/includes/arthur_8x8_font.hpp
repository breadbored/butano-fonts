//
// Created by Jason Brad Carpenter on 4/27/25.
//

#ifndef arthur_8X8_FONT_HPP
#define arthur_8X8_FONT_HPP

#include "bn_sprite_font.h"
#include "bn_sprite_items_arthur8x8.h"
#include "bn_utf8_characters_map.h"

constexpr bn::utf8_character arthur_8x8_sprite_font_utf8_characters[] = {
    "Á", "É", "Í", "Ó", "Ú", "Ü", "Ñ", "á", "é", "í", "ó", "ú", "ü", "ñ", "¡", "¿"
};

constexpr s8 arthur_8x8_sprite_font_character_widths[] = {
    6, // 32
    4, // 33 !
    6, // 34 "
    8, // 35 #
    8, // 36 $
    7, // 37 %
    8, // 38 &
    3, // 39 '
    4, // 40 (
    4, // 41 )
    6, // 42 *
    6, // 43 +
    3, // 44 ,
    6, // 45 -
    3, // 46 .
    5, // 47 /
    8, // 48 0
    5, // 49 1
    8, // 50 2
    8, // 51 3
    8, // 52 4
    8, // 53 5
    8, // 54 6
    8, // 55 7
    8, // 56 8
    8, // 57 9
    3, // 58 :
    3, // 59 ;
    5, // 60 <
    6, // 61 =
    5, // 62 >
    8, // 63 ?
    8, // 64 @
    8, // 65 A
    8, // 66 B
    8, // 67 C
    8, // 68 D
    8, // 69 E
    8, // 70 F
    8, // 71 G
    8, // 72 H
    7, // 73 I
    8, // 74 J
    8, // 75 K
    8, // 76 L
    8, // 77 M
    8, // 78 N
    8, // 79 O
    8, // 80 P
    8, // 81 Q
    8, // 82 R
    8, // 83 S
    8, // 84 T
    8, // 85 U
    8, // 86 V
    8, // 87 W
    8, // 88 X
    8, // 89 Y
    8, // 90 Z
    5, // 91 [
    8, // 50 2
    5, // 93 ]
    5, // 94 ^
    8, // 95 _
    4, // 96 `
    8, // 97 a
    8, // 98 b
    7, // 99 c
    7, // 100 d
    7, // 101 e
    7, // 102 f
    7, // 103 g
    8, // 104 h
    4, // 105 i
    5, // 106 j
    8, // 107 k
    5, // 108 l
    8, // 109 m
    8, // 110 n
    7, // 111 o
    8, // 112 p
    7, // 113 q
    8, // 114 r
    7, // 115 s
    8, // 116 t
    7, // 117 u
    8, // 118 v
    8, // 119 w
    7, // 120 x
    7, // 121 y
    7, // 122 z
    5, // 123 {
    2, // 124 |
    5, // 125 }
    7, // 126 ~
    8, // Á
    8, // É
    7, // Í
    8, // Ó
    8, // Ú
    8, // Ü
    8, // Ñ
    8, // á
    7, // é
    4, // í
    7, // ó
    7, // ú
    7, // ü
    8, // ñ
    4, // ¡
    8, // ¿
};

constexpr bn::span<const bn::utf8_character> arthur_8x8_sprite_font_utf8_characters_span(
    arthur_8x8_sprite_font_utf8_characters
);

constexpr auto arthur_8x8_sprite_font_utf8_characters_map =
    bn::utf8_characters_map<arthur_8x8_sprite_font_utf8_characters_span>();

constexpr bn::sprite_font arthur_8x8_sprite_font(
    bn::sprite_items::arthur8x8, arthur_8x8_sprite_font_utf8_characters_map.reference(),
    arthur_8x8_sprite_font_character_widths
);

#endif //arthur_8X8_FONT_HPP
