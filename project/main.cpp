#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int Led(DigitalOut & ledpin, bool tag);

int main()
{
    redLED = 1;
    greenLED = 1;
    bool tag = false;
    while (true)
    {
        Led(redLED, tag);   // false red
        tag = !tag;
        Led(greenLED, tag);      // true green
        tag = !tag;
    }
}