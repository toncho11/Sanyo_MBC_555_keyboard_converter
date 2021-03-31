# Sanyo MBC 555 keyboard converter
This is an Arduino code that converts keyboard scan codes transmitted over serial from one set of scan codes to another set. It is used in a [Sanyo MBC 555 computer](https://en.wikipedia.org/wiki/MBC-550). The Arduino intercepts the original scan code from the keyboard's 8749 microcontroller and replaces it with a new one. Both the RX and TX pins of the Arduino are used to receive and re-send the new scan code. It acts as a middle man between the keyboard's microcontroller and computer's internal serial UART microcontroller 8051. 3 pins are required on the Arduino: TX, RX and ground.

I am using it on a French azerty keyboard. You can either use it to correct a problem or switch a keyboard from AZERTY to QWERTY for example.

The keyboard operates at 1200 baud, with 8 data bits, 2 stop bits and even parity. 
Here is some information on the scan codes: https://www.seasip.info/VintagePC/sanyo.html#keybhw

Remove the cable from the RX pin of the Arduino before flashing the code. Otherwise the Arduino IDE will fail with an error.
You can power the Arduino with 5V from the keyboard using the 5V pin on the Arduino or you can use 12V from the computer but on the Vin pin of the Arduino. I am using Arduino Uno or Arduino Nano clone.
