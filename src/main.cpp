/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

// Git test 3 : after modifying gitmodule url to use ssh prefix
// totally confused

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long delayPeriod = 500;
  digitalWrite(LED_BUILTIN,HIGH);
  delay(delayPeriod);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delayPeriod);
}
