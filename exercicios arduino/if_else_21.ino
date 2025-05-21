// C++ code
//variaveis
 String cor = "";
 
 void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a cor do semaforo?");
  while( ! Serial.available () );
  cor = Serial.readString();
  
 if (cor == "vermelho" , cor == "verde" ) {
  Serial.println("Siga");
} else {
  Serial.println("Pare");
}

  
  delay(3000);
}
