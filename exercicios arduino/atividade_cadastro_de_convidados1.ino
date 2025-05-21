/*
Faça um programa para simular a organização de uma festa para o cadastro de convidados, 
registrando as seguintes informações:

  * Nome
  * Email
  * Idade

O programa deve solicitar os dados via monitor serial, 
armazená-los em vetores, e ao final do cadastro exibir uma listagem completa dos convidados. 

OBS: A festa contratada será vip para apenas 7 convidados
*/
String nome [7];
String email [7];
int idade [7];

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //pedir o cadastro para o usuario
  //guardar cada cadastro corpartimento correto
  for(int i = 0; i <7; i++){
    Serial.println("Digite o seu nome");
    while(!Serial.available());
    nome[i] = Serial.readString();
    
    Serial.println("Digite o seu email");
    while(!Serial.available());
    email[i] = Serial.readString();
    
    Serial.println("Digite a sua idade");
    while(!Serial.available());
    idade[i] = Serial.parseInt();
    Serial.println("");
  }
  
  Serial.println("****** Listagem de convidados ******");
  Serial.println();
  
  
  for(int i = 0; i <7; i++){
  Serial.println("Convidado: " + (i + 1));
  Serial.println("Nome: " + nome[i]);
  Serial.println("Seu email é : " + email[i]);  
  Serial.println("Sua idade é:" + String(idade[i]));
  Serial.println("---");
  }
  
  delay(5000);
  
  }