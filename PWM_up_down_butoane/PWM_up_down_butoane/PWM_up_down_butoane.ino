int val = 0;
int left = 1;
int right = 1;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
}

void loop() {

  left = digitalRead(8);
  right = digitalRead(9);

  if (left == LOW) {
    val -= 10;
    if (val < 0) {
      val = 0;
    }
  }

  if (right == LOW) {
    val += 10;
    if (val > 255) {
      val = 255;
    }
  }

  analogWrite(11, val);
  delay(50);
}