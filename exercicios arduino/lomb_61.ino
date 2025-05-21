//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.
float pol = 0.0;
float cm = 0.0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Quantas polegadas quer converter");
  while( ! Serial.available() );//espera o usuário digitar
  pol = Serial.parseFloat();
  
  //Processamento
 float cm = pol * 2.54;
  
  //Saída
    Serial.println("centimetros:" + String(cm));
}