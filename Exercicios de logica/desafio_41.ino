// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  for(int contador = 1; contador <= 99; contador += 2){
  	Serial.println(contador);
  }
  
  
}

void loop()
{
 
}