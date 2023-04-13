int gasThreshold = 300; // Setting the threshold value for gas
int buzzerPin = 9; // The pin where the buzzer is connected
int gasSensorPin = A0; // The pin where the gas sensor is connected
int redLedPin = 6; // The pin where the red LED is connected
int greenLedPin = 5; // The pin where the green LED is connected

void setup() {
  pinMode(buzzerPin, OUTPUT); // Setting the buzzer pin as output
  pinMode(redLedPin, OUTPUT); // Setting the red LED pin as output
  pinMode(greenLedPin, OUTPUT); // Setting the green LED pin as output
}

void loop() {
  int gasValue = analogRead(gasSensorPin); // Reading the analog value from the gas sensor

  if (gasValue > gasThreshold) { // If the gas value is greater than the threshold value, the following code block will be executed
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
    digitalWrite(redLedPin, HIGH);
    delay(100);
    digitalWrite(redLedPin, LOW);
    delay(100);
    digitalWrite(greenLedPin, LOW);
  } else { // If the gas value is less than or equal to the threshold value, the following code block will be executed
    digitalWrite(buzzerPin, LOW); // If the value is below the threshold value, the buzzer will turn off
    digitalWrite(redLedPin, LOW); // If the value is below the threshold value, the red LED will turn off
    digitalWrite(greenLedPin, HIGH); // If the value is below the threshold value, the green LED will turn on
  }
}
