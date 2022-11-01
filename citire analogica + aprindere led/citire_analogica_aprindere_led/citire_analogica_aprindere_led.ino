void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  Serial.println(val);
  int ledVal = map(val, 0 , 1023, 0, 255);

  analogWrite(9, ledVal);
}
