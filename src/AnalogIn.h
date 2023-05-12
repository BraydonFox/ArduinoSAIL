#pragma once

#include "Pin.h"

class AnalogIn : public Pin
{
    public:
        AnalogIn(int pin) : Pin(pin), _prev(0) { }
        void begin();
        int read();
        int delta();
        int absoluteDelta();
        
    protected:
        int _prev;
};