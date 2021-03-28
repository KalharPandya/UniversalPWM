
#ifndef UniversalPWM_h
#define UniversalPWM_h
#if defined (ESP32)
    #define ESP_32 1
#elif   defined(ARDUINO_AVR_ADK)       
    #define AVR 1
#elif defined(ARDUINO_AVR_BT)    // Bluetooth
     #define AVR 1
#elif defined(ARDUINO_AVR_DUEMILANOVE)       
     #define AVR 1
#elif defined(ARDUINO_AVR_ESPLORA)       
     #define AVR 1
#elif defined(ARDUINO_AVR_ETHERNET)       
     #define AVR 1
#elif defined(ARDUINO_AVR_FIO)       
     #define AVR 1
#elif defined(ARDUINO_AVR_GEMMA)
     #define AVR 1
#elif defined(ARDUINO_AVR_LEONARDO)       
     #define AVR 1
#elif defined(ARDUINO_AVR_LILYPAD)
     #define AVR 1
#elif defined(ARDUINO_AVR_LILYPAD_USB)
     #define AVR 1
#elif defined(ARDUINO_AVR_MEGA)       
     #define AVR 1
#elif defined(ARDUINO_AVR_MEGA2560)       
     #define AVR 1
#elif defined(ARDUINO_AVR_MICRO)       
     #define AVR 1
#elif defined(ARDUINO_AVR_MINI)       
     #define AVR 1
#elif defined(ARDUINO_AVR_NANO)       
     #define AVR 1
#elif defined(ARDUINO_AVR_NG)       
     #define AVR 1
#elif defined(ARDUINO_AVR_PRO)       
     #define AVR 1
#elif defined(ARDUINO_AVR_ROBOT_CONTROL)       
     #define AVR 1
#elif defined(ARDUINO_AVR_ROBOT_MOTOR)       
     #define AVR 1
#elif defined(ARDUINO_AVR_UNO)       
     #define AVR 1
#elif defined(ARDUINO_AVR_YUN)       
     #define AVR 1
#endif


#include <Arduino.h>
#if defined(ESP_32)
    #include <analogWrite.h>
#endif

class UniversalPWM{
    public:
        int resolution = 13;
        int pwm = 0;
        int pin = 0;
		int limit = 255;
        
        
        void attach(int pin);
        void write(int PWM);
        int read();
        void setLimit(int max);
};

#endif