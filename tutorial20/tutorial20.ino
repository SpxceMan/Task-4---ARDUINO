int rpin=8;
int gpin=10;
int bpin=9;
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
  


}