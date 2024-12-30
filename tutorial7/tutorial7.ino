// C++ code
//
int redLed=9;
int bright=255;
int med=125;
int low=0;

void setup()
{
  pinMode(redLed, OUTPUT);
}

void loop()
{
  analogWrite(redLed, bright);
  delay(1000); 
  analogWrite(redLed, med);
  delay(1000); 
  analogWrite(redLed,low);
  delay(1000);
}