/*faça um programa que receba um codigo de origem e informe sua procedencia conforme a lista abaixo
   CÓDIGO DE ORIGEM			PROCEDÊNCIA 
    	1							Sul
        2							Norte
        3							Leste
        4							Oeste
        5 ou 6 						Nordeste
        7, 8 ou 9 					 Sudeste
        10 até 20 					Centro-Oeste
        acima de 20 				Código ainda sem definição
*/ 



// C++ code
//Variaveis
int codigoOrigem;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o codigo de origem do produto");
  while(! Serial.available());
  codigoOrigem = Serial.parseInt();
  
  if(codigoOrigem == 1){
    Serial.println("o produto e do Sul");
    
  }else if(codigoOrigem == 2){
  Serial.println("o produto e do Norte");
    
  }else if (codigoOrigem == 3){
  Serial.println("o produto e do Leste");
  
  }else if(codigoOrigem == 4){
  Serial.println("o produto e do Oeste");
  
  }else if(codigoOrigem <= 6){
  Serial.println("o produto e do Nordeste");
    
  }else if(codigoOrigem >= 7 && codigoOrigem <= 9 ){
   Serial.println("o produto e do Sudeste");
  
  }else if(codigoOrigem >= 10 && codigoOrigem <= 20){
  Serial.println("o produto e do Centro-Oeste");
  
  }else{
  Serial.println("Codigo ainda sem definicao");
  }
  delay(3000);
  }