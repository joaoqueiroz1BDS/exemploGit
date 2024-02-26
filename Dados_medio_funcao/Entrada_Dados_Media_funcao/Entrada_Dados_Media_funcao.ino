//Declaração das variaveis / numeros Reais

float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //inicia a comunicação com o Serial monitor

  Serial.begin(9600);

  delay(1000);
}

void loop() {
  Serial.print("Digite a nota1:");
  //le o valor do serial e guarda na variavel nota1
  nota1 = aguardaEntrada();
  Serial.println(nota1);


  Serial.print("digite a nota2:");

  nota2 = aguardaEntrada();
  Serial.println(nota2);


  Serial.print("digite a nota3:");

  nota3 = aguardaEntrada();
  Serial.println(nota3);

  //atribuição dos pesos
  Serial.print("digite o peso1:");
  peso1 = aguardaEntrada();
  Serial.println(peso1);


  //atribuição dos pesos
  Serial.print("digite o peso2:");
  peso2 = aguardaEntrada();
  Serial.println(peso2);

  //atribuição dos pesos
  Serial.print("digite o peso3:");
  peso3 = aguardaEntrada();
  Serial.println(peso3);

  //calculo da media ponderada:
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("a media ponderada sera: ");
  Serial.println(media, 1);
  delay(1000);
}

//criando uma funçao chamada
float aguardaEntrada() {
  while (!Serial.available()) {
    //aguarda ate que um valor seja digitado
  }

  //retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}