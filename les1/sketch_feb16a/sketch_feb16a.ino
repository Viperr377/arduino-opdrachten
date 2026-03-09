void setup() {
  // put your setup code here, to run once:
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  //M
digitalWrite(D3, HIGH);
digitalWrite(D5, HIGH);
digitalWrite(D6, HIGH);
delay(1500);
digitalWrite(D3, LOW);
digitalWrite(D5, LOW);
digitalWrite(D6, LOW);
delay(1500);
digitalWrite(D3, HIGH);
digitalWrite(D5, HIGH);
digitalWrite(D6, HIGH);
delay(1500);
digitalWrite(D3,LOW);
digitalWrite(D5,LOW);
digitalWrite(D6,LOW);
}
