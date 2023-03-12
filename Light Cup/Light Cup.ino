// Definir los pines utilizados por el módulo Light Cup
#define LIGHT_PIN VP // Pin analógico positivo utilizado para leer la señal del sensor de luz
#define LED_PIN 2 // Pin digital utilizado para encender o apagar un LED indicador

void setup() {
  // Configurar el pin del LED como salida
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW); // Apagar el LED

  // Configurar la velocidad de transmisión de serie a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  // Leer el valor analógico del sensor de luz
  int lightValue = analogRead(LIGHT_PIN);

  // Encender el LED si la luz es débil
  if (lightValue < 500) {
    digitalWrite(LED_PIN, HIGH); // Encender el LED
  } else {
    digitalWrite(LED_PIN, LOW); // Apagar el LED
  }

  // Imprimir el valor de luz en el monitor de serie
  Serial.print("Light value: ");
  Serial.println(lightValue);

  // Esperar 100 milisegundos antes de leer el sensor de luz de nuevo
  delay(100);
}
