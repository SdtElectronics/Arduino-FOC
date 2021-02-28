#ifndef SPI_API_H
#define SPI_API_H

/*
* If SPI sensor is not required, 
* dumb definitions in this file
* can be left as-is.
*/

#ifndef __ARDUINO__

#include <stdint.h>
//These macros may need to be altered according to your platform

#ifndef LSBFIRST
#define LSBFIRST 0
#endif
#ifndef MSBFIRST
#define MSBFIRST 1
#endif

#define SPI_CLOCK_DIV4 0x00
#define SPI_CLOCK_DIV16 0x01
#define SPI_CLOCK_DIV64 0x02
#define SPI_CLOCK_DIV128 0x03
#define SPI_CLOCK_DIV2 0x04
#define SPI_CLOCK_DIV8 0x05
#define SPI_CLOCK_DIV32 0x06

#define SPI_MODE0 0x00
#define SPI_MODE1 0x04
#define SPI_MODE2 0x08
#define SPI_MODE3 0x0C

/*
* Only one SPISettings is used through the MagneticSensorSPI driver
* Therefore, you can hard code that setting into the implementation of SPIClass
* And leave a dumb definition for SPISettings
*/

struct SPISettings{
    uint8_t spcr;
    uint8_t spsr;
};

typedef struct SPISettings SPISettings;

typedef struct SPISettings _SPISettings;

_SPISettings SPISettings(uint32_t clock, uint8_t bitOrder, uint8_t dataMode);

struct SPIClass {
    //These functions should be implemented according to your platform in SPI_api.cpp

    void (*begin)();
    void (*beginTransaction)(struct SPISettings settings);
    uint16_t (*transfer16)(uint16_t data);
    void (*endTransaction)(void);
    void (*setBitOrder)(uint8_t bitOrder);
    void (*setDataMode)(uint8_t dataMode);
    void (*setClockDivider)(uint8_t clockDiv);
    void (*end)();
};

typedef struct SPIClass SPIClass;

typedef struct SPIClass _SPIClass;

extern SPIClass SPI0;

#else

#include "Arduino.h"
#include <Wire.h>

#endif

#endif