#include <Servo.h>
  
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int joyX = 0;
int joyY = 1;
int joyM = 2;
int joyN = 3;
  
int servoVal;
  
void setup() 
{
  servo1.attach(3);
  servo2.attach(5);
    servo3.attach(6);
    servo4.attach(9);
}
  
void loop()
{
  
  servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);

 // Dhaddammm Robotics//   
    
  servoVal = analogRead(joyY);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo2.write(servoVal);
    
  servoVal = analogRead(joyM);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo3.write(servoVal);  
    
   servoVal = analogRead(joyN);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo4.write(servoVal); 
    
  delay(15);  
}
