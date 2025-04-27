int pinoSensor = 2;
int pinoLed = 13;

void setup() {
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int estadoSensor = digitalRead(pinoSensor);

  if (estadoSensor == HIGH) {
    digitalWrite(pinoLed, HIGH);
    Serial.println("Movimento detectado!");
  } else {
    digitalWrite(pinoLed, LOW);
    Serial.println("Sem movimento...");
  }

  delay(1000);
}
