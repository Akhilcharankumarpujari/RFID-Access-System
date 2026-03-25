#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SS_PIN 10
#define RST_PIN 9
#define BUZZER 3

MFRC522 mfrc522(SS_PIN, RST_PIN);
LiquidCrystal_I2C lcd(0x27, 16, 2);

byte validUID[4] = {0xDE, 0xAD, 0xBE, 0xEF};

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();

  pinMode(BUZZER, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Scan Your Card");
}

void loop() {
  if (!mfrc522.PICC_IsNewCardPresent()) return;
  if (!mfrc522.PICC_ReadCardSerial()) return;

  if (checkUID(mfrc522.uid.uidByte)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ACCESS GRANTED");
    lcd.setCursor(0, 1);
    lcd.print("Welcome User");

    digitalWrite(BUZZER, HIGH);
    delay(200);
    digitalWrite(BUZZER, LOW);
    delay(200);
    digitalWrite(BUZZER, HIGH);
    delay(200);
    digitalWrite(BUZZER, LOW);

  } else {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ACCESS DENIED");

    digitalWrite(BUZZER, HIGH);
    delay(1000);
    digitalWrite(BUZZER, LOW);
  }

  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Scan Your Card");

  mfrc522.PICC_HaltA();
}

bool checkUID(byte *uid) {
  for (byte i = 0; i < 4; i++) {
    if (uid[i] != validUID[i]) {
      return false;
    }
  }
  return true;
}
