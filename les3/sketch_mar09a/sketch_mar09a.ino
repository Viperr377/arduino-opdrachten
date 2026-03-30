void setup(){
  Serial.begin(115200);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop(){
  int ldr_value = analogRead(A0);

   Serial.print("{\"LDR\":");
   Serial.print(ldr_value);
   Serial.print("}");

   if(ldr_value < 850) {
    int blink_delay = random(100, 501);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(blink_delay);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(blink_delay);
   } else {
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
   }
   delay(10);
}
