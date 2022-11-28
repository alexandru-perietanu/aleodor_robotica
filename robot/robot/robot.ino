#include <SoftwareSerial.h>
char inputByte;

#define IN1 5
#define IN2 6
#define IN3 10
#define IN4 11

SoftwareSerial MyBlue(2, 3);  // RX | TX
void setup() {
  Serial.begin(9600);
  MyBlue.begin(9600);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  while (MyBlue.available() > 0) {
    inputByte = MyBlue.read();
    Serial.println(inputByte);
    if (inputByte == 'U') {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    } else if (inputByte == 'S') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    } else if (inputByte == 'D') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    } else if (inputByte == 'R') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);

      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    } else if (inputByte == 'L') {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
  }
}