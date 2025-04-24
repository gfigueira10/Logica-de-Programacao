// C++ code
//
void setup()
{
 Serial.begin(9600);// Inicia a Serial
}

//Variáveis - criação e inicialização
 int numero1 = 0;
 int numero2 = 0; 
 int soma = 0;
 int subtracao = 0;
 int multiplicacao = 0;
 float divisao = 0;

void loop()
{
  //entrada
  
  Serial.println("Digite o primeiro numero");//pergunta
  while( ! Serial.available () );//Espera o usuario digitar/dar um <Enter>
 numero1 = Serial.parseInt();//resposta do usuario
   Serial.println("Digite o segundo numero");//pergunta
   while( ! Serial.available () );//Espera o usuario digitar/dar um <Enter>
 numero2 =  Serial.parseInt();//resposta do usuario; 
  
 //processamento
 soma = numero1 + numero2;//7 - inteiro (int)
 subtracao = numero1 - numero2;//3 - inteiro(int)
 multiplicacao = numero1 * numero2;//10 - inteiro(int)
  
  //converte numero1 e numero2 para float antes da conta
 divisao = float(numero1) / float(numero2);//2.5 - real(float)
  
  //saída
  Serial.println( " Resultado da soma e: " + String(soma) );
  Serial.println( " Resultado da subtracao e: " + String(subtracao) );
  Serial.println( " Resultado da multiplicacao e: " + String(multiplicacao) );
  Serial.println( " Resultado da divisao e: " + String(divisao) );
  
  delay(1000);//aguarda 1 segundo antes de rodar loop novamente
}