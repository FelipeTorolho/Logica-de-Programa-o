// C++ code
//

int ledAmarelo = 12; 
int ledVermelho = 13; 
int ledVerde = 11;

void setup()
{

  Serial.begin(9600);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

}//fim do setup

void loop()
{
  int contador = 0;

  do{
    Serial.println("Bem-vindo ao o jogo de acender os leds");
    Serial.println("Escolha uma das opcoes");
    Serial.println("1 - Ligar Led Verde");
    Serial.println("2 - Desligar Led Verde");
    Serial.println("3 - Ligar Led Amarelo");
    Serial.println("4 - Desligar Led Amarelo");
    Serial.println("5 - Ligar Led Vermelho");
    Serial.println("6 - Desligar Led Vermelho");
    Serial.println("7 - Ligar Todos os Leds");
    Serial.println("8 - Desligar Todos os Leds");
    Serial.println("0 - Sair");
    while( ! Serial.available()){}
    int opcaoEscolhida = Serial.parseInt();


    switch(opcaoEscolhida){
      case 1: 
      Serial.println("opcao escolhida foi: Ligar Led Verde");
      digitalWrite(ledVerde, HIGH);      
      break;

      case 2:
      Serial.println("opcao escolhida foi: Desligar Led Verde");
      digitalWrite(ledVerde, LOW);    
      break;

      case 3:
      Serial.println("opcao escolhida foi: Ligar Led Amarelo");
      digitalWrite(ledAmarelo, HIGH);
      break;

      case 4:
      Serial.println("opcao escolhida foi: desligar Led Amarelo");
      digitalWrite(ledAmarelo, LOW);
      break;

      case 5:
      Serial.println("opcao escolhida foi: Ligar Led Vermelho");
      digitalWrite(ledVermelho, HIGH);
      break;

      case 6:
      Serial.println("opcao escolhida foi: Desligar Led Vermelho");
      digitalWrite(ledVermelho, LOW);   
      break;

      case 7:
      Serial.println("opcao escolhida foi:  Ligar Todos os Leds");
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVerde, HIGH);              
      break;

      case 8:
      Serial.println("opcao escolhida foi:  Desligar Todos os Leds");
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, LOW);
      break;

      case 0:
      Serial.println("opcao escolhida foi: Sair");
      Serial.println("Ate breve");
      break;   

      default:
      Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 8. ;)");
    }

  }
  while(contador!=0);

  delay(3000);

}//fim do loop