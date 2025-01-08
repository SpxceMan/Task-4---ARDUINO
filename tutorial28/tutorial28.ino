int ledstate=0;
int ledpin=8;
int buttonpin=12;
int buttonnew;
int buttonold=1;
int dt=100;
void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin,INPUT);
  Serial.begin(9600);
  

}

void loop()
{
  buttonnew=digitalRead(buttonpin);
  if(buttonold==0 && buttonnew==1){
    if(ledstate==0){
      digitalWrite(ledpin,HIGH);
      ledstate=1;}
    
    else{
      digitalWrite(ledpin,LOW);
      ledstate=0;}
  }
  
  buttonold=buttonnew;
}