#include <IRremote.hpp>
#include <IRremote.h>

const uint16_t irPin = 5;
const int motorPin1 = 4;

IRrecv irrecv(irPin);

decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(motorPin1, OUTPUT);
  digitalWrite(motorPin1, LOW);
}

void loop() {
  if (irrecv.decode(&results)) {
    digitalWrite(motorPin1, HIGH);
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
}