// constante para o pino Buzzer
#define pinoButton 8
#define pinoBuzzer 2
#define pinoRed 3
#define pinoButton2 9
void setup() {

pinMode(9, INPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
  //////modo do pino
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  delay(1000);
  
}

void loop() {
   if (digitalRead(pinoButton) == 1) {
    digitalWrite(3, HIGH);
    tone(2, 252);
    
    
  }

  
 
   
 else if (digitalRead(pinoButton) == 0) {
    digitalWrite(3, LOW);
    noTone(pinoBuzzer);
    /////////////////////////////////////////////////////
    if (digitalRead(pinoButton2) == 1) {
    digitalWrite(3, HIGH);
    tone(2, 228);
    
    
  }

  
 
   
 else if (digitalRead(pinoButton2) == 0) {
    digitalWrite(3, LOW);
    noTone(pinoBuzzer);
    

    
  }
 }
}

