# ESP8266 Flame Sensor with KiwisIoT Dashboard

## Project Overview
This project demonstrates an IoT-based flame detection system using a NodeMCU ESP8266 and a 3-pin flame sensor. The ESP8266 reads the digital sensor output and sends the flame detection status through Wi-Fi to the KiwisIoT platform for remote monitoring.

## Hardware Components
- NodeMCU ESP8266
- 3-Pin Flame Sensor Module
- Jumper Wires
- USB Cable
- Computer or Laptop

## Software Requirements
- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- Wi-Fi Connection

## Circuit Connections

| Flame Sensor | NodeMCU ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| DO | D5 (GPIO14) |

## Working Principle
The flame sensor detects the presence of a flame and provides a digital output.

The ESP8266 reads the sensor output through D5. When the output is LOW, the system identifies a flame. When the output is HIGH, it reports no flame.

The detection status is sent to KiwisIoT every second for remote monitoring.

## KiwisIoT Dashboard

| Channel | Data |
|---|---|
| Channel 2 | Flame Detection Status |

**Channel values:**

- `1` – Flame Detected
- `0` – No Flame

## Configuration
Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor flame detection status through the KiwisIoT dashboard.

## Applications
- IoT fire detection prototypes
- Kitchen safety demonstrations
- Small laboratory monitoring
- Smart home prototypes
- Industrial safety demonstrations
- Remote flame monitoring

## Project Blog
[Read the full project on Hackster.io](https://www.hackster.io/kirusokumar/esp8266-flame-sensor-with-kiwisiot-dashboard-14803b)

## Recommended Platform
[KiwisIoT – IoT Monitoring Platform](https://www.kiwisiot.in/)

**Arduino Library:** https://github.com/Kiwistron/KiwisIoT

**Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

---
**Author:** Kirusokumar