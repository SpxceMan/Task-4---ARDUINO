int numblink;
String msg="How many blinks do you want?"; 
int j;
int time=500;
int rpin=12;
void setup()
{
  Serial.begin(9600);
  pinMode(rpin,OUTPUT);
}

void loop()
{
	Serial.println(msg);
  while(Serial.available()==0){
  }
  numblink=Serial.parseInt();
  for(j=1;j<=numblink;j++){
    digitalWrite(rpin,HIGH);
    delay(time);
    digitalWrite(rpin,LOW);
    delay(time);
  
  }

}