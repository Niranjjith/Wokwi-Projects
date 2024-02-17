// Define the LED pin
const int ledPin = 9;
// Define the push button pin
const int buttonPin = 2;

// Variables to store the current state of the button and the previous state
int buttonState = 0;
int prevButtonState = 0;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Initialize the push button pin as an input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the push button
  buttonState = digitalRead(buttonPin);

  // If the button is pressed (HIGH), but was not pressed before
  if (buttonState == HIGH && prevButtonState == LOW) {
    // Blink the LED while the button is pressed
    while (buttonState == HIGH) {
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(100);
      // Read the state of the push button again
      buttonState = digitalRead(buttonPin);
    }
  }
  // If the button is not pressed, keep the LED on constantly
  else if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  }

  // Save the current button state for the next loop iteration
  prevButtonState = buttonState;
}


