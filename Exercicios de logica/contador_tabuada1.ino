// C++ code
//
int numeroTabuada = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero para tabuada");
  while(! Serial.available());
  numeroTabuada = Serial.parseInt();
  
  for (int numero = 1; numero <= 10; numero++) {
    int resultado = numeroTabuada * numero;
 
    Serial.print(numeroTabuada);
    Serial.print(" x ");
    Serial.print(numero);
    Serial.print(" = ");
    Serial.println(resultado);
  }
  
}