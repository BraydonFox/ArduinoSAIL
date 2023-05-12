#pragma once

#include <Arduino.h>

class Pin {
    public:
        Pin(int pin) : _pin(pin), _value(0) { }
        int pin() { return _pin; }
        int value() { return _value; }

    protected:
        int _pin;
        int _value;
};