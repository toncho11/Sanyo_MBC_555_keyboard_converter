# Sanyo_MBC_555_keyboard_converter
This is an Arduino code that converts keyboard scan codes transmitted over serial from one set of scan codes to another set. It is used in a Sanyo MBC 555 computer. The Arduino intercepts the original scan code from the keyboard's 8749 microcontroller and replaces it with a new one. Both the RX and TX pins arer used to receive and re-send the new scan code.
