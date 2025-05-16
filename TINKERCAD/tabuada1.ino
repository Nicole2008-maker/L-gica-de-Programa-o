void setup() {
  Serial.begin(9600);
  while (!Serial) {
   
  }
  Serial.println(" PROGRAMA DE TABUADA DA NIKKI");
  Serial.println("Digite um numero de 1 a 10 para ver a tabuada:");
}

void loop() {
  if (Serial.available() > 0) {
    int numero = Serial.parseInt(); // Lê número digitado ou nao

    // Verifica se está no intervalo permitido ou nao
    if (numero >= 1 && numero <= 10) {
      Serial.print("Tabuada do ");
      Serial.println(numero);
      for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        Serial.print(numero);
        Serial.print(" x ");
        Serial.print(i);
        Serial.print(" = ");
        Serial.println(resultado);
        delay(300); // Pausa entre as linhas da tabuada
      }
    } else {
      Serial.println("Ops! Numero invalido, querido(a):( ! Digite um numero de 1 a 10.");
    }

    // Pausa e repete o pedido
    delay(1000);
    Serial.println("\nDigite outro numero de 1 a 10 para ver outra tabuada:");
  }
}
