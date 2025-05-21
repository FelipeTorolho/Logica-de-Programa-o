// C++ code
//
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));// inicia e normaliza a porta randonica para evitar o mesmo valor
}

void loop()
{
  Serial.println("");
  Serial.println("------------------------------------");
  Serial.println("        PROGRMA JOGO DE DADOS       ");  
  Serial.println("------------------------------------");
  Serial.println("");

  //pedir o palpite do usuario
  Serial.println("Digite um palpite de 1 a 6");
  while(!Serial.available());
  int palpite = Serial.parseInt();
 
  //sortear o dado
  int numerosorteado = random(1, 7);//gera um numero aleatorio de 1 a 6
  
  //mostrar o resultado
  
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero do dado: " + String(numerosorteado));
  
  if(palpite == numerosorteado)
  {
    Serial.println("Parabens voce acertou");
  }else{
    Serial.println("Que pena, tente outra vez!");
  }
  
  delay(1000);
}