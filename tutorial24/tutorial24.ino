int buzzpin=8;
int potval;
int potpin=A1;
float toneval;

void setup()
{
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin,INPUT);
  
}

void loop()
{
  potval=analogRead(potpin); //bw 0-1023
  toneval=(9940./1023.)*potval+60;
  digitalWrite(buzzpin,HIGH);
  delayMicroseconds(toneval);
  digitalWrite(buzzpin,LOW);
  delayMicroseconds(toneval);
   
  
}