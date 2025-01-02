int ypin=6;
int rpin=9;
int ytime=500;
int rtime=500;
int yblink=3;
int rblink=3;
int j;
void setup()
{
  pinMode(ypin, OUTPUT);
  pinMode(rpin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(j=1;j<=yblink;j++){
  
  digitalWrite(ypin, HIGH);
  delay(ytime); 
  digitalWrite(ypin, LOW);
    delay(ytime); 
  }
  
  for(j=1;j<=rblink;j++){
  
  digitalWrite(rpin, HIGH);
  delay(rtime); 
  digitalWrite(rpin, LOW);
    delay(rtime); 
  }
}