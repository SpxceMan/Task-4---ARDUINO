int readPin=A3;
float V2;
int time=1000;
int readval;
void setup()
{
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  readval=analogRead(readPin);
  V2=(5./1023.)*readval;
  Serial.println(V2);
  delay(time);
  
}