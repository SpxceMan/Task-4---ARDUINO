int ledpin=8;
int buttonpin=12;
int buttonread;
int dt=100;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonread=digitalRead(buttonpin);
  Serial.println(buttonread);
  delay(dt);
  if(buttonread==1){
    digitalWrite(ledpin,HIGH);}
  if(buttonread==0){
    digitalWrite(ledpin,LOW);}
}