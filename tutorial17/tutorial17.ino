int potval;
int time=500;
int potpin=A0;
int rpin=7;

void setup() {
  pinMode(potpin,INPUT);
  pinMode(rpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potval=analogRead(potpin);
  Serial.println(potval);
  delay(time);
  
  while(potval>100){
    digitalWrite(rpin,HIGH);
    potval=analogRead(potpin);
    Serial.println(potval);
    delay(time);
  }
  digitalWrite(rpin,LOW);
}