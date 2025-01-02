int mypin=A2;
int readval;
float v2;
int redpin=9;
int time=1000;

void setup()
{
  pinMode(mypin, INPUT);
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  readval=analogRead(mypin);
  v2=(5./1023.)*readval;
  Serial.print("Potentiometer voltage is: ");
  Serial.println(v2);
  
  if(v2>4.0){
  	digitalWrite(redpin,HIGH);
  
  }
  
  if(v2<4.0){
  	digitalWrite(redpin,LOW);
  }
  delay(time);
}