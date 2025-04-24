// Faça um programa que receba o ano de nascimento de uma pessoa e
// o ano atual. Calcule e imprima:
// a. A idade dessa pessoa
// b. Essa idade convertida em semana

// Variáveis
int anonascimento = 0;
int anoatual = 0;
int idade = 0;
int idadesemana = 0;

void setup() {
  Serial.begin(9600);
}

void loop()
{
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|        LOPAL - EX_02         |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  // Entrada
  Serial.println("Digite o ano de nascimento:");
  while (!Serial.available()) {}
  anonascimento = Serial.parseInt();

  Serial.println("Digite o ano atual:");
  while (!Serial.available()) {}
  anoatual = Serial.parseInt();

  // Processamento
  idade = anoatual - anonascimento;
  idadesemana = idade * 52;

  // Saída
  Serial.println("Idade: " + String(idade));
  Serial.println("Idade em semanas: " + String(idadesemana));

  // Aguarda antes de repetir
  while (Serial.available()) { Serial.read(); } // limpa o buffer
  delay(5000);
}
