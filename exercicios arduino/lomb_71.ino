//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.
String nome = "";
String cargo = "";
long salario = 0;
  
void setup()
{
   Serial.begin(9600);
} 

void loop()
{
  //entrada
  Serial.println("Digite o seu nome");
  while( ! Serial.available() );//espera o usuário digitar
  nome = Serial.readString();
  
  Serial.println("Digite o seu cargo");
  while( ! Serial.available() );//espera o usuário digitar
  cargo = Serial.readString();
   
  Serial.println("Digite a seu salario");
  while( ! Serial.available() );//espera o usuário digitar
  salario = Serial.parseInt(); 
  
  //processamento
  salario = salario + (salario * 0.10);

  
  //saida
  Serial.println("Nome Informado: " + nome);
  Serial.println("Nome Cargo: " + cargo);
  Serial.println("Salario: " + String(salario));
  
}