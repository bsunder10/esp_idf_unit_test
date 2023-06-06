#!/bin/bash

ESP32_PORT=/dev/ttyUSB0

echo "Flashing to the ESP Device"
echo "Connected to port $ESP32_PORT"


idf.py -p $ESP32_PORT flash