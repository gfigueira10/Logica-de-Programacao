// C++ code
//Variaveis 
int idade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 // Categorias na escollinha de futebol
  //infantil abaixo de 10 anos
  // juvenil abaixo de 18 anos
  //adulta a partir de 18 anos
  
  if(idade <= 10 ){// de infinito negativo ate 10 anos
    Serial.println("Categoria infantil");
  } else if(idade <18 ){// de 11 ate 17
  Serial.println("Categoria Juvenil");
  } else if (idade < 35){// de 18 ate 34 anos
    Serial.println("Categoria Adulta");
  } else {// de 35 ate o infinito positivo
    Serial.println("Categoria Senior");
  }
  delay(3000);
}