#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output pin.
}

void loop() {// put your main code here, to run repeatedly:
  on(500);
  off(500);
  //on(1000);
  //off(1000);
  //on(2000);
  //off(2000);
}

void on(int x) {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off by making the voltage LOW
  delay(x);      
}

void off(int y) {
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(y);                      // wait for a second
}