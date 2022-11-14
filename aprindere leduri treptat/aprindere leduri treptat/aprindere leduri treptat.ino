int val = 0;
int pins[] = { 5, 6, 9, 10, 11 };

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);

  int newVal = map(val, 0, 1023, 0, 1275);
  //Serial.println(val);
  Serial.println(newVal);

  int smallVal = newVal / 255;
  Serial.println(smallVal);
  int i;
  for (i = 0; i < 5; i++) {
    analogWrite(pins[i], 0);
  }
  for (i = 0; i < smallVal; i++) {
    analogWrite(pins[i], 255);
  }
  analogWrite(pins[i],  newVal - (smallVal * 255));
}