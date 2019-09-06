#include <Ultrasonic.h>

Ultrasonic ultrassom(12, 13);
int distancia;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  distancia = ultrassom.read();

  if(distancia <= 10) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  
  delay(1000);
}
