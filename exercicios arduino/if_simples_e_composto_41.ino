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

  if (numero >=0) {
    Serial.println("numero positivo");
  } else {
    Serial.println("numero negativo");
  }

  delay(3000);
}