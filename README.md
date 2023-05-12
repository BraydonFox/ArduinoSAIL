# ArduinoSAIL

The "Simple Arduino Interface Library" - Using object orientation to make Arduino a little more user-friendly.

Arduino has proven to be an exciting and cheap way for the average hobbyist to explore both electronics and programming. With its open source status and a plethora of support from third party manufacturers, it's never been easier or quicker to take an idea and bring it into the physical world.

That being said, Arduino code isn't always the easiest thing to read.

The SAIL library was designed to make it easier.

This library is based on, and inspired by, the Eloquent Library by Simone. Eloquent has since been turned into a machine learning library. Most of the code relevant to SAIL is now deprecated.

SAIL was built to continue to provide these quality of life features in a lightweight, standalone library.

## Usage
Often you will declare a variable for a pin:

`int led = 13;`

Then set its pinMode like so:

`pinMode(led, OUTPUT);`

Wouldn't it be nice to apply both of these concepts at once, during the variable declaration?

`DigitalOut led(13);`

Typically in the Arduino world, whenever you want to change a pin's state, you use:

`digitalWrite(led, HIGH);`

It's understandable, but it takes a second longer to understand what's going on.

By contrast, `led.turnOn();` makes immediate sense!

The SAIL library leverages the power of object-oriented programming in Arduino's variation of C++, yielding code that's shorter and more expressive. Take a look at the example files, and see if you can't find ways of making your next Arduino project shorter, more expressive, and easier to read.

Have fun!
