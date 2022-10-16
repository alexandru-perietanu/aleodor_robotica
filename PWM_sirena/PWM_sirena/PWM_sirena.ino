int valLeft = 0;
int valRight = 0;
int sensLeft = 1;
int sensRight = 1;
int left = 1;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  if (left == 1) {
    valLeft += 10 * sensLeft;
    if (valLeft > 255) {
      valLeft = 255;
      sensLeft = sensLeft * -1;
    }

    if (valLeft < 0) {
      valLeft = 0;
      sensLeft = sensLeft * -1;
      left = 0;
    }
  } else {
    valRight += 10 * sensRight;
    if (valRight > 255) {
      valRight = 255;
      sensRight = sensRight * -1;
    }

    if (valRight < 0) {
      valRight = 0;
      sensRight = sensRight * -1;
      left = 1;
    }
  }

  analogWrite(10, valLeft);
  analogWrite(11, valRight);

  delay(5);
}