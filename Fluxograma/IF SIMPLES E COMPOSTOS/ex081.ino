//Faça um programa que receba o nome, cargo e salário de um funcionário. 
//Se o funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
//Ao final exiba o nome, o cargo e o salário desse funcionário.

//Variaveis

  String nome, cargo;
  float salario;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite o nome do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  nome = Serial.readString();//guarda o texto digitado na variavel
                 
  Serial.println("Digite o cargo do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter> 
  cargo = Serial.readString();//guarda o texto digitado na variavel
  
  Serial.println("Digite o salario do funcionario");//Imprime uma mensagem na tela
  while(!Serial.available());//pausa o programa ate o usuario teclar (Enter>
  salario = Serial.parseFloat();//guarda o texto digitado na variavel
  
  
  //processamento
    //verificar se o funcionario tera aumento
  if( salario < 1000){
  //calcular o aumento
    salario = salario + (salario * 0.10);//calcula 10% no salario
    //salario = salario = salario / 100 * 10);
    //salario = salario * 1.10;
    
  }
  
  //saida
  
  
 
  Serial.println("Funcionario: " + nome);//imprimir o nome
  Serial.println("Cargo:" + cargo);//imprimir o cargo
  Serial.println("Salario:" + String(salario));//imprimir o salario

  delay(1000); 
}