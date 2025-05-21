//Faça um programa que receba um número e exiba o seu dobro.
long num = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite um numero inteiro?");
  while( ! Serial.available() );//espera o usuário digitar
  num = Serial.parseInt();
  
  //processamento
  num = num * 2;
    
  //saída
    Serial.println("O dobro desse numero é inteiro:" +(String)num);
}