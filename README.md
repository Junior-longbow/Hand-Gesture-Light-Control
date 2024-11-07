# Hand-Gesture-Light-Control
This project enables a light to be controlled by simple hand gestures, using an Arduino-compatible board (WeMos D1 R2) and a relay module. A tracking sensor detects hand movements to turn a connected light on or off, creating a touchless and intuitive lighting control system.

# Table of Contents
- Features
- Components
- Circuit Diagram
- Installation
- Usage
- Contributing
- License

# Features
- Touchless Control: Use hand gestures to turn the light on and off.
- Energy Efficient: Use an LED based light for this project to save energy.
- Flexible: Compatible with different light sources dependend on power consumption and the relay's capabilities. Adjustable for various sensitivity levels.

# Components
- WeMos D1R2 board (or similar Arduino-compatible board)
- Relay Module (e.g., SRD-05VDC-SL-C) 
- Tracking Sensor for gesture detection
- Power Source (e.g., 5V for Arduino or battery pack)
- Jumper Wires and Breadboard (optional)
- 5v Cooling Fan (e.g., 5V 0.2A)
- 220V/110V Kettle Cord
- 5V 2A Cellphone Charger Board

# Circuit Diagram

1: Connect the tracking sensor to the WeMos D1 R2 board:

- VCC to 3.3V/5V (depending on your sensor)
- GND to GND
- OUT (Signal) to a digital pin (e.g., D6)

2: Connect the relay module to the board:

- S (Signal) to another digital pin (e.g., D5)
- Vcc to 5V
- GND to GND

- *Make Sure Both The Relay And The Tracking Sensor Are Connected To A Common Ground*

3: Connect the Live wire of the light to the relay's COM. Connect the Neutral wire of the light to the Neutral of the kettle cord. The other Live wire from the kettle cord connects to the N/0 of the relay.

4: Connect the Live and Neutral wire of the kettle cord also to the 5V cellphone charger on the AC side. (Cellphone chargers don't have an earth so it doesn't matter which orientation the charger is plugged in, thus one can solder Live and Neutral either way)

# Installation

1: Clone this repository.

  - git clone https://github.com/junior-longbow/hand-gesture-light-control.git
cd hand-gesture-light-control

2: Open the Arduino IDE and install necessary libraries (e.g., ESP8266WiFi if required for your board).

3: Upload the code to the WeMos D1 R2 board:

 - Connect your board to your computer via USB.
 - Open the Arduino code file (hand_gesture_light.ino).
 - Select the correct board (WeMos D1 R2) and port.
 - Click Upload.

# Usage

- Power on the system: Plug in the WeMos D1 R2 board or connect it to a battery pack.
- Perform a gesture: Move your hand over the sensor to activate or deactivate the light.
- Adjust Sensitivity: Modify sensor or code settings if needed for sensitivity to detect gestures accurately.

# Troubleshooting

- Light does not turn on: Check all wiring connections, especially those to the relay module.
- Gesture not detected: Try adjusting the sensor position or sensitivity.

# Contributing
- Feel free to submit issues or pull requests to improve the project. For major changes, please discuss them in the Issues section first.

# License
- This project is licensed under the MIT License - see the LICENSE file for details.
