#include <Servo.h>
int servopin=6;
int servopos;
Servo myservo;

void setup()
{
  Serial.begin(9600);
  myservo.attach(servopin);
}

void loop()
{
  Serial.println("What angle do you want for the servo");
  while(Serial.available()==0){
  }
  servopos=Serial.parseInt();
  myservo.write(servopos);
  
}