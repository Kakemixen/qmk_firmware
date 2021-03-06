/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

#define BASE_CLMK 0
#define BASE_GAME 1
#define MATH 2
#define SYMB 3
#define NAVG 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE_CLMK] = LAYOUT_split_4x6_5(
    KC_CAPS,  KC_1, KC_2, KC_3, KC_4, KC_5,			            KC_6,    KC_7, KC_8, KC_9, KC_0,  KC_BSPC,
//-------------------------------------------------//-----------------------------------------------------------//
    NO_BSLS,  KC_Q, KC_W, KC_D, KC_B, NO_UNDS,			        NO_MINS, KC_H, KC_U, KC_Y, KC_Z,  NO_TILD,
//-------------------------------------------------//-----------------------------------------------------------//
    NO_SLSH,  KC_A, KC_R, KC_S, KC_T, KC_COMM,	                KC_DOT,  KC_N, KC_E, KC_I, KC_O,  NO_PIPE,
//-------------------------------------------------//-----------------------------------------------------------//
    XXXXXXX, KC_X, KC_C, KC_F, KC_G, KC_P,                      KC_M,    KC_L, KC_J, KC_K, KC_V,  XXXXXXX,
//-------------------------------------------------//-----------------------------------------------------------//
                         KC_SPC, MO(MATH), KC_LSHIFT,		         KC_RGUI,  MO(SYMB),  KC_ENT,
                                 LCTL_T(KC_ESC),  KC_BSPC,      LALT_T(KC_DEL), RCTL_T(KC_TAB)
  ),

  [BASE_GAME] = LAYOUT_split_4x6_5(
    KC_CAPS,  KC_1, KC_2, KC_3, KC_4, KC_5,			            KC_6,    KC_7, KC_8, KC_9, KC_0,  KC_BSPC,
//-------------------------------------------------//-----------------------------------------------------------//
    NO_BSLS,  KC_T, KC_Q, KC_W, KC_E, NO_R,			            NO_Y, KC_U, KC_I, KC_O, KC_P,  NO_ARNG,
//-------------------------------------------------//-----------------------------------------------------------//
    NO_SLSH,  KC_G, KC_A, KC_S, KC_D, KC_F,	                    KC_H,  KC_J, KC_K, KC_L, NO_OSTR,  NO_AE,
//-------------------------------------------------//-----------------------------------------------------------//
    XXXXXXX,  KC_B, KC_Z, KC_X, KC_C, KC_V,                     KC_N,    KC_M, KC_COMM, KC_DOT, NO_MINS,   DF(BASE_CLMK),
//-------------------------------------------------//-----------------------------------------------------------//
                         KC_SPC, KC_TAB, KC_LSHIFT,		         KC_RGUI,  MO(NAVG),  KC_ENT,
                                 LCTL_T(KC_ESC),  KC_BSPC,      LALT_T(KC_DEL), RCTL_T(KC_TAB)
  ),

  [MATH] = LAYOUT_split_4x6_5(
    RESET,   _______, _______, _______, _______,  _______,			_______, _______, _______, _______, _______,  _______,
//---------------------------------------------------------//-----------------------------------------------------------//
    _______, _______, NO_GRV,  NO_LCBR, NO_QUOT, NO_SLSH,			NO_ASTR, NO_DQUO, NO_RCBR, NO_ACUT, _______,  _______,
//---------------------------------------------------------//-----------------------------------------------------------//
    _______, NO_LABK, NO_LBRC, NO_LPRN, KC_1,  _______,	            _______, KC_0,    NO_RPRN, NO_RBRC, NO_RABK,  _______,
//---------------------------------------------------------//-----------------------------------------------------------//
    _______, KC_9,    KC_7,    KC_5,    KC_3, NO_MINS,              NO_PLUS, KC_2,    KC_4,    KC_6,    KC_8,     _______,
//---------------------------------------------------------//-----------------------------------------------------------//
                               _______, _______, _______,		    _______, _______, KC_SPC,
                                        _______, _______,           KC_BSPC, _______ 
  ),

  [SYMB] = LAYOUT_split_4x6_5(
    _______,   _______, _______, _______, _______,  _______,	    _______, _______, _______, _______, _______,  _______,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______,   _______, NO_SLSH, NO_CIRC, _______,  NO_OSTR,	    _______, _______, NO_DLR,  NO_ASTR, _______,  _______,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______,   NO_BSLS, NO_QUES, NO_AMPR, NO_EQL,   NO_AE,  	    NO_COLN, NO_EXLM, NO_PIPE, NO_PERC, NO_TILD,  _______,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______,   _______, KC_LEFT, KC_RIGHT, NO_AT,   NO_ARNG,	    _______, NO_HASH, KC_DOWN, KC_UP,   _______,  _______,
//---------------------------------------------------------//--------------------------------------------------------------//
                               _______,  _______, KC_ENT,		    _______, _______, _______,
                                        _______, _______,           _______, _______ 
  ),

  [NAVG] = LAYOUT_split_4x6_5(
    KC_F1,         KC_F2,   KC_F3,   KC_F4,   KC_F5,	KC_F6,                  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,
//----------------------------------------------------------------//--------------------------------------------------------------//
    _______,       _______, _______,    KC_MS_UP,   _______,     _______,	    _______, KC_MS_BTN3, _______, _______, _______,  _______,
//----------------------------------------------------------------//--------------------------------------------------------------//
    _______,       _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______,	    _______, KC_MS_BTN1, KC_ACL2, KC_ACL1, KC_ACL0,  _______,
//----------------------------------------------------------------//--------------------------------------------------------------//
    DF(BASE_GAME), _______, KC_MS_WH_LEFT,    _______,    KC_MS_WH_RIGHT,     _______,	    _______, KC_MS_BTN2, KC_MS_WH_DOWN, KC_MS_WH_UP, _______,  _______,
//----------------------------------------------------------------//--------------------------------------------------------------//
                               _______, _______, _______,		    _______, _______, _______,
                                        _______, _______,           _______, _______ 
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, MATH, SYMB, NAVG);
  return state;
}
