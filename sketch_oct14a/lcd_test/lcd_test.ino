/*
https://somtips.com
https://youtube.com/somtips
*/
#include <LiquidCrystal.h>
int Contrast=20;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
  } 
     void loop()
 { 
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("Hello So");
   delay(4000);
   lcd.print("        ");
   lcd.setCursor(1, 0);
   lcd.print("Good Morn");
   delay(4000);
 
   
 }
