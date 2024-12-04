1. Hardware Setup

	•	Components Needed:
	•	XIAO ESP32C3
	•	LED
	•	Breadboard
	•	Jumper wires
	•	Circuit Connections:
	•	Connect the longer leg (anode) of the LED to a GPIO pin (e.g., GPIO2).
	•	Connect the other to GND.

2. Software Setup

	1.	Install Arduino IDE:
	•	Download and install the Arduino IDE from here.
	2.	Add ESP32 Board Support:
	•	Go to File > Preferences.
	•	Add the URL:
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
	•	Open Tools > Board > Board Manager, search for ESP32, and install.
	3.	Install Required Libraries:
	•	Open Tools > Manage Libraries, and install:
	•	ESPAsyncWebServer
	•	ArduinoJson
	4.	Upload the Code:
	•	Use the code provided above.
	•	Configure Wi-Fi credentials in the code.
	•	Connect the board and upload the code via Arduino IDE.

3. How to Use

	1.	Power the XIAO ESP32C3:
	•	Connect the board to your computer or a power source.
	2.	Connect to the Board:
	•	Wi-Fi Mode:
	•	Connect your phone to the board’s Wi-Fi network.
	3.	Control the LED:
	•	Use the mobile app to toggle the LED.

4. Additional Notes

	•	Ensure the XIAO ESP32C3 board is properly configured in Arduino IDE under Tools > Board.
	•	Test the connections before powering on to avoid damage to components.
	•	For troubleshooting, use the Serial Monitor in Arduino IDE.
