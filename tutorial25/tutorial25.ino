int lightpin=A0;
int lightval;
int dt=250;
int gled=2;
int rled=3;

void setup()
{
  pinMode(lightpin, INPUT);
  pinMode(gled,OUTPUT);
  pinMode(rled,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  lightval=analogRead(lightpin);
  Serial.println(lightval);
  delay(dt);
  
  if(lightval>200){
    digitalWrite(gled,HIGH);
    delay(dt);
    digitalWrite(gled,LOW);
    delay(dt);}
  
  if(lightval<200){
    digitalWrite(rled,HIGH);
    delay(dt);
    digitalWrite(rled,LOW);
    delay(dt);}
  
    
}