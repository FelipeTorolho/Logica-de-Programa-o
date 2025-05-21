// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.
//Declaração de variáveis
int idade = 0;
int idadeMeses = 0;
long idadeDias = 0;
long idadeHora = 0;
long idadeMinuto = 0;

void setup()
{
     Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println("Digite a sua idade em anos?");
  while( ! Serial.available() );//espera o usuário digitar
  idade = Serial.parseInt(); 
  
 //Processamento
  idadeMeses = idade * 12;
  idadeDias = idadeMeses * 365;
  idadeHora = idadeDias * 24;
  idadeMinuto = idadeHora * 60;
  
 //Saída
  Serial.println("Idade em meses:" +(String)idadeMeses);
  Serial.println("Idade em dias:" +(String)idadeDias);
  Serial.println("Idade em horas:" +(String)idadeHora);
  Serial.println("Idade em minutos:" +(String)idadeMinuto);
}