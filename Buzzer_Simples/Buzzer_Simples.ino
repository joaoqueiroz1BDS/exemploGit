// constante para o pino Buzzer
#define pinoBuzzer 2
#define pinoRed 3
void setup() {
 
  Serial.begin(9600);
 //////modo do pino
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
 
  delay(1000);

}

void loop() {
 digitalWrite(3, HIGH);
 tone(2, 523);
 delay(1000);
 digitalWrite(3, LOW);
 noTone(pinoBuzzer);
 delay(1000);

}
