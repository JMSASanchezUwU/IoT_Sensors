const int knockSensor = 14;

void setup() {
  Serial.begin(9600);
  pinMode(knockSensor, INPUT);
}

void loop() {
  int sensorValue = digitalRead(knockSensor);
  if (sensorValue == HIGH) {
    Serial.println("---------------");
    Serial.println("Knock detected!");
    Serial.println("---------------");
  }
}