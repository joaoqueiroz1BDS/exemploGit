float sal,perc,aumento,novosal;

void setup() {
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  Serial.print("Digite o salario: ");
   while (Serial.available() == 0){

   }
  sal = Serial.parseFloat();
  Serial.println(sal);

  Serial.print("Percentual de aumento: ");
 while (Serial.available() == 0){

 }
 perc = Serial.parseFloat();
 Serial.println(perc);

 aumento = sal * (perc/100);
 Serial.print("Valor aumento: ");
 Serial.println(aumento);

 novosal = sal + aumento;
  Serial.print("Novo salario: ");
    Serial.println(novosal);
    delay(5000);


 
}
