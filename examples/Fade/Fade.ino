/*
    Fade

    Shows how to fade an LED on pin 9 using SAIL.

    Under the hood, the AnalogOut object is still using
    Arduino's analogWrite() function. This function uses
    PWM. If you want to use another pin, be sure to choose
    another PWM capable pin.

    PWM pins are usually identified with a "~" sign.

*/

#include <SAIL.h>

AnalogOut led(9);
int brightness = 0;
int fadeAmount = 5;

void setup() {
    led.begin();
}

void loop() {
    led.write(brightness);

    brightness += fadeAmount;

    if(brightnessOutOfBounds()) {
        fadeAmount = -fadeAmount;
    }

    delay(30);
}

bool brightnessOutOfBounds() {
    return brightness <= 0 || brightness >= 255;
}