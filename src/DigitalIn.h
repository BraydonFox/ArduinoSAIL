#pragma once

#include "Pin.h"

class DigitalIn : public Pin {
    public:
        DigitalIn(int pin) : Pin(pin), _active(HIGH) { }
        void begin();
        void setPullup();
        void setActiveLow();
        bool read();
        bool isOn();
        bool isOff();
        bool hasChanged();

    protected:
        bool _active;
        bool _previous;
};