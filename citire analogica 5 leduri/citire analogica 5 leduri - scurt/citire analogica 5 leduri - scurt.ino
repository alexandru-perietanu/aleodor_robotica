int val = 0;

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

  for (int i = 8; i <= 12; i++) {
    digitalWrite(i, LOW);  
  }
  for (int i = 8; i < 8 + smallVal; i++) {
    digitalWrite(i, HIGH);  
  }
}