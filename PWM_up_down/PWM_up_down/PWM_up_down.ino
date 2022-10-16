int val = 0;
int sens = 1;

void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
    val += 5 * sens;
    if (val >= 255) {
      val = 255;
      sens = sens * -1;
    }
    if (val < 0) {
      val = 0;
      sens = sens * -1;
    }
    analogWrite(11, val);
    delay(50);
}
