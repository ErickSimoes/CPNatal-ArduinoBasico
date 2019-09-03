#include <Ultrasonic.h>

Ultrasonic ultrassom(12, 13);
int distancia;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distancia = ultrassom.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distancia);
  delay(1000);
}
