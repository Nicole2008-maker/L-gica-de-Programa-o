float nota1, nota2, frequencia, media;

void setup() {
  Serial.begin(9600);
  while (!Serial) {}  // Espera a conexão serial

  Serial.println("Digite a primeira nota:");
  while (Serial.available() == 0) {}
  nota1 = Serial.parseFloat();

  Serial.println("Digite a segunda nota:");
  while (Serial.available() == 0) {}
  nota2 = Serial.parseFloat();

  Serial.println("Digite a frequência (%):");
  while (Serial.available() == 0) {}
  frequencia = Serial.parseFloat();

  media = (nota1 + nota2) / 2;

  Serial.print("Média: ");
  Serial.println(media, 2);
  Serial.print("Frequência: ");
  Serial.print(frequencia, 1);
  Serial.println("%");

  if (media == 10 && frequencia == 100) {
    Serial.println("Parabéns! Nota máxima!");
  } else if (media >= 6 && frequencia >= 75) {
    Serial.println("Aluno APROVADO.");
  } else if (media < 6 && frequencia < 75) {
    Serial.println("Aluno REPROVADO por nota e frequência.");
  } else if (media < 6) {
    Serial.println("Aluno REPROVADO por nota.");
  } else if (frequencia < 75) {
    Serial.println("Aluno REPROVADO por frequência.");
  }
}

void loop() {
  // Nada no loop, o programa roda apenas uma vez
}
