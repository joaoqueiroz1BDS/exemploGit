//declaraçao da constante que armazena o pino do push button
#define pinoButton 8

//declaracao da varivel de estado do botao
bool status = false;

int led = 4;

void setup() {
  pinMode(4, OUTPUT);
  //definir a modalidade do pino
  pinMode(pinoButton, INPUT);

  Serial.begin(9600);

  delay(500);
}

void loop() {
  //lendo o pino digital atraves da constante
  //Serial.println(digitalRead(pinoButton));
  if (digitalRead(pinoButton) == 1 && status == false) {
    digitalWrite(4, HIGH);
    Serial.println("Led ligado");
    status = true;
  } 
  else if (digitalRead(pinoButton) == 1 && status == true) {
    digitalWrite(4, LOW);
    Serial.println("Led desligado");
    status = false;
  }
// 

  
  delay(500);
}
