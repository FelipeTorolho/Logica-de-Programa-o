/*
while - É uma estrutura de repetição que só executa quando a sua condição e verdadeiro
*/
// A função SETUP() tem como objetivo de incializar o programa. Podemos chamar de configuração.
void setup()
{
  Serial.begin(9600);
  
  // Variavel inicializadora
  /* Tipos de dados (Principais)
  - INT (números inteiros)
  - LONG (números inteiros - é um int com maior capacidade de armazenamento)
  - STRING (caracteres: alfanúmericos e especiais)
  - FLOAT (números com casas decimais)
  - BOOL (true e false)
  */
  // Várialvel inicializadora
  int contadorWhile = 1;// variavel local
  
  
  while(contadorWhile <= 99){
  Serial.println(contadorWhile);
  contadorWhile += 2;
  }

  
     // variavel local
  
 
  
    // 1a - contadorWhile ++;
    // 2a - contadorWhile = contadorWhile + 1;
    // 3a - contadorWhile += 2; (somar com um valor diferente de que 1)
 
 
   
  
    /*operadores 
    
    aritmeticos: +,-,*,/,%
    logicos: && (PIPI - OU),||(E COMERCIAL -E),! (NEGAÇÃO/INVERTE)
    relacional:
    - == (COMPARAÇÃO)
    - >= (MAIOR E IGUAL)
    - >  (MAIOR QUE)
    - <= (MENOR E IGUAL)
    - <  (MAIOR QUE)
    - != (DIFERENTE DE) 
    */
  
  


}
//A função LOOP() tem como objetivo de repitir várias vezes o programa.
void loop()
{
 // sem intruções
}
