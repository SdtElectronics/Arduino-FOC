#include "SPI_api.h"


_SPISettings SPISettings(uint32_t clock, uint8_t bitOrder, uint8_t dataMode){

}

void begin(){

}

void beginTransaction(struct SPISettings settings){

}

uint16_t transfer16(uint16_t data){

}

void endTransaction(void){

}

void setBitOrder(uint8_t bitOrder){

}

void setDataMode(uint8_t dataMode){

}

void setClockDivider(uint8_t clockDiv){

}

void end(){

}

SPIClass SPI0 = {
    .begin = begin,
    .beginTransaction = beginTransaction,
    .transfer16 = transfer16,
    .endTransaction = endTransaction,
    .setBitOrder = setBitOrder,
    .setDataMode = setDataMode,
    .setClockDivider = setClockDivider,
    .end = end
};