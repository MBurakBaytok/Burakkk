#include <stdlib.h>
#include<Servo.h>
char serial;
Servo motor;
int i=90;
void setup() {
  Serial.begin(9600);
  motor.attach(6);
}


void loop() 
{
  if(Serial.available())
  {
    serial=Serial.read();
    Serial.println(serial,HEX);
    if(serial=='R')
    {
      motor.write(i);
      i++;
      delay(2);
     }
    if(serial=='S')
    {
      motor.write(i);
    }
    if(serial=='L')
    {
      motor.write(i);
      i--;
      delay(2);
    }
  }
  }
