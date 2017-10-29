// Nalin wrote code to control servo motor - 
// Towerpro SG90
// Before running the code, do below:
// - Connect the servo yellow to pin 9, r/b to +5/gnd

#include <Servo.h> 
int potPin = A5;
Servo servo1;
Servo servo2;

void setup()
{
servo1.attach(10);
servo2.attach(9);
       
    // Start up serial connection
    Serial.begin(9600); // baud rate
    Serial.flush();
}

void loop()
{
  // analog read - changes from 0 to 1023
   int potValue =  analogRead(potPin); 
   
   Serial.println(potValue); 

      int pottoservo = potValue/6;
      servo1.write (pottoservo);
   delay(100);
      servo2.write (180 - pottoservo);
      //digitalWrite (9, HIGH);
      delay (1000);   
} 
   
