// Define the LED pin
const int ledPin = 10;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Fade in from min to max brightness
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness); // Write the brightness value to the LED
    delay(10); // Wait for a short period to see the effect
  }
  
  // Fade out from max to min brightness
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness); // Write the brightness value to the LED
    delay(10); // Wait for a short period to see the effect
  }
}
