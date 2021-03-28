#include<UniversalPWM.h>
UniversalPWM m1;
void setup() {
  // put your setup code here, to run once:
  Serial.println(115200);
  m1.attach(9);
  m1.setLimit(249);//default is 249 for ESP and 255 for Arduino
}

void loop() {
  m1.write(230);
  Serial.println(m1.read());//Will return last set PWM
  // put your main code here, to run repeatedly:

}
