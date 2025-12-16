#include <arduino.h>

#define LED_PIN 2 //onboard LED
//(usually GPIO2)
 
void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, HIGH); //LED ON
    delay(1000);
    digitalWrite(LED< LOW); //LED OFF
    delay(1000);
}