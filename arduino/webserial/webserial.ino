void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A6));
  delay(100);
}
