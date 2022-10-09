int prevValue = 1;
int value = 1;
int apasari = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  prevValue = value;
  int value = digitalRead(8);

  if (prevValue == LOW && value == HIGH) {
    apasari++;
    Serial.println(apasari);
  }

}
