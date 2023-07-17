void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  int valPot = analogRead(A0);
  Serial.println(valPot); 
}