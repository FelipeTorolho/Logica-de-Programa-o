long numero;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite um numero inteiro");
  while (!Serial.available());
  numero = Serial.parseInt();
  

  long numerof = numero % 2;
  
  if (numerof == 0 ) {
    Serial.println("esse numero e par:" + String(numero));
} else {
    Serial.println("erro");
  }

  delay(3000);
}