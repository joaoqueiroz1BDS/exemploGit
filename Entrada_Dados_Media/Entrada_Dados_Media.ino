//Declaração das variaveis / numeros Reais

float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //inicia a comunicação com o Serial monitor

  Serial.begin(9600);

  delay(1000);
}

void loop() {
  Serial.print("Digite a nota1:");
  //while = comando de repetiçao "enquanto"
  while (Serial.available() == 0) {
    //aguarda a entrada de valores do usario
  }
  //le o valor do serial e guarda na variavel nota1
  nota1 = Serial.parseFloat();
  Serial.println(nota1);
  

  Serial.print("digite a nota2:");
  while(Serial.available() == 0) {
    //aguarda a entrada da nota2
  }  
  
  nota2 = Serial.parseFloat();
  Serial.println(nota2);
  
  
  Serial.print("digite a nota3:");
  while(Serial.available() == 0) {
    //aguarda a entrada da nota3
  }  
  
  nota3 = Serial.parseFloat();
  Serial.println(nota3);
  
  //atribuição dos pesos
  Serial.print("digite o peso1:");
  while(Serial.available() == 0){
    //aguarde o peso1
  }
  peso1 = Serial.parseFloat();
  Serial.println(peso1);
  
  
   //atribuição dos pesos
  Serial.print("digite o peso2:");
  while(Serial.available() == 0){
    //aguarde o peso2
  }
  peso2 = Serial.parseFloat();
  Serial.println(peso2);
  
   //atribuição dos pesos
  Serial.print("digite o peso3:");
  while(Serial.available() == 0){
    //aguarde o peso3
  }
  peso3 = Serial.parseFloat();
  Serial.println(peso3);
  
  //calculo da media ponderada:
  media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);
  
  Serial.print("a media ponderada sera: ");
  Serial.println(media,1);
  delay(1000);
  
}

//criando uma funçao chamada
float aguardaEntrada() {
  while(!Serial.available()){
    //aguarda ate que um valor seja digitado

  }

  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();



}