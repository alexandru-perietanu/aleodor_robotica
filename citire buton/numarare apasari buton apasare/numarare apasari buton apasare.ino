int prevValue = HIGH;
int value = HIGH;
int apasari = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  prevValue = value;
  value = digitalRead(8);

  if (prevValue == HIGH && value == LOW) {
    apasari++;
    
  }
  Serial.println(apasari);
}
