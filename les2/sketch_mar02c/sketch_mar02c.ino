void setup() {
Serial.begin(115200);

pinMode(3, OUTPUT);
pinMode(5, INPUT);
pinMode(6, OUTPUT);

}

void loop() {
int A = random(999);
int B = random(999);
int C = random(999);
int D = random(999);

Serial.println("----");
Serial.println("A = "); Serial.println(A);
Serial.println("B = "); Serial.println(B);
Serial.println("C = "); Serial.println(C);
Serial.println("D = "); Serial.println(D);

digitalWrite(3, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);

if (A > B || A < C) digitalWrite(3, HIGH);
if (C > A && A < B) digitalWrite(5, HIGH);
if (B > C && B > A && C < A) digitalWrite(6, HIGH);

if (D > A && D > B && D > C){
  for (int i = 0; i < 6; i++){
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(100);

    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
}
delay(10000);
}
