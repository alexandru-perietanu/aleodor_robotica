#include "SoftwareSerial.h"

SoftwareSerial MyBlue(8, 9);
int val;
int ON2 = 0;
int ON3 = 0;
int ON4 = 0;
int ON5 = 0;
int ON6 = 0;

void setup() {
  MyBlue.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop() {

  if (MyBlue.available()) {
    val = MyBlue.read();
  }

  if (val == '2') {
    ON2 = !ON2;
  }
  if (val == '3') {
    ON3 = !ON3;
  }
  if (val == '4') {
    ON4 = !ON4;
  }
  if (val == '5') {
    ON5 = !ON5;
  }
  if (val == '6') {
    ON6 = !ON6;
  }
  digitalWrite(2, ON2);
  digitalWrite(3, ON3);
  digitalWrite(4, ON4);
  digitalWrite(5, ON5);
  digitalWrite(6, ON6);
  val = 0;
}