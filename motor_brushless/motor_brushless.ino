

#include <Servo.h>


Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

void setup()
{

  motor1.attach(11); 
  motor2.attach(10);
  motor3.attach(9);
  motor4.attach(6);

  motor1.write(30); 
  motor2.write(30);
  motor3.write(30);
  motor4.write(30);
  
  Serial.begin(9600);
  delay(1000);            
}




void loop()
{
  //Vary this between 40-130 to change the speed of motor. Higher value, higher speed.
  motor1.write(55);
  motor2.write(55);
  motor3.write(55);
  motor4.write(55);
  delay(15);
} 
