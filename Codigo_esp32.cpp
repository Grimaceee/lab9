#include <Arduino.h>
#include <HardwareSerial.h>

const int potPin1 = 34;  
const int potPin2 = 35;  
int potValue1 = 0;
int potValue2 = 0;

void setup() {
  Serial.begin(115200);  
}

void loop() {

  potValue1 = analogRead(potPin1);  
  potValue2 = analogRead(potPin2);  
  if (Serial.available()) {
    char command = Serial.read();
    if (command == '1') {  
      Serial.println(potValue1);
    } else if (command == '2') {
      Serial.println(potValue2);
    }
  }

  delay(100);  
}