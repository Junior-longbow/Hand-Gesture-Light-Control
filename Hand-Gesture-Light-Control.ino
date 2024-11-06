// Pin definitions
const int trackingSensorPin = D6;  // Tracking sensor input pin
const int relayPin = D7;           // Relay module output pin

bool lightState = false;           // Current state of the light (off initially)
bool lastSensorState = LOW;        // Previous state of the tracking sensor

void setup() {
  pinMode(trackingSensorPin, INPUT);  // Set tracking sensor as input
  pinMode(relayPin, OUTPUT);          // Set relay as output
  digitalWrite(relayPin, LOW);        // Start with relay off
  Serial.begin(9600);
}

void loop() {
  // Read the current state of the tracking sensor
  int sensorState = digitalRead(trackingSensorPin);

  // Check if motion is detected (sensor state is HIGH) and if it changed from the last state
  if (sensorState == HIGH && lastSensorState == LOW) {
    // Toggle the light state
    lightState = !lightState;
    digitalWrite(relayPin, lightState ? HIGH : LOW);  // Set relay to the new light state

    if (lightState) {
      Serial.println("Light ON");
    } else {
      Serial.println("Light OFF");
    }
    
    // Small delay to debounce
    delay(200);
  }

  // Update the last sensor state to the current state
  lastSensorState = sensorState;
}
