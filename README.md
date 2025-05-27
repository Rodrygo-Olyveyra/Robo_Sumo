🤖 Robô Sumô Bluetooth com ESP32
Este projeto implementa o controle de um Robô Sumô utilizando um ESP32 e módulo Bluetooth. O robô pode ser controlado remotamente via comandos enviados por Bluetooth (por exemplo, por um app de controle Bluetooth no celular). A movimentação é feita com base em comandos de direção.

🔧 Componentes Utilizados
ESP32
Ponte H (L298N ou similar)
2 Motores DC
Módulo Bluetooth (embutido no ESP32)
Rodas e chassi de robô
Fonte de alimentação (bateria ou banco de energia)
📱 Controles via Bluetooth
Conecte-se ao dispositivo Bluetooth com o nome ROBO_SUMO e envie os seguintes comandos:

Comando	Ação
R	Frente
L	Trás
F	Esquerda
B	Direita
S	Parar

Você pode usar qualquer aplicativo de controle Bluetooth serial, como o Serial Bluetooth Terminal (Android), para enviar os comandos.

📌 Esquema de Pinos
Função	Pino ESP32
Motor 1 IN1	GPIO 5
Motor 1 IN2	GPIO 18
Motor 2 IN3	GPIO 19
Motor 2 IN4	GPIO 21

🚀 Como Usar
Carregue o código no ESP32 via Arduino IDE.
Alimente o ESP32 e os motores com uma fonte adequada.
Conecte-se ao Bluetooth no celular com o nome ROBO_SUMO.
Envie comandos e veja o robô se mover!
