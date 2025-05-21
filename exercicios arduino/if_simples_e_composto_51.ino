int numero ;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite um numero inteiro");
  while (!Serial.available());
  numero = Serial.parseInt();
  

  Serial.println("Mostre o numero: " + String(numero));

  if (numero %2 == 0) {
    Serial.println("Par");
} else {
    Serial.println("impar");
  }

  delay(3000);
}