#ifndef BLDCDRIVER_H
#define BLDCDRIVER_H

class BLDCDriver{
    public:
        
        /** Initialise hardware */
        virtual int init();
        /** Enable hardware */
        virtual void enable();
        /** Disable hardware */
        virtual void disable();

        long pwm_frequency; //!< pwm frequency value in hertz
        float voltage_power_supply; //!< power supply voltage 
        float voltage_limit; //!< limiting voltage set to the motor

        
        float dc_a; //!< currently set duty cycle on phaseA
        float dc_b; //!< currently set duty cycle on phaseB
        float dc_c; //!< currently set duty cycle on phaseC
            
        /** 
         * Set phase voltages to the harware 
         * 
         * @param Ua - phase A voltage
         * @param Ub - phase B voltage
         * @param Uc - phase C voltage
        */
        virtual void setPwm(float Ua, float Ub, float Uc);
};

#endif