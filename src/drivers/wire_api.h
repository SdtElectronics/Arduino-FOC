#ifndef WIRE_API_H
#define WIRE_API_H

/*
* If I2C sensor is not required, 
* dumb definitions in this file
* can be left as-is.
*/

#ifndef __ARDUINO__

#include <stdint.h>
//These macros may need to be altered according to your platform

struct TwoWire{
    uint8_t masterAddr;
    void (*begin)();
    uint8_t (*write)(uint8_t value);
    void (*beginTransmission)(uint8_t address);
    void (*endTransmission)(bool stop);
    uint8_t (*requestFrom)(uint8_t address, uint8_t quantity);
    uint8_t (*read)();
};

typedef struct TwoWire TwoWire;

TwoWire* initTwoWire(TwoWire* wire, uint8_t masterAddr);

extern TwoWire Wire;

#else

#include "Arduino.h"
#include <Wire.h>

#endif

#endif