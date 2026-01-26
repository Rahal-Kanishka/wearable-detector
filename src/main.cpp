#include <Arduino.h>
#define onboard 13
const int LED = 10;


void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // turn the LED on (HIGH is the voltage level)
  // digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  // delay(1000);
  // turn the LED off by making the voltage LOW
  // digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  
  
  digitalWrite(LED, HIGH);
  delay(1000);
  analogWrite(LED, LOW);
  delay(1000);

}

