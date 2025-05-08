/*Faça um programa receba dois valores e imprima qual é o maior número
digitado.*/

// C++ code
//Variaveis
int numero1 = 0;
int numero2 = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o primeiro numero");
  while(! Serial.available());
  numero1 = Serial.parseInt();
  
  Serial.println("Digite o segundo numero");
  while(! Serial.available());
  numero2 = Serial.parseInt();
  
  if(numero1 > numero2){
  Serial.println("o primeiro numero e maior que o segundo");
    
  }else{
    Serial.println("o primeiro numero e menor que o segundo");
  }
  
  delay(3000);
}