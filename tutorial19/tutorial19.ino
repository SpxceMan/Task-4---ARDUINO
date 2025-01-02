String color;
String msg="Which led do u want?";
int rled=2,gled=3,bled=4;

void setup()
{
  Serial.begin(9600);
  pinMode(rled,OUTPUT);
  pinMode(gled,OUTPUT);
  pinMode(bled,OUTPUT);
  
}

void loop()
{
  Serial.println(msg);
  while(Serial.available()==0){
  }
  color=Serial.readString();
  if(color=="red"){
    digitalWrite(rled,HIGH);
    digitalWrite(gled,LOW);
    digitalWrite(bled,LOW);}
  if(color=="green"){
    digitalWrite(rled,LOW);
    digitalWrite(gled,HIGH);
    digitalWrite(bled,LOW);}
  if(color=="blue"){
    digitalWrite(rled,LOW);
    digitalWrite(gled,LOW);
    digitalWrite(bled,HIGH);}
  
}