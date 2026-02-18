void setup() {
  pinMode(8, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  if (digitalRead(8) == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }

}
