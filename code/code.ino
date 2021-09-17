#include <Servo.h>

int PWM_ROLL = 13;
int PWM_PITCH = 12; 
int PWM_THROTTLE = 7; 
int PWM_YAW = 5; 
int PWM_SWA = 3; 
int PWM_VRA = 8; 


Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;


void setup()
{

  pinMode(PWM_ROLL, INPUT);
  pinMode(PWM_PITCH, INPUT);
  pinMode(PWM_THROTTLE, INPUT);
  pinMode(PWM_YAW, INPUT);
  pinMode(PWM_SWA, INPUT);
  pinMode(PWM_VRA, INPUT);
  Serial.begin(115200);

 
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

  // Reciever
  int roll = pulseIn(PWM_ROLL, HIGH); 
  int pitch = pulseIn(PWM_PITCH, HIGH); 
  int throttle = pulseIn(PWM_THROTTLE, HIGH);
  int yaw = pulseIn(PWM_YAW, HIGH); 
  int swA = pulseIn(PWM_SWA, HIGH); 
  int vrA = pulseIn(PWM_VRA, HIGH); 
  
  Serial.print(" PWM CH1 Roll: ");
  Serial.print(roll-1500);
  Serial.print(" PWM CH2 Pitch: ");
  Serial.print(pitch-1500);
  Serial.print(" PWM CH3 Throttle: ");
  Serial.println(throttle-1014);
  Serial.print(" PWM CH1 Yaw: ");
  Serial.print(yaw-1495);
  Serial.print(" PWM CH2 swA: ");
  Serial.print(swA-995);
  Serial.print(" PWM CH3 vrA: ");
  Serial.println(vrA-995);


  
  // Brushless 
  motor1.write(55);
  motor2.write(55);
  motor3.write(55);
  motor4.write(55);
  delay(15);
} 
