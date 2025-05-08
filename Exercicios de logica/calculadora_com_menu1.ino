// C++ code
//

float numero1 = 0.0;
float numero2 = 0.0;
float soma;
int escolhaDaOperacao;
int contador = 0;
float subtracao = 0;
float multiplicacao = 0;
float divisao = 0;

void setup()
{
 Serial.begin(9600);
  
  
  do{
    
    Serial.println("Bem-vindo(a) a calculadora mega inteligente ");
    Serial.println("Escolha uma das opcoes/operacoes: ");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtracao");
    Serial.println("3 - Multiplicacao");
    Serial.println("4 - Dividir");

    while(!Serial.available()){}

    escolhaDaOperacao = Serial.parseInt();

    Serial.println("Agora, para realizar a operacao digite o 1º numero: ");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o 2º numero: ");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    
    
    switch(escolhaDaOperacao){
    	
    case 1: 
      soma = numero1 + numero2;
     Serial.println("WOW!! O resultado foi: " + String(soma));
      
    break;
      
    case 2:  subtracao = numero1 - numero2;
     Serial.println("WOW!! O resultado foi: " + String(subtracao));
      
    break;
      
    case 3:  multiplicacao = numero1 * numero2;
     Serial.println("WOW!! O resultado foi: " + String(multiplicacao));
      
    break;
      
    case 4:  divisao = numero1 / numero2;
     Serial.println("WOW!! O resultado foi: " + String(divisao));
      
    break;
      
      default:
      Serial.println("Opcao invalida");
      
    }
    
   
    Serial.println("Voce deseja continuar? se sim, digite [s], se nao digite [n]");
    while(! Serial.available ()){}
    
    if(Serial.readString() == "s"){
    contador++;
    }
    else{
    contador = 0;
    Serial.println("Ate breve, obrigado por usar calculadora mega inteligente");
    Serial.println("Caso queira voltar, reinicie o sistema.");
    }
    
  }
  while(contador != 0);
}


  
void loop()
{
  
}