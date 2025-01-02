int potpin=A1;
int grnpin=10;
int potval;
float ledval;

void setup()
{
  pinMode(potpin, INPUT);
  pinMode(grnpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  potval=analogRead(potpin);
  ledval=(255./1023.)*potval;
  analogWrite(grnpin,ledval);
  Serial.println(ledval);
  delay(500);
}