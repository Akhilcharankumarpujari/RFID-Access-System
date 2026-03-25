# 🔐 RFID-Based Access Control System using Arduino

## 📌 Abstract
This project implements an RFID-based access control system using Arduino, RFID module (RC522), LCD display, and buzzer. It allows only authorized users to gain access.

---

## 🎯 Objective
- To design a secure access system
- To prevent unauthorized entry
- To learn RFID interfacing with Arduino

---

## 🛠 Components Used
- Arduino UNO
- RFID RC522 Module
- 16x2 LCD (I2C)
- Buzzer
- Breadboard
- Jumper Wires

---

## ⚙️ Working
1. User scans RFID card
2. Arduino reads UID
3. UID is verified
4. If valid:
   - LCD shows "ACCESS GRANTED"
   - Buzzer gives 2 short beeps
5. If invalid:
   - LCD shows "ACCESS DENIED"
   - Buzzer gives 1 long beep

---

## 🔌 Connections

### RFID → Arduino
- SDA → D10
- SCK → D13
- MOSI → D11
- MISO → D12
- RST → D9
- GND → GND
- 3.3V → 3.3V

### LCD (I2C) → Arduino
- VCC → 5V
- GND → GND
- SDA → A4
- SCL → A5

### Buzzer → Arduino
- + → D3
- - → GND

---

## 📸 Project Image
![Project](images/project.jpg)

---

## 💻 Code
See `code/rfid_access.ino`

---

## ✅ Advantages
- Low cost
- Easy to use
- Fast authentication

---

## ❌ Limitations
- UID cloning possible
- Limited security

---

## 🚀 Future Improvements
- Add IoT monitoring
- Add fingerprint module
- Mobile app integration

---

## 📚 Applications
- Smart door lock
- Attendance system
- Office security

---

## 👨‍💻 Author
Akhil charan kumar pujari
