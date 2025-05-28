#include <Servo.h>
Servo motor;//cria uma variavel/objeto
const int ledVermelho = 10;
const int ledVerde = 7;
const int ledAzul1 = 4;
const int ledAzul2 = 3;
const int ledAzul3 = 2;

//funções
void desenhoPontinhos(int qtdpontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdpontos; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
  
  Serial.println();
}
void desenhaCabecalho(){

  Serial.println("");//pula uma linha
  Serial.println("------------------------------------");
  Serial.println("        PROGRMA JOGO DE DADOS       ");  
  Serial.println("------------------------------------");
  Serial.println("");//pula uma linha

}

void acertos(int numerodeacertos = 3){
  for(int n = 0; n <=3; n++){
    digitalWrite(ledAzul1, HIGH);
    digitalWrite(ledAzul2, HIGH);
    digitalWrite(ledAzul3, HIGH);
    motor.write(90);
}

}
//variaveis globais
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));// inicia e normaliza a porta randonica para evitar o mesmo valor
  motor.attach(12); 
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
  motor.write(0);    
}

void loop()
{
  motor.write(0);
  
  
  desenhaCabecalho();//invoca a função
  
  int vetPalpites;
  int vetResultados;
  
   //aqui dentro vai o jogo todo

  //pedir o palpite do usuario
  Serial.println("Digite um palpite de 1 a 6");
  while(!Serial.available());
  int palpite = Serial.parseInt();
  
  //sortear o dado
  int numerosorteado = random(1, 7);//gera um numero aleatorio de 1 a 6
  Serial.print("jogando o dado"); 
    
  desenhoPontinhos();
    
  //mostrar o resultado

  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero do dado: " + String(numerosorteado));
 
  //guarda os dados nos vetores para posteriormente montar o relatorio
   vetPalpites = palpite;
   vetResultados = numerosorteado;
    
  //se acertou dar os parabens, senão que pena  
  if(palpite == numerosorteado)
  {
    Serial.println("Parabens voce acertou");
    digitalWrite(ledVerde, HIGH); 
    delay(700);
    digitalWrite(ledVerde, LOW);
    acertos();
  }else{
    Serial.println("Que pena, tente outra vez!");
    digitalWrite(ledVermelho, HIGH); 
    delay(700);
    digitalWrite(ledVermelho, LOW);
  }

  delay(1000);
}//fim do loop