#include <Arduino.h>
#include <Adafruit_TinyUSB.h> // for Serial

// Define the pins for analog inputs
const int analogPin1 = A0;
const int analogPin2 = A1;
const int transistorPin1 = 9; // Pin connected to the transistor base
const int transistorPin2 = 7; // Pin connected to the transistor base

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set the transistor pin as an OUTPUT
  pinMode(transistorPin1, OUTPUT);
  pinMode(transistorPin2, OUTPUT);
}

void loop() {
  // Toggle transistor
  digitalWrite(transistorPin1, HIGH);
  digitalWrite(transistorPin2, HIGH);

  // delay(5);

  // Read the analog values from the pins
  int sensorValue1 = analogRead(analogPin1);
  int sensorValue2 = analogRead(analogPin2);
  
  // Print the analog values to the serial monitor
  Serial.print(sensorValue1);
  Serial.print(",");
  Serial.println(sensorValue2);

  // // Toggle transistor
  // digitalWrite(transistorPin1, LOW);
  // digitalWrite(transistorPin2, LOW);

  // Add a small delay to prevent flooding the serial monitor
  delay(10);
}
