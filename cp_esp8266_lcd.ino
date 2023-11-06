#include "Wire.h"
#include "LiquidCrystal_I2C.h"

// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

int count = 0;

void setup() {
  Serial.begin(115200);
  Serial.setDebugOutput(true);
  
  delay(2000);
  Serial.println("init display...");
  lcd.init();
  lcd.backlight();
  //lcd.noBacklight();

}


void loop() {
  #if 1
  Serial.println("Hello ESP8266 CPIOT 0");
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello ESP8266 CPIOT");

  lcd.setCursor(0, 1);
  lcd.print(count++);
  #endif
  delay(1000);

}
