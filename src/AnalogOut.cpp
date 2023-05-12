#include "AnalogOut.h"

void AnalogOut::begin() {
    pinMode(_pin, OUTPUT);
}

int AnalogOut::write(int value) {
    _value = value;
    analogWrite(_pin, value);
    return this->value();
}