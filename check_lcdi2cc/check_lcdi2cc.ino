// Created by Muhammad Nabeel
// github: www.github.com/mnabeelmalik
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 20 chars and 4 line display
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  lcd.begin();  // initialize lcd
  lcd.backlight(); // on led backlight
  lcd.print("This Is My Checking"); // msg
  lcd.setCursor(0, 1);
  lcd.print("Message");
}

void loop()
{
  lcd.setCursor(0, 2)
  lcd.print("M.Nabeel");
  delay(1000);
}
