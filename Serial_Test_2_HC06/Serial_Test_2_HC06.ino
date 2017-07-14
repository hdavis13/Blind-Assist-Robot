#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); // RX | TX

int buzzerPin = 7;
 
void setup() {
  Serial.begin(9600); //initialize HC-06 Serial Port
  BTserial.begin(9600); //initialize HC-05 Serial Connection
}
 
void loop() {
  if (BTserial.read() == 1) { //turn buzzer on when signal is received
    tone(buzzerPin, 500);
    delay (10); //remove this eventually
  } else noTone(buzzerPin);
}