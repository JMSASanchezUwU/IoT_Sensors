//Libreria
#include <TM1637Display.h>

//Pines
#define CLK 4
#define DIO 13
#define SENSOR_PIN 19

TM1637Display display(CLK, DIO);

void setup() {
  pinMode(SENSOR_PIN, INPUT_PULLUP);
  display.setBrightness(0xff);
}

void loop() {
  int sensorValue = digitalRead(SENSOR_PIN);
  display.showNumberDec(sensorValue);
  delay(500);
  display.clear();
}