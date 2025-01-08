int bpin1=12;
int bpin2=11;
int bval1,bval2;
int dt1=400;
int dt2=500;
int ledbright;
int ledpin=3;
int buzzpin=2;
void setup()
{
  pinMode(bpin1, INPUT);
  pinMode(bpin2, INPUT);
  pinMode(ledpin,OUTPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  bval1=digitalRead(bpin1);
  bval2=digitalRead(bpin2);
  Serial.print("Button 1=");
  Serial.print(bval1);
  Serial.print(", ");
  Serial.print("Button 2=");
  Serial.print(bval2);
  Serial.println();
  delay(dt1);
  
  if (bval1==0){
    ledbright=ledbright+5;
  }
  
  if(bval2==0){
    ledbright=ledbright-5;
  }
  Serial.println(ledbright);
  if(ledbright>255){
    ledbright=255;
    digitalWrite(buzzpin,HIGH);
    delay(dt2);
    digitalWrite(buzzpin,LOW);

  }
  if(ledbright<0){
    ledbright=0;
    digitalWrite(buzzpin,HIGH);
    delay(dt2);
    digitalWrite(buzzpin,LOW);
  }
  
  
  analogWrite(ledpin,ledbright);
  
}