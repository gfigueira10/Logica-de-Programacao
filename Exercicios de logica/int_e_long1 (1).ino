// C++ code
//
void setup()
{
  Serial.begin(9600);
}

//Inicialização de Variáveis
int caixaPequena = 0; //  -32768 a 32767 (faixa inicial e final do int)
long caixaGrande =0; // -2147483648 a 2147483647 (faixa inicial e final do long)

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
  
  
  
  caixaPequena = 32767;
  caixaGrande = 32767;
  
  Serial.println(caixaPequena);
  Serial.println(caixaGrande);
  delay (2000);
}