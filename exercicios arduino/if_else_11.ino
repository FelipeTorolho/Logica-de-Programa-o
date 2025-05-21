// C++ code
//variaveis
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
  
  if(idade >= 18){
   Serial.println("Maior de idade");
  } else {
   Serial.println("Menor de idade");
  }
  
  delay(3000);
}