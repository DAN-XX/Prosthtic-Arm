#include <Servo.h> 
Servo myservo;
const int threshValue = 250;
const int led=10;
void setup() 
{ 
  myservo.attach(9);
   pinMode(led, OUTPUT);
} 

void loop() 
{ 
  int value = analogRead(A3);

  if(value < threshValue)        
  { 
            myservo.writeMicroseconds(800);  
            
  }
  else 
  { 
            myservo.writeMicroseconds(2250);
           
  } 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
}
