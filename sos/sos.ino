int redLED=13;
int dit=400;
int dah=900;
int longWait=1500;

void setup()
{
  pinMode(redLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
  
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
  
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
  
  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);
  
  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);
  
  digitalWrite(redLED, HIGH);
  delay(dah);
  digitalWrite(redLED, LOW);
  delay(dah);
  
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
  
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);
  
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(longWait);
  
}