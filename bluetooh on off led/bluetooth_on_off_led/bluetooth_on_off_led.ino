#include "SoftwareSerial.h"

SoftwareSerial MyBlue(8, 9);
int ON = 0;

void setup() {
  MyBlue.begin(9600);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop() {

  if (MyBlue.available()) {
    ON = MyBlue.read();
    Serial.println(ON);
  }

  if (ON == '0') {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }

  if (ON == '1') {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
  }
}