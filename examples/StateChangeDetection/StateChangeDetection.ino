/*
    State change detection (edge detection)

    The required circuit for this example is:
    - A pushbutton connected to pin 2 from +5V
    - 10K Ohm resistor connected to pin 2 from GND
    - LED connected from pin 13 to GND through a 220 Ohm
      resistor (Or just use the built in LED)

    The idea of this sketch is to turn an LED on every
    four button pushes.

    Normally, this would involve excessive if-else
    statements and state variables. With SAIL, the state
    of the pin is tightly bound to the instance of the
    DigitalIn object.
    
    This relieves us of having to read and compare
    the pin's current value to a previous value.
    
    This also resolves the common headache of
    forgetting to update state variables.

    Below, we call read() on our button input, which
    updates the internal state for us. Afterwards, all we
    have to do is ask our button if the state "hasChanged".
    (How's that for syntactic sugar?)

*/

#include <SAIL.h>

DigitalIn button(2);
DigitalOut led(13);

int numberOfButtonPushes = 0;

void setup() {
    button.begin();
    led.begin();
}

void loop() {
    button.read();

    if(button.hasChanged()) {
        numberOfButtonPushes++;
    }

    // Debounce delay
    delay(50);

    if(numberOfButtonPushes % 4 == 0) {
        led.turnOn();
    } else {
        led.turnOff();
    }
}