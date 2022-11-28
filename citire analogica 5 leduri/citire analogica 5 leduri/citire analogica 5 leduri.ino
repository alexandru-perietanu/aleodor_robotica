int val = 0;
int state8 = LOW;
int state9 = LOW;
int state10 = LOW;
int state11 = LOW;
int state12 = LOW;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);

  int smallVal = map(val, 0, 1023, 0, 5);
  Serial.println(val);
  Serial.println(smallVal);

  if (smallVal == 0) {
    state8 = LOW;
    state9 = LOW;
    state10 = LOW;
    state11 = LOW;
    state12 = LOW;
  }
  if (smallVal == 1) {
    state8 = HIGH;
    state9 = LOW;
    state10 = LOW;
    state11 = LOW;
    state12 = LOW;
  }
  if (smallVal == 2) {
    state8 = HIGH;
    state9 = HIGH;
    state10 = LOW;
    state11 = LOW;
    state12 = LOW;
  }
  if (smallVal == 3) {
    state8 = HIGH;
    state9 = HIGH;
    state10 = HIGH;
    state11 = LOW;
    state12 = LOW;
  }
  if (smallVal == 4) {
    state8 = HIGH;
    state9 = HIGH;
    state10 = HIGH;
    state11 = HIGH;
    state12 = LOW;
  }
  if (smallVal == 5) {
    state8 = HIGH;
    state9 = HIGH;
    state10 = HIGH;
    state11 = HIGH;
    state12 = HIGH;
  }

  digitalWrite(8, state8);
  digitalWrite(9, state9);
  digitalWrite(10, state10);
  digitalWrite(11, state11);
  digitalWrite(12, state12);
}