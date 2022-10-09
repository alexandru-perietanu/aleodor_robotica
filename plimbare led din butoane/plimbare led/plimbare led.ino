int prevValueLeft = HIGH;
int valueLeft = HIGH;

int prevValueRight = HIGH;
int valueRight = HIGH;


void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  prevValueLeft = valueLeft;
  valueLeft = digitalRead(8);

  prevValueRight = valueRight;
  valueRight = digitalRead(9);

  if (prevValueLeft == HIGH && valueLeft == LOW) { 
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }

  if (prevValueRight == HIGH && valueRight == LOW) {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
  }
}
