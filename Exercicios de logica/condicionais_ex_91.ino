/*Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
inferior a 500 reais. Escreva um programa que receba o salário de um
funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
funcionário não tenha direito a aumento.
*/


// C++ code
//Variaveis
float salario;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
 Serial.println("digite seu salario");
 while(!Serial.available());
  salario = Serial.parseFloat();//guarda a resposta do usuario
  
  //Processamento
  if(salario < 500){
  salario = salario * 1.3;
  Serial.println("salario reajustado para: R$" + String(salario));  
  } else {
  Serial.println("o funcionario nao tem direito ao aumento");  
  }
  
  delay(10000);
}