#include <KiwisIoT.h>

// Wi-Fi details
const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

// Flame sensor digital pin
#define FLAME_PIN D5

void setup() {

  Serial.begin(9600);

  // Set flame sensor as input
  pinMode(FLAME_PIN, INPUT);

  // Start KiwisIoT
  kiwisiot.begin();
}

void loop() {

  // Keep KiwisIoT connection running
  kiwisiot.run();

  // Read flame sensor
  int flameState = digitalRead(FLAME_PIN);

  if (flameState == LOW) {

    // Flame detected
    Serial.println("Flame Detected!");

    // Send 1 to KiwisIoT Channel 2
    kiwisiot.send("2", 1);

  } else {

    // No flame
    Serial.println("No Flame");

    // Send 0 to KiwisIoT Channel 2
    kiwisiot.send("2", 0);
  }

  delay(1000);
}