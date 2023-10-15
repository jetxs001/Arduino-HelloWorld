#include "HelloWorld.h"
#include <Arduino.h>

HelloWorld::HelloWorld(int baudRate) {
    Serial.begin(baudRate); // Initialize Serial communication
}

void HelloWorld::sayHello() {
    Serial.println("Hello, World!");
}
