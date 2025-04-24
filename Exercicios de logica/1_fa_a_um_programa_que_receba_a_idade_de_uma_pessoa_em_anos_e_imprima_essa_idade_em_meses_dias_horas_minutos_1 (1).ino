// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias,Horas, Minutos

//variáveis
int idade = 0;//inicia a idade
int idademeses = 0;
int idadedias = 0;
int idadehoras = 0;
int idademinutos = 0;
  
void setup()
{
  Serial.begin(9600);
}


void loop()
{
  
  
  //Cabeçalho
  Serial.println("|------------------------------|");//primeira linha
  Serial.println("|                              |");//segunda linha
  Serial.println("|        LOPAL - EX_01         |");//terceira linha
  Serial.println("|                              |");//quarta linha
  Serial.println("|------------------------------|");//ultima linha
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha 
  
 
  
  //entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuário
  while( ! Serial.available() ){}//Aguarda o usuário digitar
  idade =  Serial.parseInt();
  
  //processamento
  idademeses= idade * 12;
  idadedias= idade * 365;
  idadehoras= idade * 8766;
  idademinutos= idade * 525960;
    
  //saida
  Serial.println("Sua idade em meses " +String(idademeses) );
  Serial.println("Sua idade em dias " +String(idadedias) );
  Serial.println("Sua idade em horas " +String(idadehoras) );
  Serial.println("Sua idade em minutos " +String(idademinutos) );
}