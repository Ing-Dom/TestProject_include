#include <Arduino.h>

void setup() {
  pinMode(OUTPIN1, OUTPUT);
  pinMode(OUTPIN2, OUTPUT);
}

void loop() {
  digitalWrite(OUTPIN1, HIGH);
  digitalWrite(OUTPIN2, HIGH);
  delay(500);
  digitalWrite(OUTPIN1, LOW);
  digitalWrite(OUTPIN2, LOW);
  delay(600);
}