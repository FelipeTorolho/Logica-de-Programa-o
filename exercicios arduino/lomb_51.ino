//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.
float cm = 0.0;
float pol = 0.0;

void setup()
{ 
     Serial.begin(9600);
}

void loop()
{

  //Entrada
  Serial.println("Quantos centimetros quer converter");
  while( ! Serial.available() );//espera o usuário digitar
  cm = Serial.parseInt();
  
  //Processamento
float pol = cm / 2.54;
  
  //saída
  Serial.println("polegadas:" +(String)pol);
}