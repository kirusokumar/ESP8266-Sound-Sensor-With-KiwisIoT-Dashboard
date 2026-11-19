#include <KiwisIoT.h>

// Wi-Fi details
const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";

// KiwisIoT Topic ID
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

// Sound sensor analog pin
#define SOUND_PIN A0

void setup() {

  Serial.begin(9600);

  // Start KiwisIoT
  kiwisiot.begin();
}

void loop() {

  // Keep KiwisIoT connection running
  kiwisiot.run();

  // Read sound sensor
  int soundValue = analogRead(SOUND_PIN);

  // Send value to KiwisIoT
  kiwisiot.send("1", soundValue);

  // Show value in Serial Monitor
  Serial.print("Sound Value = ");
  Serial.println(soundValue);

  delay(1000);
}
