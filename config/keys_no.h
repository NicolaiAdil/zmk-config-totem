#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define NO_AE    SEMICOLON           // Æ
#define NO_OE    SINGLE_QUOTE        // Ø
#define NO_AA    LEFT_BRACKET        // Å
#define NO_QUOT  DOUBLE_QUOTES       // "
#define NO_PLUS  EQUALS              // +
#define NO_MINS  MINUS               // -
#define NO_SCLN  ALTGR(COMMA)        // ; on AltGr + ,
#define NO_COLN  ALTGR(PERIOD)       // : on AltGr + .
#define NO_UNDS  UNDERSCORE          // _
#define NO_COMM  COMMA               // ,
#define NO_DOT   PERIOD              // .
#define NO_LPRN  LEFT_PAREN          // (
#define NO_RPRN  RIGHT_PAREN         // )
#define NO_LCBR  ALTGR(DIGIT7)       // { on AltGr + 7
#define NO_RCBR  ALTGR(DIGIT0)       // } on AltGr + 0
#define NO_PIPE  ALTGR(DIGIT1)       // | on AltGr + 1
#define NO_AMPR  AMPERSAND           // &
#define NO_HASH  ALTGR(RIGHT_BRACE)  // # on AltGr + '
#define NO_AT    ALTGR(DIGIT2)       // @ on AltGr + 2
#define NO_DLR   ALTGR(DIGIT4)       // $ on AltGr + 4
#define NO_EURO  ALTGR(DIGIT5)       // € on AltGr + 5
#define NO_LBKT  ALTGR(DIGIT8)       // [ on AltGr + 8
#define NO_RBKT  ALTGR(DIGIT9)       // ] on AltGr + 9
#define NO_BSLS  ALTGR(MINUS)        // \ on AltGr + -
#define NO_LESS  SHIFT(COMMA)        // < on Shift + ,
#define NO_GRTR  SHIFT(PERIOD)       // > on Shift + .
#define NO_QUES  SHIFT(MINUS)        // ? on Shift + -
#define NO_EXLM  SHIFT(DIGIT1)       // ! on Shift + 1
#define NO_DQUO  SHIFT(DIGIT2)       // " on Shift + 2
