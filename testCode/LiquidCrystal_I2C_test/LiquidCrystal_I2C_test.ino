#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD I2C 주소: 0x27

void setup() {
  // LCD 초기 설정, 오프닝 이벤트    
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello,SmartFarm!");
  lcd.setCursor(0,1);
  lcd.print("Made by M2Hands!");
}

void loop() {
}




















