#ifndef MAKEY_ARCADE_STICK_H
#define MAKEY_ARCADE_STICK_H

#include <Arduino.h>

#include "MakeyButton.h"
#include "MakeyButtonState.h"

class MakeyArcadeStick {
public:
    template <unsigned char N>
    MakeyArcadeStick(MakeyButton (&buttons) [N]);

    void begin();
    void update();

private:
    MakeyButton *buttons;
    unsigned char size;
};

/* Method Definitions */
template <unsigned char N>
inline MakeyArcadeStick::MakeyArcadeStick(MakeyButton (&buttons) [N])
    : buttons(buttons), size(N) {}

void MakeyArcadeStick::begin() {
    for (unsigned char i = 0; i < size; ++i) {
        buttons[i].state = MakeyButtonState::Released;
        pinMode(buttons[i].pin, INPUT_PULLUP);
    }

    Keyboard.begin();
}

void MakeyArcadeStick::update() {
    // For INPUT_PULLUP
    // HIGH = Released
    // LOW = Pressed
    for (unsigned char i = 0; i < size; ++i) {
        // Button was released.
        char pinState = digitalRead(buttons[i].pin);
        if (pinState == HIGH && buttons[i].state == MakeyButtonState::Pressed) {
            Keyboard.release(buttons[i].key);
            buttons[i].state = MakeyButtonState::Released;
        }

        // Button was pressed.
        else if (pinState == LOW && buttons[i].state == MakeyButtonState::Released) {
            Keyboard.press(buttons[i].key);
            buttons[i].state = MakeyButtonState::Pressed;
        }
    }
}

#endif // MAKEY_ARCADE_STICK_H
