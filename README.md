# RC-Controlled-Car-with-NRF2401-Module


This project demonstrates how to build a remote-controlled car using two Arduino Nano boards, NRF24L01 wireless transceivers, an L298N motor driver, and a joystick module for control. The project allows the car to move forward, backward, left, and right through wireless communication.

# Project Overview

The RC car consists of two main parts:
Transmitter (Controller): Equipped with a joystick module connected to an Arduino Nano, which reads the joystick inputs and sends movement commands wirelessly via the NRF24L01 module.
Receiver (Car): Consists of an Arduino Nano connected to an L298N motor driver and an NRF24L01 module that receives commands from the transmitter and drives the motors accordingly.

# Features

Wireless control using NRF24L01 transceiver modules.
Joystick-based directional control (Forward, Backward, Left, Right).
Motor driver (L298N) for precise control of motor operations.
Arduino Nano for easy programming and interfacing.
Real-time, low-latency response between transmitter and receiver.

# Circuit Diagram and Connections

Transmitter Connections (Joystick and NRF24L01)
NRF24L01 to Arduino Nano:
GND → GND
VCC → 3.3V
CE → D9
CSN → D10
SCK → D13
MOSI → D11
MISO → D12

# Joystick to Arduino Nano:

VRx → A0
VRy → A1
SW → D8
GND → GND
VCC → 5V

# Receiver Connections (L298N Motor Driver and NRF24L01)

NRF24L01 to Arduino Nano:
GND → GND
VCC → 3.3V
CE → D9
CSN → D10
SCK → D13
MOSI → D11
MISO → D12


# L298N Motor Driver to Arduino Nano:

IN1 → D2
IN2 → D3
IN3 → D4
IN4 → D5
ENA → D6 (PWM)
ENB → D7 (PWM)
+12V → External Power Supply
GND → Arduino GND

# Working Explanation

1. Transmitter:
The joystick provides analog inputs for X and Y axes.
Arduino Nano reads these inputs and determines the direction (Forward, Backward, Left, Right) based on the axis values.
The direction command is sent wirelessly using the NRF24L01 module.

2. Receiver:
The NRF24L01 on the car receives the transmitted command.
Arduino Nano processes the command and drives the motors via the L298N motor driver.
The car moves in the specified direction based on the received command.

# Troubleshooting

Ensure the NRF24L01 modules are powered at 3.3V, not 5V.
Check the wiring and pin connections.
Use external power for motors to avoid Arduino voltage drops.
Add Serial.print() for debugging if required.

# Future Improvements

Add speed control using PWM signals.
Implement battery level monitoring.
Integrate obstacle avoidance sensors.

# Author

Narasinagarao K
+917075025629
knrkondapalli123@mail.com
