# ESP8266 Sound Sensor with KiwisIoT Dashboard

## Project Overview
This project monitors changes in surrounding sound levels using a NodeMCU ESP8266 and an analog sound sensor. The ESP8266 reads the sensor output and sends the readings through Wi-Fi to the KiwisIoT platform for live remote monitoring.

## Hardware Components
- NodeMCU ESP8266
- Gravity Analog Sound Sensor
- Jumper Wires
- USB Cable
- Computer or Laptop

## Software Requirements
- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- Wi-Fi Connection

## Circuit Connections

| Sound Sensor | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| AO | A0 |

Connect the analog output (AO) to A0 to read changes in sound sensor values. Check the sensor and board specifications to ensure the output voltage is safe for the ESP8266 analog input.

## Working Principle
The sound sensor detects changes in surrounding sound and produces an analog output. The ESP8266 reads this signal using `analogRead(A0)`.

The sensor value is displayed in the Serial Monitor and transmitted to KiwisIoT every second. Users can observe changes in sound readings through the online dashboard.

## KiwisIoT Dashboard

| Channel | Data |
|---|---|
| Channel 1 | Sound Sensor Analog Reading |

The readings are raw analog values, not calibrated sound measurements in decibels (dB).

## Configuration
Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor sound sensor readings through the KiwisIoT dashboard.

## Applications
- Basic noise monitoring prototypes
- Classroom sound monitoring
- Room activity monitoring
- Smart home experiments
- Sound-triggered projects
- Environmental monitoring experiments

## Project Blog
[Read the full project on Hackster.io](https://www.hackster.io/kirusokumar/esp8266-sound-sensor-with-kiwisiot-dashboard-ae2452)

## Recommended Platform
[KiwisIoT – IoT Monitoring Platform](https://www.kiwisiot.in/)

**Arduino Library:** https://github.com/Kiwistron/KiwisIoT

**Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

---
**Author:** Kirusokumar
