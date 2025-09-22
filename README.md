# Accident Prevention System using IoT  

This project is designed to monitor driver safety using **Arduino** with the help of multiple sensors such as a **temperature sensor**, **alcohol sensor**, and **eye blink sensor**. It aims to detect abnormal driver conditions and trigger alerts or preventive actions to ensure safety.  

---

## 🚀 Features  
- **Temperature Monitoring**: Detects high body temperature and turns on a warning LED if the temperature exceeds the threshold.  
- **Eye Blink Monitoring**: Uses an IR-based eye blink sensor to detect drowsiness. If the driver’s eyes remain closed, a buzzer will sound.  
- **Alcohol Detection**: The MQ-3 alcohol sensor measures alcohol concentration. If alcohol is detected above the threshold, the motor is turned off.  

---

## 🛠️ Components Used  
- **Arduino Uno** (microcontroller)  
- **Temperature Sensor (Analog – A4 pin)**  
- **Alcohol Sensor (MQ-3)**  
- **Eye Blink Sensor (IR Sensor)**  
- **Buzzer**  
- **LED (for temperature warning)**  
- **Motor (simulated for vehicle engine control)**  

---

## ⚡ Circuit Connections  
- **Temperature Sensor** → A4 (Analog input)  
- **Eye Blink Sensor** → Digital pin 2  
- **Alcohol Sensor (MQ-3)** → Analog pin A0  
- **Buzzer** → Digital pin 13  
- **LED (Temperature Alert)** → Digital pin 3  
- **Motor** → Digital pin 9  

---

## 📜 Code Explanation  
1. **Temperature Sensor**:  
   - Reads analog input from A4.  
   - Converts it into temperature.  
   - If above threshold (15°C in this code), turns on the warning LED.  

2. **Eye Blink Sensor**:  
   - Reads digital signal from IR sensor.  
   - If eyes are closed, the buzzer is activated.  

3. **Alcohol Sensor (MQ-3)**:  
   - Reads analog values from A0.  
   - If alcohol concentration is high, motor stops (simulating vehicle lock).  

---

## ▶️ How to Run  
1. Connect the sensors and components as per the circuit.  
2. Upload the code to the Arduino board.  
3. Open the **Serial Monitor** at 9600 baud rate to observe the readings.  
4. Test each sensor individually and then together.  

---

## 🔮 Future Improvements  
- Integration with **IoT** to send alerts to authorities.  
- Add **GPS module** to track vehicle location in emergencies.  
- Implement **LCD Display** to show driver status.  

---

## 📷 Project Overview  
This system is useful in:  
- Preventing accidents due to drunk driving.  
- Detecting driver drowsiness and issuing alerts.  
- Monitoring driver health conditions such as abnormal temperature.  

---

## 👩‍💻 Author  
Developed by **Poojitha Rangisetti**  
Student at **VVIT**, specializing in **CSE (IoT, Cybersecurity, and Blockchain)**  

![WhatsApp Image 2025-09-22 at 22 32 30_9d4d7ba6](https://github.com/user-attachments/assets/0307c17d-64fa-41a6-9f18-0395a2e618a7)
