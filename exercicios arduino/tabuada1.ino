void setup() {
  Serial.begin(9600);
  int numero;
  int resultado;

  Serial.println("Tabuada");
  Serial.println("Qual tabuada voce quer?");
  
  while (!Serial.available());  
  numero = Serial.parseInt();   

  Serial.println("Tabuada do " + String(numero));

  for (int contador = 1; contador <= 10; contador++){
    resultado = numero * contador;
    Serial.print(String(numero));
    Serial.print(" * ");
    Serial.print(String(contador));
    Serial.print(" = ");
    Serial.println(String(resultado));
  }
}


void loop()
{
  //Sem intruções
}