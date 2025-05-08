 /*Faça um programa que receba um número do usuário e informe se este
número é par ou ímpar.*/

// C++ code
//Variaveis
int numero = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero");
  while(! Serial.available());
  numero = Serial.parseInt();
  
  if(numero % 2 == 0){
  Serial.println("o numero e par");
    
  }else{
  Serial.println("o numero e impar");
  }
    
  delay(3000);
}