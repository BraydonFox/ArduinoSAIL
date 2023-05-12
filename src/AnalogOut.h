#pragma once

#include "Pin.h"

class AnalogOut : public Pin
{
    public:
        AnalogOut(int pin): Pin(pin) { }
        void begin();
        int write(int value);
};