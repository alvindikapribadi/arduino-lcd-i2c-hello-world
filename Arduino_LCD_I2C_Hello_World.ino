/*
===========================================================
Project  : Arduino LCD I2C Hello World
Platform : Arduino Uno (compatible boards)

Description:
Basic project to display "Hello, World!" on a 16x2 LCD 
with I2C module. Perfect for beginners who want to learn 
how to use I2C LCD with Arduino.

Components:
- 1x Arduino Uno
- 1x LCD 16x2 with I2C module
- 4x Jumper wires
- USB cable

Wiring (Arduino Uno):

LCD I2C   ->   Arduino
VCC       ->   5V
GND       ->   GND
SDA       ->   A4
SCL       ->   A5

If using other boards:
- Arduino Mega: SDA = 20, SCL = 21

How to Install I2C LCD Library:

1. Open Arduino IDE
2. Go to Sketch
3. Click Include Library
4. Select Manage Libraries
5. Search: "LiquidCrystal I2C"
6. Install library by Frank de Brabander
7. Restart Arduino IDE (recommended)

===========================================================
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set LCD address to 0x27 (common address)
// If not working, try 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();              // Initialize LCD
  lcd.backlight();         // Turn on backlight
  
  lcd.setCursor(0, 0);     // Column 0, Row 0
  lcd.print("Hello, World!");

  lcd.setCursor(0, 1);     // Column 0, Row 1
  lcd.print("@AlvinPribadi");
}

void loop() {
  // Nothing here
}
