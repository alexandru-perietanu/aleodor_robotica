#include "SoftwareSerial.h"

SoftwareSerial MyBlue(8, 9);
String val = "0";

void setup() {
  MyBlue.begin(9600);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}
void loop() {

  if (MyBlue.available()) {
    val = MyBlue.readString();
    Serial.println(val);
    analogWrite(3, val.toInt());
  }
}