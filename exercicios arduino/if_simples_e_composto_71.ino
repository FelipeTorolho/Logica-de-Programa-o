long numero, numero2;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite um numero inteiro");
  while (!Serial.available());
  numero = Serial.parseInt();
  
  Serial.println("digite outro numero inteiro");
  while (!Serial.available());
  numero2 = Serial.parseInt();

  if (numero > numero2) {
    Serial.println("O número maior é: " + String(numero));
} else if (numero2 > numero) {
    Serial.println("O número maior é: " + String(numero2));
} else {
    Serial.println("Os números são iguais.");
} 

  delay(3000);
}
