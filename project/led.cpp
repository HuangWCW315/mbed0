#include "mbed.h"

void Led(DigitalOut & ledpin, bool tag)
{
    int time;

    if (tag)    time = 4;
    else time = 6;

    for (int i = 0; i < time; i++)
    {
        ledpin = !ledpin;
        wait(0.2f);
    }

}