#include "UniversalPWM.h"

void UniversalPWM::attach(int pin){
    
    UniversalPWM::pin = pin;
    pinMode(pin,OUTPUT);
    #if defined(AVR)
        UniversalPWM::limit = 255;
    #elif defined(ESP_32)
        analogWriteResolution(pin, UniversalPWM::resolution);
        UniversalPWM::limit = 249;
    #endif
}
void UniversalPWM::write(int PWM){
    PWM = abs(PWM);
    PWM = PWM>UniversalPWM::limit?UniversalPWM::limit:PWM;
    UniversalPWM::pwm = PWM;
    analogWrite(UniversalPWM::pin,UniversalPWM::pwm);
}
int UniversalPWM::read(){
    return UniversalPWM::pwm;
}

void UniversalPWM::setLimit(int max){
    UniversalPWM::limit = abs(max);
}