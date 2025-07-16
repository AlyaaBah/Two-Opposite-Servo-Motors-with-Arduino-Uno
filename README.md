# Two Opposite Servo Motors with Arduino Uno

This project demonstrates how to control two servo motors using an Arduino Uno, where both motors move in opposite directions simultaneously. It's a great example of synchronized motion control and can be used in robotics, mechanical arms, or any system that requires mirrored movement.

---

##  Components Required

To build this project, you will need the following components:

- Arduino Uno board  
- 2 × Servo Motors (e.g., TowerPro SG90 or MG996R)  
- Breadboard  
- Jumper wires  
- External 5V power supply (recommended for stable servo operation)  
- USB cable for programming the Arduino

---

##  Circuit Connections

Each servo motor has three pins: Signal, VCC, and GND. Connect them as follows:

| Servo Motor | Signal Pin | VCC | GND |
|-------------|------------|-----|-----|
| Servo 1     | D4         | 5V  | GND |
| Servo 2     | D5         | 5V  | GND |

>  **Important:** It's highly recommended to use an external 5V power source to avoid overloading the Arduino's onboard regulator. Make sure to connect the external power supply's GND to the Arduino's GND to ensure a common ground.

---

##  Project Behavior

Once powered and programmed, the two servo motors will perform a synchronized sweep:

- Servo 1 rotates from 0° to 180°.
- Servo 2 rotates from 180° to 0° at the same time.
- Then both reverse their motion back to the starting positions.
- This loop continues indefinitely.

This behavior is useful in applications like:

- Opening and closing mechanisms  
- Robotic arms with mirrored joints  
- Mechanical linkages that require opposite motion

---

##  How to Use

1. Assemble the circuit as described above.
2. Upload the Arduino sketch using the Arduino IDE.
3. Power the Arduino and servos.
4. Observe the synchronized opposite movement of the two servo motors.

---

##  Notes

- Make sure your servo motors are not under heavy load, as this may cause instability or require higher current than the Arduino can safely provide.
- If using high-torque servos, consider using a motor driver or dedicated servo controller.
- You can expand this project by adding buttons, sensors, or integrating it into a larger robotic system.

---

Feel free to fork this project, modify it, and use it in your own robotics experiments!

⭐ Created by Alyaa

