#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

int soilPin = A0;

void setup() {

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Umidita Terra");

  delay(2000);
}

void loop() {

  int soilValue = analogRead(soilPin);

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Umidita:");

  lcd.setCursor(0,1);
  lcd.print(soilValue);

  delay(1000);
}


