#include <Arduino.h>


const int LED = 23;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(700);
  digitalWrite(LED, LOW);
  delay(300);
  int a = digitalRead(LED);
  
}
