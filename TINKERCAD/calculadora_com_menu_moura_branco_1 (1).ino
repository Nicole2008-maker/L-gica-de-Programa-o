int escolhaDaOperacao;
float numero1;
float numero2;

void setup()
{
  Serial.begin(9600);
  
  int contador = 0; //variável inicializadora do 'do while'
  
  //\n é um entender via texto
  do{
    Serial.println("Bem-vindo(a) a calculadora mega blaster inteligente :P!!!\n");
    Serial.println("Escolha uma das operacoes:");
	Serial.println("1 - Somar");
    Serial.println("2 - Dividir");
    Serial.println("3 - Subtrair");
    Serial.println("4 - Multiplicar");
    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();
    
    
    
    Serial.println("Para conseguirmos fazer a operacao matematica, precisamos que voce digite 2 numeros");
    Serial.println("Digite o 1o numero:");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();
    
    Serial.println("Agora, digite o 2o numero:");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    
    //if(escolhaDaOperacao == 1){}
    //else if (escolhaDaOperacao == 2){}
    //else if (escolhaDaOperacao == 3){}
    //else if (escolhaDaOperacao == 4){}
    //else{} // else NÃO TEM CONDIÇÃO!!!
    
    switch(escolhaDaOperacao){
      case 1:
      	break;
          	
      case 2:
      	break;
          	
      case 3:
      	break;
          	
      case 4:
      	break;
      
      default:
      	Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4. ;)");
    }
    
    Serial.println("Voce deseja voltar ao menu? Digite sim ou não (em minusculo, por favor).");
    while(!Serial.available()){}
    
    
    if(Serial.readString() == "sim"){
      contador = 1;
    }
    else{
      contador = 0;
      
      Serial.println("Ate breve");
      Serial.println("Caso queira voltar ao menu, reinicie o programa ;)");
    }
    
    
  }
  while(contador != 0); //Se o contador foi diferente de 0, o mesmo repete.
}

void loop()
{
  //sem instruções
}