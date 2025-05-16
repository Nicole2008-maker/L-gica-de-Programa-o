/*

Faça um programa receba dois valores e imprima qual é o maior número
digitado.
*/

int numero1, numero2;

void setup()
{
 Serial.begin(9600);//carrega a comunicação serial no Arduino 
}

void loop()
{
  //Conjunto de ações/instruções para armazenar o primeiro numero
  Serial.println("Digite o primeiro numero");//informar uma mensagem na tela solicitando o primeiro numero
  while( !Serial.available());//pedir pro Arduino esperar o usuario digitar e dar o enter
  numero1 = Serial.parseInt();//guardar o numero digitado na variavel
  
  Serial.println("Informe o segundo numero");
   while( !Serial.available());
   numero2 = Serial.parseInt();
  
  //mostrar os numeros digitados
  Serial.println("Primeiro :" + String(numero1));
  Serial.println("Segundo :" + String(numero2));
  
  //analisar qual e o maior (numero1 > numero2 )
  if( numero1 > numero2){
    Serial.println( "O primeiro numero eh o maior");
  }else {
    Serial.println( "O segundo numero eh o maior");
}
  
  delay(15000);
}