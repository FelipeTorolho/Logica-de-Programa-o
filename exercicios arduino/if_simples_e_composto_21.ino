float salario;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual o seu salario?");
  while( ! Serial.available () );
  salario = Serial.parseFloat();
  
  salario = salario + (salario * 0.30);
  
  if(salario <500){
  Serial.println("o seu salario e:" + String(salario));
  }else{
  Serial.println("nao foi possivel mostrar seu salario");
  }
  
  delay(3000);
    
}