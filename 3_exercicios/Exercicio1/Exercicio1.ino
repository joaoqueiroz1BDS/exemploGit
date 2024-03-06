float salario, Novosalario;

void setup() {
  Serial.begin(9600);
  delay(1000);



}

void loop() {
  Serial.println("Digite o salario: ");
   while (Serial.available() == 0){

   }
  salario = Serial.parseFloat();
  Serial.println(salario);



    Novosalario = salario + (salario * 25/100);
    Serial.print("Novo salario: ");
    Serial.println(Novosalario);
  


}
