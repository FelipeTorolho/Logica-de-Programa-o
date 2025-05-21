//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
// / (altura * altura).

String nome = "";
float peso = 0;
float altura = 0.00;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Qual é o seu nome?");
  while (!Serial.available()); // Espere o usuário digitar
  nome = Serial.readString(); 
  
  Serial.println("Qual é o seu peso? (em kg)");
  while (!Serial.available()); // Espere o usuário digitar
  peso = Serial.parseFloat(); 

  Serial.println("Qual é a sua altura? (em metros)");
  while (!Serial.available()); // Espere o usuário digitar
  altura = Serial.parseFloat(); 
  
  //processamento
float IMC = peso / (altura * altura);  
  
  //Saída
  Serial.println("Digite seu nome:" + nome);
  Serial.println("Digite seu peso:" + String(peso));
  Serial.println("Digite sua altura:" + String(altura));
  Serial.println("IMC calculado:" + String(IMC));
}