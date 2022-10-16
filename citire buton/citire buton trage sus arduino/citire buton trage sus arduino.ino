int prevValue = 1;
int value = 1;
int apasari = 0;

void setup() {
  pinMode(8, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  prevValue = value;
  value = digitalRead(8);

  if (prevValue == LOW && value == HIGH) {
    apasari++;
    Serial.println(apasari);
  }
}
