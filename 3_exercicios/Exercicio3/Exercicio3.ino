float sal,salreceber,grat,imp;

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

  grat = sal * 5/100;
  Serial.print("Gratificacao: ");
  Serial.println(grat);

  imp = sal * 7/100;
  Serial.print("Imposto: ");
  Serial.println(imp);

  salreceber = sal + grat - imp;
  Serial.print("Salario a receber: ");
    Serial.println(salreceber);
  delay(1000);



 
}
