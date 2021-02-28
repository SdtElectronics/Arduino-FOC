#ifndef ARDUINO_DEFS_H
#define ARDUINO_DEFS_H

#include <stdint.h>

typedef unsigned int word;
typedef uint8_t byte;

#define PI 3.1415926535897932384626433832795

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define round(x) ((x) >= 0 ? (long)((x) + 0.5) : (long)((x)-0.5))

#endif