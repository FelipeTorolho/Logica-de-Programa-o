float preco = 0, perc = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual o preco?");
  while (!Serial.available());
  preco = Serial.parseFloat();

  Serial.println("Qual o percentual?");
  while (!Serial.available());
  perc = Serial.parseFloat();

  float precoAC = preco + (preco * perc);

  Serial.println("Mostre o preco: " + String(precoAC));

  if (perc >= 0.50) {
    Serial.println("Produto sera vendido com uma margem muito grande de lucro");
  } else {
    Serial.println("Produto sera vendido com uma margem muito pequena de lucro");
  }

  delay(3000);
}
