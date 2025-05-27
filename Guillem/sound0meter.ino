void setup() {
  Serial.begin(9600);
  
}

void loop() {
  int valorSensor = analogRead(A0);
  float voltaje = (valorSensor/1024.0) *5.0;
  Serial.println(valorSensor);
  Serial.println(voltaje);
   int temperatura = (voltaje -.5) * 1000;
  int frecuencia = map(temperatura, 190, 300, 200, 900);
  Serial.println(temperatura);
  Serial.println(frecuencia);
  tone(3,frecuencia,50);
  delay(550);
}
