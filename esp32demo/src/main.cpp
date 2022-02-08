#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(33, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);
  digitalWrite(33, HIGH);
  delay(1000);
  digitalWrite(33, LOW);
  delay(1000);
}