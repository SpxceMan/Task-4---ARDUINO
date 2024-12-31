int myvoltpin=A2;
int readval;
float v2;
int time;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  readval=analogRead(myvoltpin);
  v2=(5./1023.)*readval;
  Serial.println(v2);
  delay(time);
  
  
  
}