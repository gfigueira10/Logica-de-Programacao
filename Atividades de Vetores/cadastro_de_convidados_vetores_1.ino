// C++ code
//Variaveis Globais 

int qtdCadastros = 4;
String convidados[4];//Cria um vetor tamanho 4
int idadeConvidados [4]; //Camel Case
String emailConvidados[4];

//Funcoes
void desenhaCabecalho(){
  //Fazer um cabecalho para o progama
  Serial.println("|-------------------|");
  Serial.println("|   Bem- vindo ao   |");
  Serial.println("|    Churrasco      |");
  Serial.println("|                   |");
  Serial.println("|-------------------|");
  Serial.println();
}

void setup()
{
  Serial.begin(9600);

}


void loop()
{
  desenhaCabecalho();//Cabecalho

  //Cadastrar Dados
  for(int i = 0; i < 4; i++)
  {
    // Solicitar o nome 
    Serial.println("Informe " + String (i + 1) + "o nome para cadastro");
    while(!Serial.available());
    convidados[i] = Serial.readString();

    //Solicitar idade
    Serial.println("Informe a idade de " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();

    //Solicite o email
    Serial.println("Informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();

    Serial.println();
  }//Fim do for

  //Exibir a lista de convidados
  //Obs: so vai na festa quem for maior de idade >= 18

  /*Criar um for e exibir com o print cada um dos arrays e pular uma linha*/

  Serial.println("Exibindo apenas convidados eleitos para festa **");
  Serial.println();

  for(int i = 0; i < 4 ; i++ )
  {
    if(idadeConvidados[i] >= 18)
    {//Apenas maiores de idade
      Serial.println("Nome: " + convidados[i]);
      Serial.println("Idade: " + String(idadeConvidados[i]));
      Serial.println("Email: " + emailConvidados[i]);
      Serial.println("Permissao para a festa :" + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de Idade"));
      Serial.println("------------");
      Serial.println();
    }//Fim do if

  }//Fim do for

  Serial.println();

  delay(3000);
}