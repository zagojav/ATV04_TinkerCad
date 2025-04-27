const int ldrPin = A0;
const int lampadaPin = 8;

void setup() {
  pinMode(lampadaPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leituraLDR = analogRead(ldrPin);
  Serial.println(leituraLDR);

  if (leituraLDR < 500) {
    digitalWrite(lampadaPin, HIGH);
  } else {
    digitalWrite(lampadaPin, LOW);
  }

  delay(500);
}
