void setup() {
  Serial.begin(9600);  // Inicia a comunicação serial
  while (!Serial);     // Aguarda a inicialização da serial (necessário para alguns Arduinos)

  Serial.println("Digite a medida em polegadas:");
}

void loop() {
  
  
  
   //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|        LOPAL - EX_06         |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  
  // Verifica se há dados disponíveis na serial
  if (Serial.available() > 0) {
    float polegadas = Serial.parseFloat();         // Lê o número digitado
    float centimetros = polegadas * 2.54;          // Converte para cm

    Serial.print(polegadas);
    Serial.print(" polegada(s) equivalem a ");
    Serial.print(centimetros);
    Serial.println(" centimetro(s).");

    Serial.println("Digite outra medida em polegadas:");
  }
}










