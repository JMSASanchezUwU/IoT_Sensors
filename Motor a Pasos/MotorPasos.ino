#include <AccelStepper.h>

// Definir los pines utilizados por el motor a pasos
#define MOTOR_PIN_1 8
#define MOTOR_PIN_2 9
#define MOTOR_PIN_3 10
#define MOTOR_PIN_4 11

// Definir el pin utilizado por el botón
#define BUTTON_PIN 2

// Declarar un objeto AccelStepper para controlar el motor a pasos
AccelStepper stepper(AccelStepper::FULL4WIRE, MOTOR_PIN_1, MOTOR_PIN_2, MOTOR_PIN_3, MOTOR_PIN_4);

// Declarar una variable para almacenar el estado del botón
int buttonState = 0;

void setup() {
  // Configurar el pin del botón como entrada con una resistencia pull-up interna
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Configurar el motor a pasos para utilizar la secuencia de pasos completa de 4 fases
  stepper.setFullSpeed(200); // Establecer la velocidad máxima del motor en pasos por segundo
  stepper.setAcceleration(100); // Establecer la aceleración máxima del motor en pasos por segundo por segundo
}

void loop() {
  // Leer el estado del botón
  buttonState = digitalRead(BUTTON_PIN);

  // Si el botón está presionado, hacer girar el motor a pasos 100 pasos en una dirección
  if (buttonState == LOW) {
    stepper.moveTo(100); // Establecer el objetivo del motor en 100 pasos en una dirección
    stepper.runToPosition(); // Hacer girar el motor hasta alcanzar el objetivo
  }
}
