#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); // RX | TX

int analogInput = 0; //store value from distance sensor

int counter = 0; //store counter value

void setup() {
  Serial.begin(9600); //initialize HC-05 Serial Port
  BTserial.begin(9600); //initialize HC-06 Serial Connection
}

void loop() {
  analogInput = analogRead(A0);
  counter++;
  if (counter > analogInput) { //this will need to be scaled up accordingly
    BTserial.write((char)1); //send message over serial connection
    counter = 0;
  }
}


