const int offset = 0;   
const int amplitude = 500;
const int frequencia = 1; 
const float omega = 2 * PI * frequencia; 

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  float tempo = millis() / 1000.0;
  float valorSenoide = offset + ( amplitude * sin(omega * tempo) );
  Serial.println(valorSenoide); 
}
