#include "AnalogIn.h"

void AnalogIn::begin() {
    pinMode(_pin, INPUT);
}

int AnalogIn::read() {
    _prev = _value;
    _value = analogRead(_pin);
    return value();
}

int AnalogIn::delta() {
    return _value - _prev;
}

int AnalogIn::absoluteDelta() {
    return abs(delta());
}