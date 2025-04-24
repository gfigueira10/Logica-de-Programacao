//Aprendendo sobre váriaveis
//Resumidamente são rótulos que podem armazenar valores
// temporariamente que podem variar com o passar do tempo
// e que tem um tipo de dado específico ( textos, numéricos ou booleanos)

//Configuração inicial do Arduino
void setup()
{
  Serial.begin(9600);//inicia o serial
}

// Váriaveis
int idade = 0;

// Looping infinito - funciona até desligar o arduino
void loop()
{
  idade = idade + 1;//1
  idade = idade + 1;//2
  idade = idade + 1;//3
  
  Serial.println(String(idade) );//Imprime o valor de idade - converter para texto
  delay(1000);
}