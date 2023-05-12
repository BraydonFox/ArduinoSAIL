#include "DigitalOut.h"

void DigitalOut::begin() {
    pinMode(_pin, OUTPUT);
}

void DigitalOut::setActiveLow() {
    _active = LOW;
}

void DigitalOut::turnOn() {
    write(_active);
}

void DigitalOut::turnOff() {
    write(!_active);
}

void DigitalOut::toggle() {
    _value == _active ? turnOff() : turnOn();
}

void DigitalOut::write(bool value) {
    digitalWrite(_pin, value ? HIGH : LOW);
}
