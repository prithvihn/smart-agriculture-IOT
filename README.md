iot based agriculture project
# Smart Agriculture IoT System

A complete IoT-based Smart Agriculture project that monitors environmental conditions and automates irrigation. This system collects data from sensors (e.g., soil moisture, temperature, humidity), streams it to a dashboard/web UI, and can trigger irrigation automatically based on thresholds.

This repository contains:
- Sensor interfacing and firmware code  
- Web interface (HTML) for live monitoring  
- Supporting modules for data processing

## 📌 Project Overview

Traditional farming relies on manual monitoring and irrigation. Smart Agriculture leverages **Internet of Things (IoT)** to automate field monitoring and control, improving water usage efficiency and crop yields.

This system:
- Reads soil moisture levels
- Monitors temperature and humidity
- Displays real-time data in the UI
- Automatically controls irrigation/pumps

The architecture typically involves sensors, a microcontroller (ESP/Arduino), and a server/UI for display and control. :contentReference[oaicite:1]{index=1}

## 📊 Features

✔ Real-time monitoring of soil moisture  
✔ Temperature & humidity sensing  
✔ Web-based dashboard for live data  
✔ Auto irrigation logic (based on moisture threshold)  
✔ Simple, extensible design

## 🧩 Components

**Hardware**
- Soil Moisture Sensor  
- DHT11 (Temperature + Humidity Sensor)  
- ESP8266 / Arduino (MCU)  
- Relay module (for motor/pump control)

**Software**
- Firmware code (`code.c`)  
- Front-end UI (`index.html`)  
- Backend/data service (optional Node/Python server)

## 🛠️ Installation & Setup

### 1. Clone the Repo

```bash
git clone https://github.com/prithvihn/smart-agriculture-IOT.git
cd smart-agriculture-IOT
