#include "HelloWorld.h"

HelloWorld hello;

void setup() {
    Serial.begin(9600);
    hello.sayHello();
}

void loop() {
    // Your main code
}
