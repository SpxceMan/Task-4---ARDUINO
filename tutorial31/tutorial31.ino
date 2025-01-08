#include <Servo.h>
int servopin=9;
int servopos=150;
Servo myservo;
int photopin=A0;
int photoval;
int dt=200;

void setup()
{
  myservo.attach(servopin);
  pinMode(photopin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  
  photoval=analogRead(photopin);
  Serial.println(photoval);
  delay(dt);
  servopos=180./679.*photoval;
  myservo.write(servopos);
  
  
}


  
  
  