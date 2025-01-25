# Ultrasonic Sensor-Controlled Relay System

This project uses an ultrasonic distance sensor (e.g., HC-SR04) to measure the distance of objects and control two relays based on the measured distance. The system is simple, efficient, and can be used for automation purposes like object detection and switching between devices.

---

## How It Works

### **1. Ultrasonic Sensor Distance Measurement**
- **Trigger and Echo Pins:**
  - `trigPin`: Sends an ultrasonic pulse.
  - `echoPin`: Receives the reflected ultrasonic pulse.

- **Distance Calculation:**
  - The `trigPin` sends a 10-microsecond HIGH pulse to generate the ultrasonic signal.
  - The `echoPin` listens for the echo and measures the time (`duration`) it takes for the signal to return.
  - Distance is calculated using the formula:
    ```
    Distance = (Duration * Speed of Sound) / 2
    ```
    Where the speed of sound is approximately `0.034 cm/µs`.

### **2. Relay Control**
- The system uses two relays connected to pins `2` and `3`:
  - Relay 1 is activated when the distance is less than or equal to 10 cm.
  - Relay 2 is activated when the distance is greater than 10 cm.
  
- **Relay Logic:**
  - **If Distance ≤ 10 cm:**
    - Relay 1 is turned ON.
    - Relay 2 is turned OFF.
  - **If Distance > 10 cm:**
    - Relay 1 is turned OFF.
    - Relay 2 is turned ON.

### **3. Serial Monitor Feedback**
- The system prints the distance and the state of both relays to the serial monitor for debugging purposes.
- For example:Distance: 8 cm Relay 1: ON Relay 2: OFF


---

## Features
1. **Distance-Based Automation:**
 - Uses an ultrasonic sensor to measure distances and trigger relays.

2. **Dual Relay Control:**
 - Activates one relay at a time based on the distance.

3. **Real-Time Feedback:**
 - Provides distance measurements and relay states via the serial monitor.

---

## Components Required
1. **Ultrasonic Sensor (e.g., HC-SR04):**
 - Measures the distance to an object using ultrasonic pulses.

2. **Relay Module (2 Channels):**
 - Controls two devices based on the measured distance.

3. **Arduino Board:**
 - Processes the distance data and controls the relays.

4. **Connecting Wires:**
 - For connecting the components.

5. **Power Supply:**
 - To power the Arduino and relay module.

---

## Installation and Usage

### **1. Wiring**
- Connect the ultrasonic sensor to the Arduino:
- `trigPin` → Pin 9
- `echoPin` → Pin 10
- Connect the relays to pins `2` and `3` of the Arduino.
- Provide power to the relay module and Arduino.

### **2. Upload Code**
- Copy the provided code into the Arduino IDE.
- Connect the Arduino to your computer via USB.
- Select the correct **COM Port** and **Board Type** in the Arduino IDE.
- Upload the code to the Arduino.

### **3. Monitoring Output**
- Open the Arduino IDE's Serial Monitor to view the distance and relay status in real-time.

---

## Applications
1. **Object Detection:**
 - Switches between devices based on the proximity of an object.

2. **Home Automation:**
 - Automates switching between appliances based on distance thresholds.

3. **Industrial Automation:**
 - Controls machinery or processes based on object detection.

---

## Limitations
1. **Fixed Distance Threshold:**
 - The threshold (10 cm) is hardcoded but can be adjusted in the code.

2. **Environmental Sensitivity:**
 - Ultrasonic sensors may be affected by environmental factors like temperature or obstacles.

3. **Relay Limitations:**
 - The relays can only control devices within their voltage and current rating.

---

## Future Enhancements
1. **Dynamic Threshold Adjustment:**
 - Add a potentiometer or user interface to adjust the distance threshold dynamically.

2. **Multiple Distance Zones:**
 - Control more relays or devices based on multiple distance thresholds.

3. **Wireless Integration:**
 - Add a wireless module (e.g., Bluetooth or Wi-Fi) to control and monitor the system remotely.

