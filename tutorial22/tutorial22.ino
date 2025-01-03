int potval;
int buzzpin=8;
int dt=2000;
int potpin=A1;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);
  pinMode(potpin,INPUT);
}

void loop()
{
  potval=analogRead(potpin);
  Serial.println(potval);
  while(potval>700){
    digitalWrite(buzzpin,HIGH);
    potval=analogRead(potpin);
    Serial.println(potval);
  }
  digitalWrite(buzzpin,LOW);


}
