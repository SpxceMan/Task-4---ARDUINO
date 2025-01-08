int lightpin=A0;
int buzzpin=8;
int lightval;
int dt;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(buzzpin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  lightval=analogRead(lightpin);
  dt=(9./550.)*lightval-(9.*200./550.)+1.;
  Serial.println(dt);
  digitalWrite(buzzpin,HIGH);
  delay(dt);
  digitalWrite(buzzpin,LOW);
  delay(dt);
}