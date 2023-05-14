//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display
String val="Hello World";
int count=0;

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
    lcd.clear();
  lcd.backlight();
//  lcd.setCursor(3,0);
//  lcd.print("Hello, Dear!");
  
}


void loop()
{
lcd.setCursor(1,0);
lcd.print(val);
delay(700);
lcd.autoscroll();
count=count -1;
if (count>=20){
//applied if condition on count variable
lcd.noAutoscroll();
//stopped auto-scrolling
delay(1000);
//generated delay of 3 seconds
lcd.clear();
//cleared the LCD display
count=0;

}
}
