#pragma once

#include "Pin.h"

class DigitalOut : public Pin {
    public:
        DigitalOut(int pin) : Pin(pin), _active(HIGH) { }
        void begin();
        void setActiveLow();
        void turnOn();
        void turnOff();
        void toggle();

    protected:
        bool _active;
        void write(bool value);
};