int buttonDir;
int buttonEsq;
bool dir = true;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  buttonDir = digitalRead(2);
  buttonEsq = digitalRead(3);
  
  if(buttonDir == HIGH) {
    dir = false;
  } else{
    dir = true;
  }

  if(buttonEsq == HIGH) {
    dir = true;
  } else{
    dir = false;
  }
  
  if(dir) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }
}
