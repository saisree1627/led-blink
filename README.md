# ESP32 LED Blink

This repository contains a simple **LED blink example for ESP32** using the **Arduino framework** with **PlatformIO**.  
It is intended for beginners to verify ESP32 setup and GPIO operation.

---

## Features
- Blinks the ESP32 built-in LED
- Uses Arduino framework
- Works with PlatformIO
- Beginner-friendly example

---

## Hardware Required
- ESP32 Development Board (ESP32-DevKit / ESP32-WROOM)
- USB data cable
- Computer (Windows / Linux / macOS)

---

## Software Required
- Visual Studio Code
- PlatformIO Extension
- ESP32 USB-to-UART driver (CP2102 / CH340)

---

---

## PlatformIO Configuration (`platformio.ini`)
```ini
[env:esp32dev]
platform = espressif32
board = esp32dev
framework = arduino

## Project Structur
