#include <SAIL.h>

AnalogIn potentiometer(A0);
DigitalOut indicatorLed(3);

void setup() {
    potentiometer.begin();
    indicatorLed.begin();
}

void loop() {
    int potVoltage = potentiometer.read() * 5 / 1023;
    potVoltage >= 3 ? indicatorLed.turnOn : indicatorLed.turnOff;
}