// C++ code
//Variaveis Globais 
int palpite; 

void setup()
{
  Serial.begin(9600);
  random(analogRead(0));//inicia e normalize a porta
}

void desenhaCabecalho()
{
  Serial.println("|---------------------------------- |");
  Serial.println("Bem vindo ao programa 'Jogo de dados'");
  Serial.println();
  delay(500);
}

void desenhaPontinho(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
}

void loop()
{
  desenhaCabecalho();

  //Perguntar quantas vezes o ususario ira jogar
  //Criar os vetores baseados na quantidade de rodadas 
  
  
  //Entrada
  
  Serial.println("Quantas vezes voce quer jogar ?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();

  //Arrays das Estatiscas
  int vetPalpites[qtdRodadas];
  int vetResultados[qtdRodadas];
  
  
  //Processamento do jogo
  for(int r = 0; r < qtdRodadas; r++)
  {//JOGO AQUI !!

    //solicitar palpite do usuario
    Serial.println("Digite seu palpite de 1 a 6");
    while(!Serial.available());  
    palpite = Serial.parseInt();

    //jogar dado
    int numeroSorteado = random(1, 7); //Sorteia um numero de 1 até 7 - 1, ou seja 6

    //guardar os dados para estatiscas 
    vetPalpites[r] = palpite;
    vetResultados[r] = numeroSorteado;

    Serial.print("Sorteando dado ");
    desenhaPontinho();

    //exibir o palpite do usuario
    Serial.println();

    Serial.print("Palpite do usuario: " + String(palpite));
    Serial.println();


    //exibir numero sorteado
    Serial.println("Numero do Dado: " + String(numeroSorteado));
    
    if(palpite == numeroSorteado)
    {
      Serial.println("Parabens, os numeros sao iguais!!!");
      Serial.println();

    } else {
      Serial.println("Que pena! Tente outra vez");
      Serial.println();

    }

  }//Fim do for da rodada 
  
  //Estatiscas dos resultados das rodadas 
  Serial.println("Estatiscas do Jogo");
  Serial.println();
  
  for(int i = 0; i < qtdRodadas; i++)
  {
  	Serial.println("Rodada " + String(i) + ":");
    Serial.println(" Palpite: " + String(vetPalpites[i]));
    Serial.println(" Resultado: " + String(vetResultados[i] == vetPalpites[i] ? "Acertou !!" : "Errou !!"));
    Serial.println("------------------------------");
    Serial.println();
  }
  

  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA !!");
  delay(4000);
  Serial.println();
}
