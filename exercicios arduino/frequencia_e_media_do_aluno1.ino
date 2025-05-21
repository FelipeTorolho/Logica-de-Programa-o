int nota1, nota2;
int frequencia;
int notaf;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota");
  while(!Serial.available());
  nota1 = Serial.parseInt();
  
  Serial.println("Digite a segunda nota");
  while(!Serial.available());
  nota2 = Serial.parseInt();
  
  Serial.println("Digite sua frequencia");
  while(!Serial.available());
  frequencia = Serial.parseInt();
  
  int notaf = nota1 + nota2 / 2;
    
  if(notaf == 10 || frequencia == 100){
   Serial.println("Parabéns! Nota máxima!");
    
  }else if(notaf <=9 || frequencia <=99){
   Serial.println("Aprovado");
    
  }else if(frequencia <75){
   Serial.println("Reprovado por frequencia");
    
  }else if(notaf <6){
   Serial.println("Reprovado por falta");
    
  }else{
   Serial.println("Reprovado por ambos"); 
  }
  delay(3000);
}
