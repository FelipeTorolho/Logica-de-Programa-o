// C++ code
//variavaeis
int idade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a sua idade?");
  while( ! Serial.available () );
  idade = Serial.parseInt();
    
  if (idade >= 16 && idade <= 70 )  {
  Serial.println("Voto obrigatorio");
} else {
  Serial.println("Voto não obrigatorio");
}

  
 delay(2000);
} 
