#define IN1 10
#define IN2 11
#define IN3 5
#define IN4 6
int val;

void setup() {
  pinMode(8, INPUT_PULLUP);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
void loop() {
  int dir = digitalRead(8);
  val = analogRead(A0);
  int PWM_VAL = map(val, 0, 1023, 0, 255);


  if (dir == LOW) {
    analogWrite(IN1, PWM_VAL);
    digitalWrite(IN2, LOW);
    analogWrite(IN3, PWM_VAL);
    digitalWrite(IN4, LOW);
  } else {
    digitalWrite(IN1, LOW);
    analogWrite(IN2, PWM_VAL);
    digitalWrite(IN3, LOW);
    analogWrite(IN4, PWM_VAL);
  }

}