#include "DigitalIn.h"

void DigitalIn::begin() {
    pinMode(_pin, INPUT);
}

void DigitalIn::setPullup() {
    pinMode(_pin, INPUT_PULLUP);
}

void DigitalIn::setActiveLow() {
    _active = LOW;
}

bool DigitalIn::read() {
    _previous = isOn();
    _value = digitalRead(_pin);
    return isOn();
}

bool DigitalIn::isOn() {
    return _value == _active;
}

bool DigitalIn::isOff() {
    return !isOn();
}

bool DigitalIn::hasChanged() {
    return _previous != isOn();
}
