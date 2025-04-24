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
  caixaPequena = 32767;
  caixaGrande = 32767;
  
  Serial.println(caixaPequena);
  Serial.println(caixaGrande);
  delay (2000);
}