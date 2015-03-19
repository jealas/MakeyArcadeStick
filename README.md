# MakeyArcadeStick
>Make your MakeyMakey into a MAME Arcade Controller!

### Version
1.0

### Tested With
 - Arduino IDE 1.6
 - SDL MAME 0.159

### Features
 - Simple button configuration.
 - Extremely light-weight code for reactive button presses.

# Build Instructions
 - Option A:
  - 1. Clone the repository
  ```sh
   $ git clone https://github.com/jealas/MakeyArcadeStick
  ```
  - 2. Open the Arduino IDE.
  - 3. Open the *MakeyArcadeStick.ino* file inside of the *MakeyArcadeStick* folder.
  - 4*. Customize your button mappings if you want (default button mappings work out of the box with MAME).
  - 5. Flash the new Firmware.
  - 6. Connect your buttons (sett wiring information below).
  - 7. Enjoy your new arcade stick!

 - Option B:
  - 1. Download the Respository as a .zip file (click the Download button to the right).
  - 2. Extract the folder inside of the .zip file.
  - 3. Rename the folder to: *MakeyArcadeStick*
  - 4. Open the Arduino IDE.
  - 5. Open the *MakeyArcadeStick.ino* file inside of the *MakeyArcadeStick* folder.
  - 6*. Customize your button mappings if you want (default button mappings work out of the box with MAME).
  - 7. Flash the new Firmware.
  - 8. Connect your buttons (see wiring information below).
  - 9. Enjoy your new arcade stick!

# Configuration Example
 - Valid Key values can be found here: [Arduino Keyboard Valid Keys]
 - Simply change these bindings in the MakeyArcadeStick.ino file, then flash and you're done!
 - The array below defines *MakeyButton*s where the first value is a *pin* on the MakeyMakey and
 - the second value is the *key* you want pressed when the button bound to the *pin* is pressed.
 - Valid Pins are: A0-A5, D0-D5 and D14-D16.
 - You can remove/add as many buttons as you'd like and even set up a button that presses mutliple keys!

```cpp
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

```

# MAME Arcade Stick Layout
 - The button layout below corresponds to the default, out of the box settings for MAME.
 - C = Player 1 Coin
 - S = Player 1 Start
 - U = Player 1 Up
 - D = Player 1 Down
 - R = Player 1 Right
 - L = Player 1 Left
 - 1 - 8 = Player 1 Buttons 1 - 8
![alt text](https://raw.githubusercontent.com/jealas/AllProjectsMarkdownResources/master/MakeyArcadeStick/MakeyArcadeStickLayout.png "Arcade Stick Layout")

# Wiring
 - Wiring is Simple!
 - All you need is one wire per button (directionals, coin, start, buttons 1 - 8).
 - All ground connections can be daisy-chained, so you really only need 1 or 2 wires for the ground pins.
 - Button Mappings:
  - Pin A5 -> Up Button
  - Pin A4 -> Down Button
  - Pin A3 -> Left Button
  - Pin A2 -> Right Button
  - Pin A1 -> Player 1 Coin Button
  - Pin A0 -> Player 1 Start Button
  - Pin D5 -> Player 1 Button 1
  - Pin D4 -> Player 1 Button 2
  - Pin D3 -> Player 1 Button 3
  - Pin D2 -> Player 1 Button 4
  - Pin D1 -> Player 1 Button 5
  - Pin D0 -> Player 1 Button 6
  - Pin D14 -> Player 1 Button 7
  - Pin D15 -> Player 1 Button 8

### Todo's
 - Create Wiring Diagram.
 - Add Documentation
 - Make an Arduino Leonardo version.
 - Make a generic arduino version (will need to reflash the USB Serial Microcontroller).

License
----
[Apache 2.0]

[Apache 2.0]:http://www.apache.org/licenses/LICENSE-2.0
[Arduino Keyboard Valid Keys]:http://arduino.cc/en/Reference/KeyboardModifiers
