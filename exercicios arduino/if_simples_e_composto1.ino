float salario = 0;
String nome= "",  cargo = "";

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual o seu nome?");
    while( ! Serial.available()  );
    nome = Serial.readString ();
  
  
   Serial.println("Qual o seu Cargo?");
    while( ! Serial.available()  );
    cargo = Serial.readString ();
  
    Serial.println("Quanto voce ganha?");
    while( ! Serial.available()  );
    salario = Serial.parseFloat ();
 
  Serial.println("Nome: " + nome);
  
   Serial.println("Cargo: " + cargo);
 
  
  if(salario < 1000){;
    float SalarioAC = salario + (salario * 0.10);    
  Serial.println("Esse e seu salario:  "+ String(SalarioAC));
     }else{
    Serial.println("Esse e seu salario:  "+ String(salario));
  }
  
  
  }
  