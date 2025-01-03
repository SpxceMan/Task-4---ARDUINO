int buzzpin=8;
int dt1=1;
int dt2=2; 
int j;
void setup()
{
  pinMode(buzzpin, OUTPUT);
}

void loop()
{
  for (j=1;j<=100;j++){
    digitalWrite(buzzpin,HIGH);
    delay(dt1);
    digitalWrite(buzzpin,LOW);
    delay(dt1);
  }
  for(j=1;j<=100;j++){
    digitalWrite(buzzpin,HIGH);
    delay(dt2);
    digitalWrite(buzzpin,LOW);
    delay(dt2);}
    
}