#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27,16,2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("MUGISHA");
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
