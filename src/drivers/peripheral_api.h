#ifndef PERIPHERAL_API_H
#define PERIPHERAL_API_H

#include <stdint.h>

#ifndef __ARDUINO__

//These macros may need to be altered according to your platform 

#define HIGH 0x1
#define LOW 0x0

#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2

#define CHANGE 1
#define FALLING 2
#define RISING 3

#define digitalPinToInterrupt(p) (p)

//These functions should be implemented according to your platform in peripheral_api.cpp

int digitalRead(int);
int digitalWrite(int, int);
int analogRead(int);

void attachInterrupt(uint32_t pin, void (*callback)(void), uint32_t mode);

void detachInterrupt(uint32_t pin);
void pinMode(int, int);

#else

#include "Arduino.h"

#endif

#endif