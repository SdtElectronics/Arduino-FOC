#include "peripheral_api.h"

#if defined(__ARDUINO__)

inline int digitalRead(int pin){
    return digitalRead(pin);
}

inline int digitalWrite(int){
    return digitalWrite(pin);
}

inline void pinMode(int){
    return pinMode(pin);
}

#else

inline int digitalRead(int pin){

}

inline int digitalWrite(int){
    
}

inline void pinMode(int){
    
}

#endif