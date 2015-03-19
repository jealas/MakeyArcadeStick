#include "MakeyArcadeStick.h"

MakeyButton buttons[] = {{MakeyPin::A5, KEY_UP_ARROW},
                         {MakeyPin::A4, KEY_DOWN_ARROW},
                         {MakeyPin::A3, KEY_LEFT_ARROW},
                         {MakeyPin::A2, KEY_RIGHT_ARROW},
                         
                         {MakeyPin::A1, '5'},
                         {MakeyPin::A0, '1'},
                         
                         {MakeyPin::D5, KEY_LEFT_CTRL}, //left control
                         {MakeyPin::D4, KEY_LEFT_ALT}, // left alt
                         {MakeyPin::D3, ' '}, // space
                         {MakeyPin::D14, 'c'}, // c
                         
                         {MakeyPin::D2, KEY_LEFT_SHIFT}, // left shift
                         {MakeyPin::D1, 'z'}, // z
                         {MakeyPin::D0, 'x'}, // x
                         {MakeyPin::D15, 'v'} // v
};

MakeyArcadeStick arcadeStick(buttons);

void setup() {
    arcadeStick.begin();
}

void loop() {
    arcadeStick.update();
}
