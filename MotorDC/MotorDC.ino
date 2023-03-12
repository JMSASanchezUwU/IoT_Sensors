#define BUTTON_PIN 23
#define MOTOR_PIN 5
#define MOTOR_PIN2 4

void setup() {
  serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT PULLUP);
  pinMode(MOTOR_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  Serial.println(buttonState);
  if(buttonState == 0){
    digitalWrite(MOTOR_PIN, LOW);
    digitalWrite(MOTOR_PIN2, LOW);
    delay(1000);
    digitalWrite(MOTOR_PIN, HIGH);
    digitalWrite(MOTOR_PIN2, HIGH);
  }
}