#include <WiFi.h>
#include <WebServer.h>  // Use the built-in WebServer library

const char* ssid = "kumar12jio";         // Your Wi-Fi SSID
const char* password = "qwertyuiop12"; // Your Wi-Fi password

const int ledPin = D10;  // GPIO where the LED is connected

WebServer server(80);  // Create a web server on port 80

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);  // Turn off the LED initially

  // Connect to Wi-Fi network
  WiFi.begin(ssid, password);

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to WiFi");
  Serial.println(WiFi.localIP());  // Print the IP address

  // Define the routes for controlling the LED
  server.on("/led/on", []() {
    digitalWrite(ledPin, HIGH);  // Turn the LED on
    server.send(200, "text/plain", "LED is ON");
  });

  server.on("/led/off", []() {
    digitalWrite(ledPin, LOW);  // Turn the LED off
    server.send(200, "text/plain", "LED is OFF");
  });

  // Start the server
  server.begin();
}

void loop() {
  // Handle incoming client requests
  server.handleClient();
}