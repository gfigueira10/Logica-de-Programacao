// C++ code
//
void setup()
{
  Serial.begin(9600);
  
   int contadorPar = 60;
  int contadorImpar = 81;
  
  while(contadorPar <= 80){
    Serial.println(contadorPar);
    contadorPar += 2;
    
  }
  
  delay(3000);
  Serial.println("--------------");
  
   while(contadorImpar <= 101){
  	Serial.println(contadorImpar);
    contadorImpar += 2;
  }   
  
  
}


void loop()
{
 
}
