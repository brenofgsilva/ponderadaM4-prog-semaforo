// Definição dos pinos dos LEDs
const int ledVerde = 10;
const int ledAmarelo = 11;
const int ledVermelho = 12;
// Definição dos tempos (em milissegundos)
const int tempoVerde = 4000;   // 4 segundos
const int tempoV = 6000; // 6 segundos
const int tempoA = 2000; // 2 segundos
void setup() {
  // Configura os pinos como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}
void loop() {
  // Verde aceso
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
  delay(tempoVerde);
  // Amarelo aceso
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(tempoA);
  // Vermelho aceso
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(tempoV);
}
