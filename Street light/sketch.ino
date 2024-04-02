#include <Arduino.h>

// Define the pins for the LED and LDR
const int LED_PIN = 13; // Assuming the LED is connected to digital pin 13
const int LDR_PIN = A0; // Assuming the LDR is connected to analog pin A0

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);

  // Initialize the LDR pin as an input
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  if (is_dark()) {
    digitalWrite(LED_PIN, HIGH); // Turn on the LED
  } else {
    digitalWrite(LED_PIN, LOW); // Turn off the LED
  }
  delay(1000); // Check every 1 second
}

bool is_dark() {
  // Read analog value from LDR
  int ldr_value = analogRead(LDR_PIN);
  // Assuming dark when LDR value is below a threshold (you may need to adjust this)
  return ldr_value < 500;
}