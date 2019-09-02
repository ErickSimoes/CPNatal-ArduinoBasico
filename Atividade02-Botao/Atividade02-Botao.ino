int buttonVal;

void setup() {
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  buttonVal = digitalRead(2);
  if(buttonVal == HIGH) {
    // se não estiver pressionado
  } else {
    // se estiver pressionado
  }
  delay(100);
}
