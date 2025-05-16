/*

Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/

void setup()
{
  Serial.begin(9600);
  
 //Pede o numero para o usuario
  Serial.println("Informe um numero par");
  while( !Serial.available() ){}//espera o usuario dar enter
  int numero = Serial.parseInt();//guarda o numero digitado pelo usuario
  
  if( numero % 2 == 0 ){//verificar se o numero e par
   Serial.println("O numero digitado eh par:" + String(numero));
  }
  
  Serial.println();//escreve uma linha vazia
  Serial.println("Obrigado por utilizar o programa PAR");
}
void loop()
{
  Serial.println("Ei, desligue o Arduino!");
  Serial.println("Nao tenho mais nada para fazer, apenas gastando energia!!");
  Serial.println();
  delay(2500);
}