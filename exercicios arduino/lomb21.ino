long adn = 0;
long ano = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite o ano que você nasceu");
  while( ! Serial.available() );//espera o usuário digitar
  adn = Serial.parseInt(); 
  
  Serial.println("Digite o ano que você está");
  while( ! Serial.available() );//espera o usuário digitar
  ano = Serial.parseInt(); 
  
  //processamento
 long idadeano = ano - adn;
 long idademes = idadeano * 12;
 long idadesemanas = idademes * 4;
   
  // saída
   Serial.println("Idade em semanas:" +(String)idadesemanas);
  
    
}