#include "MakeyArcadeStick.h"

MakeyButton buttons[] = {{MakeyPin::D0, 'c'},
                         {MakeyPin::D1, 'd'}};

MakeyArcadeStick arcadeStick(buttons);

void setup() {
    arcadeStick.begin();
}

void loop() {
    arcadeStick.update();
}
