// C++ code
//



void setup()
{
  Serial.begin(9600);
}





void loop()
{
  
  for(int contador = 5; contador <= 100; contador += 5){
  
    Serial.println(contador);
  }
 
  
  delay(3000);
}













 