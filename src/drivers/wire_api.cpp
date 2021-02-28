#ifndef __ARDUINO__

#include <stdint.h>
#include "wire_api.h"

//These methods should be implemented according to your platform

static void begin();

static uint8_t write(uint8_t value);

static void beginTransmission(uint8_t address);

static void endTransmission(bool stop);

static uint8_t requestFrom(uint8_t address, uint8_t quantity);

static uint8_t read();

TwoWire Wire = {
    .begin = begin,
    .write = write,
    .beginTransmission = beginTransmission,
    .endTransmission = endTransmission,
    .requestFrom = requestFrom,
    .read = read
};

//Currently using this nasty hack to emulate `this` pointer
static TwoWire* wirePtr = &Wire;

static void begin(){

}

static uint8_t write(uint8_t value){

}

static void beginTransmission(uint8_t address){

}

static void endTransmission(bool stop){

}

static uint8_t requestFrom(uint8_t address, uint8_t quantity){

}

static uint8_t read(){

}

TwoWire* initTwoWire(TwoWire* wire, uint8_t masterAddr){
    /*
    wire->begin = begin;
    wire->write = write;
    wire->beginTransmission = beginTransmission;
    wire->endTransmission = endTransmission;
    wire->requestFrom = requestFrom;
    wire->read = read;
    
    wirePtr = wire;
    */
}

#endif