int rpin=8;
int gpin=9;
int bpin=10;
String color;
String msg="What color do u want?";
void setup()
{
  Serial.begin(9600);
  pinMode(rpin,OUTPUT);
  pinMode(gpin,OUTPUT);
  pinMode(bpin,OUTPUT);
}

void loop()
{
  Serial.println(msg);
  while(Serial.available()==0){
    }
  color=Serial.readString();
  
  if(color=="red" || color=="Red")
  {digitalWrite(rpin,HIGH);
   digitalWrite(gpin,LOW);
   digitalWrite(bpin,LOW);}
  if(color=="green" || color=="Green")
  {digitalWrite(rpin,LOW);
   digitalWrite(gpin,HIGH);
   digitalWrite(bpin,LOW);}
  if(color=="blue" || color=="Blue")
  {digitalWrite(rpin,LOW);
   digitalWrite(gpin,LOW);
   digitalWrite(bpin,HIGH);}
  if (color=="off" || color=="Off")
  {digitalWrite(rpin,LOW);
   digitalWrite(gpin,LOW);
   digitalWrite(bpin,LOW);}
  if(color=="yellow" || color=="Yellow")
  {analogWrite(rpin,255);
   analogWrite(gpin,255);
   analogWrite(bpin,0);}
  if(color=="magenta"|| color=="Magenta")
  {analogWrite(rpin,255);
   analogWrite(gpin,0);
   analogWrite(bpin,255);}
  if(color=="cyan"|| color=="Cyan")
  {analogWrite(rpin,0);
   analogWrite(gpin,255);
   analogWrite(bpin,255);}
  


}