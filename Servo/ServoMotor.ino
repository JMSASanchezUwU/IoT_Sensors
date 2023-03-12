#define SERVO_PIN 26 // ESP32 pin GIOP26 connected to servo motor
#define BUTTON_PIN 13 // ESP32 pin GIOP13 connected to the button

Servo servoMotor;
int buttonState = 0;

void setup() {
  servoMotor.attach(SERVO_PIN);  // attaches the servo on ESP32 pin
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set the button pin as input with pullup resistor
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  
  // rotates from 0 degrees to 180 degrees if button is not pressed, else rotates from 180 to 0 degrees
  if (buttonState == HIGH) {
    for (int pos = 180; pos >= 0; pos -= 1) {
      servoMotor.write(pos);
      delay(15); // waits 15ms to reach the position
    }
  } else {
    for (int pos = 0; pos <= 180; pos += 1) {
      servoMotor.write(pos);
      delay(15); // waits 15ms to reach the position
    }
  }
}
