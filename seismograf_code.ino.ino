int water = 0;
void setup (){
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}
void loop()
{
  water = analogRead(A0);
  Serial.println(water);
  if (water > 105) {
    digitalWrite(2, HIGH);
  } else{
    digitalWrite(2, LOW);
  }
  delay(50);
}