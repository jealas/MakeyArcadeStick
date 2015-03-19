#ifndef MAKEY_ARCADE_STICK_MAKEY_BUTTON
#define MAKEY_ARCADE_STICK_MAKEY_BUTTON

#include "MakeyPin.h"
#include "MakeyButtonState.h"

struct MakeyButton {
    const MakeyPin::Pin pin;
    const char key;
    MakeyButtonState::State state;
};

#endif //MAKEY_ARCADE_STICK_MAKEY_BUTTON
