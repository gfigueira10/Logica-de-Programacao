String nome = "";
String cargo = "";
float salario = 0;
bool aguardandoNome = true;
bool aguardandoCargo = false;
bool aguardandoSalario = false;
bool calculoFeito = false;

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("Digite o nome do funcionario:");
}

void loop() {
  if (Serial.available() > 0) {
    if (aguardandoNome) {
      nome = Serial.readStringUntil('\n');
      nome.trim();
      aguardandoNome = false;
      aguardandoCargo = true;
      Serial.println("Digite o cargo do funcionario:");
    }
    else if (aguardandoCargo) {
      cargo = Serial.readStringUntil('\n');
      cargo.trim();
      aguardandoCargo = false;
      aguardandoSalario = true;
      Serial.println("Digite o salario do funcionario:");
    }
    else if (aguardandoSalario) {
      salario = Serial.parseFloat();
      float novoSalario = salario * 1.10;  // Aumento de 10%
      aguardandoSalario = false;
      calculoFeito = true;
    
      // Exibe os dados finais formatados
      Serial.println("\n--- DADOS DO FUNCIONARIO ---");
      Serial.print("Nome: ");
      Serial.println(nome);
      Serial.print("Cargo: ");
      Serial.println(cargo);
      Serial.print("Novo salario (com 10% de aumento): R$ ");
      Serial.println(novoSalario, 3);

      // Reinicia para próximo funcionário
      Serial.println("\Digite o nome do proximo funcionario:");
      aguardandoNome = true;
    }
  }
}