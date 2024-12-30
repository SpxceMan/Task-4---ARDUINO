float radius=2.0, pi=3.141592653;
float area;
int time = 750;
String m1="A circle with radius ";
String m2=" has an area of ";


void setup()
{
 
  Serial.begin(115200);
}

void loop()
{
  area = pi*radius*radius;
  Serial.print(m1);
  Serial.print(radius);
  Serial.print(m2);
  Serial.println(area);
  delay(time);
  radius += .5;
}
