// Faça um programa que receba um número e exiba o seu dobro

// Variáveis
int numero = 0;
int dobro = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  
     //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|        LOPAL - EX_03         |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  
  // Entrada
  Serial.println("Digite um numero:");
  while (!Serial.available()) {}
  numero = Serial.parseInt();

  // Processamento
  dobro = numero * 2;

  // Saída
  Serial.println("Numero digitado: " + String(numero));
  Serial.println("Dobro do numero: " + String(dobro));
}

