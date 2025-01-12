# Autonomous Racing Robot

Welcome to the **Autonomous Racing Robot** repository!
This project focuses on building and programming a fully autonomous robot capable of navigating and competing in a racing environment. The project has been developed with a C++ implementation for greater flexibility and control.

---

## Table of Contents

- [Project Description](#project-description)
- [Features](#features)
- [Components](#components)
- [Setup Instructions](#setup-instructions)
- [Code Details](#code-details)
- [License](#license)

---

## Project Description

The **Autonomous Racing Robot** is designed to navigate a track autonomously using sensors and programmed algorithms. Its capabilities include:
- Line following.
- Avoiding obstacles.
- Real-time decision-making for optimal pathfinding.

The robot is built with modularity and scalability in mind, making it ideal for robotics enthusiasts and educational purposes.

---

## Features

- **Line Following**: Uses sensors to detect and follow a line on the racing track.
- **Obstacle Avoidance**: Equipped with distance sensors to navigate around objects.
- **Customizable Code**: Written in C++ for enhanced performance and adaptability.
- **Scalable Design**: Easily integrates additional modules for new functionalities.

---

## Components

### Hardware
- **Microcontroller**: Arduino Uno (or equivalent).
- **Motors**: 2x DC Motors with an H-Bridge motor driver.
- **Sensors**: 
  - Line-tracking sensors (e.g., IR sensors).
  - Ultrasonic distance sensor.
- **Chassis**: 2-wheel drive robot base with a caster wheel.
- **Battery**: 7.4V LiPo battery (or equivalent power source).

### Software
- **IDE**: Arduino IDE for programming in C++.
- **Libraries**:
  - Servo.h
  - Wire.h (for I2C communication, if applicable)
  - Custom sensor handling library (optional).

---

## Setup Instructions

1. **Hardware Assembly**:
   - Attach the sensors, motors, and microcontroller to the chassis as per the circuit diagram.
   - Ensure all connections are secure and insulated.

2. **Software Installation**:
   - Clone this repository:
     ```bash
     git clone https://github.com/popescuroberta/Autonomous-racing-robot.git
     ```
   - Install the Arduino IDE from [here](https://www.arduino.cc/en/software).
   - Open the `autonomous_racing_robot.ino` file in the Arduino IDE.
   - Install necessary libraries from the Arduino Library Manager.

3. **Code Upload**:
   - Connect your microcontroller to your computer using a USB cable.
   - Select the correct board and port in the Arduino IDE.
   - Upload the code.

4. **Testing**:
   - Place the robot on a track with clear lines and obstacles.
   - Power on the robot and observe its performance.

---

## Code Details

The code is organized into several functional blocks, including:
- **Initialization**: Sets up sensors, motors, and serial communication.
- **Line Following Logic**: Implements PID (Proportional-Integral-Derivative) control for smooth navigation.
- **Obstacle Avoidance**: Monitors distance sensors and adjusts the path dynamically.
- **Decision-Making**: Combines inputs from all sensors to determine the optimal action.

Key functions are well-documented within the code for ease of understanding and modification.

---

## Future Improvements

- Implement a camera module for advanced image recognition and lane detection.
- Optimize the PID algorithm for faster response times.
- Add a Bluetooth/Wi-Fi module for remote control and telemetry data.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

Feel free to contribute to this project! Open an issue or submit a pull request for suggestions and improvements. 
