// C++ code
//Variaveis
float n1,n2,media = 0;
int frequencia = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota");
  while(! Serial.available());
  n1 = Serial.parseFloat();
  
   Serial.println("Digite a segunda nota");
  while(! Serial.available());
  n2 = Serial.parseFloat();
  
  Serial.println("Digite a frequencia");
  while(! Serial.available());
  frequencia = Serial.parseInt();
  
  media = ((n1 + n2) / 2);
  Serial.println("Media " + String(media));
  
  if(media == 10){
    Serial.println("Parabéns! Nota maxima!");
  }
  
  
  if(media >= 6 && frequencia >= 75){
    Serial.println("Aluno aprovado");
    
  }else if(media < 6 && frequencia < 75){
    Serial.println("Reprovado por nota e frequencia");
    
  }else if(media < 6){
    Serial.println("Reprovado por nota");
    
  }else (frequencia < 75 ); {// senti dificuldade nesse ultimo codigo
    Serial.println("Reprovado por frequencia");
    
  }
  
  
  
  delay(3000);
}