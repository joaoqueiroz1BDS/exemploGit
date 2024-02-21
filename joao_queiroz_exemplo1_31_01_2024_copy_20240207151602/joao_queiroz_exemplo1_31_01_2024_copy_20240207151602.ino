//Declaração das variáveis que representam os pinos dos leds
int ledamarelo = 8;
int ledvermelho = 9;
int ledverde = 10;

void setup() {
  //Definindo os tipos de pinos
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledverde, OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(ledamarelo, HIGH);
  delay(1000);
  digitalWrite(ledamarelo, LOW);
  delay(1000);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
}
