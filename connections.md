# 🔌 Connections (RFID + LCD + Buzzer)

## RFID RC522 → Arduino UNO
- SDA  → D10
- SCK  → D13
- MOSI → D11
- MISO → D12
- RST  → D9
- GND  → GND
- 3.3V → 3.3V (⚠️ Do NOT use 5V)

## LCD (I2C) → Arduino UNO
- VCC → 5V
- GND → GND
- SDA → A4
- SCL → A5

## Buzzer → Arduino UNO
- + → D3
- - → GND
