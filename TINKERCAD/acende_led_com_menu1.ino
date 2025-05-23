// Definição dos pinos dos LEDs
int ledVerde = 13;
int ledAmarelo = 11;
int ledVermelho = 12;

void setup() {
  // Inicializa a comunicação serial
  Serial.begin(9600);

  // Configura os pinos dos LEDs como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  int opcao = -1;

  do {
    // Exibe o menu
    Serial.println("\nMENU:");
    Serial.println("1) Ligar Led Verde");
    Serial.println("2) Desligar Led Verde");
    Serial.println("3) Ligar Led Amarelo");
    Serial.println("4) Desligar Led Amarelo");
    Serial.println("5) Ligar Led Vermelho");
    Serial.println("6) Desligar Led Vermelho");
    Serial.println("7) Ligar Todos os Leds");
    Serial.println("8) Desligar Todos os Leds");
    Serial.println("0) Sair");
    Serial.print("Escolha uma opcao: ");

    // Espera até que algo seja digitado
    while (Serial.available() == 0) {
      // Aguarda input
    }

    // Lê a opção digitada
    opcao = Serial.parseInt();

    // Executa a ação correspondente
    switch (opcao) {
      case 1:
        digitalWrite(ledVerde, HIGH);
        Serial.println("LED Verde ligado.");
        break;
      case 2:
        digitalWrite(ledVerde, LOW);
        Serial.println("LED Verde desligado.");
        break;
      case 3:
        digitalWrite(ledAmarelo, HIGH);
        Serial.println("LED Amarelo ligado.");
        break;
      case 4:
        digitalWrite(ledAmarelo, LOW);
        Serial.println("LED Amarelo desligado.");
        break;
      case 5:
        digitalWrite(ledVermelho, HIGH);
        Serial.println("LED Vermelho ligado.");
        break;
      case 6:
        digitalWrite(ledVermelho, LOW);
        Serial.println("LED Vermelho desligado.");
        break;
      case 7:
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Todos os LEDs ligados.");
        break;
      case 8:
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
        Serial.println("Todos os LEDs desligados.");
        break;
      case 0:
        Serial.println("Saindo do programa.");
        break;
      default:
        Serial.println("Opcao invalida. Tente novamente.");
    }

    delay(500); // Pequeno delay para evitar leituras repetidas

  } while (opcao != 0);
}
