#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

// Pinos do motor
const int IN1 = 5;
const int IN2 = 18;
const int IN3 = 19;
const int IN4 = 21;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ROBO_SUMO"); // Nome do Bluetooth
  Serial.println("Bluetooth pronto. Conecte ao ROBO_SUMO");

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  if (SerialBT.available()) {
    char comando = SerialBT.read();
    Serial.println(comando);

    if (comando == 'R') { // Frente
      frente();
    } else if (comando == 'L') { // Trás
      tras();
    } else if (comando == 'F') { // Esquerda
      esquerda();
    } else if (comando == 'B') { // Direita
      direita();
    } else if (comando == 'S') { // Stop
      parar();
    }
  }
}

void frente() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void tras() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void esquerda() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void direita() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void parar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}