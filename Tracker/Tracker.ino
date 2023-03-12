const int LEFT_SENSOR_PIN = 2; // Pin del sensor izquierdo
const int RIGHT_SENSOR_PIN = 3; // Pin del sensor derecho

void setup() {
  pinMode(LEFT_SENSOR_PIN, INPUT); // Configura el pin del sensor izquierdo como entrada
  pinMode(RIGHT_SENSOR_PIN, INPUT); // Configura el pin del sensor derecho como entrada
  Serial.begin(9600); // Inicializa la comunicación serial a una velocidad de 9600 baudios
}

void loop() {
  int leftValue = digitalRead(LEFT_SENSOR_PIN); // Lee el valor del sensor izquierdo
  int rightValue = digitalRead(RIGHT_SENSOR_PIN); // Lee el valor del sensor derecho

  Serial.print("Sensor izquierdo: "); // Imprime el valor del sensor izquierdo
  Serial.print(leftValue);

  Serial.print("\t Sensor derecho: "); // Imprime el valor del sensor derecho
  Serial.println(rightValue);

  delay(100); // Espera 100 milisegundos antes de volver a leer los sensores
}
