// Include the necessary libraries
#include <Arduino.h>

// Define the pin for the LED
const int ledPin = 2; // You can change this pin to the appropriate GPIO pin

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);

  // Start the serial communication at 115200 baud rate
  Serial.begin(115200);
}

void loop() {
  // Blink the LED on and off
  digitalWrite(ledPin, HIGH);
  Serial.println("LED ON");
  delay(1000); // Wait for 1 second

  digitalWrite(ledPin, LOW);
  Serial.println("LED OFF");
  delay(1000); // Wait for 1 second
}
