//While - e uma estrutura de repeticao que so executa repeticao/laco enquanto a condicao for verdadeira

int numero1 = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //While
  int contadorWhile = 0;
  
  while(contadorWhile <= 100){
  Serial.println(String(contadorWhile));
    //contadorWhile = contadorWhile + 1;
    contadorWhile++;
    
  } 
   delay(1000);
   }