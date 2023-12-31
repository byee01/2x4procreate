/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Top
[   ⌘ + Z
]   ⌘ + Y
B   S
E   ⌘ + J
Bottom (USB port)

For procreate, this is what we would want:
[,],B,E,⌘ + Z, ⌘ + Y, S, ⌘ + J

LGUI is the Apple key.

KC_LBRACKET, KC_RBRACKET, KC_B, KC_E, LGUI(KC_Z), LGUI(KC_Y), KC_S, LGUI(KC_J)

"Top left" of the keyboard is position 3,0.

So it actually should be, in order:
KC_E,       KC_B,   KC_RBRACKET,    KC_LBRACKET
LGUI(KC_J), KC_S,   LGUI(KC_Y),     LGUI(KC_Z)

Updated
Top
⌘ + ;   ⌘ + Z
L       Command + Shift + Z
B       S
E       ⌘ + J

*/
#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {{
        KC_E,       KC_B,   KC_L,                   LGUI(KC_SCOLON),
        LGUI(KC_J), KC_S,   LGUI(LSFT(KC_Z)),     LGUI(KC_Z)
    }};

 
void setupKeymap() {
;

}
