#include<Servo.h>
#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD
#include <dht.h>

dht DHT;
#define DHT11_PIN 11
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);
Servo myServo;
Servo myServo1;
//pir
int pir1=7;
int pir2=8;
int pir3=6;

//variables
int a=0;
int b=0;
  int d=0;
  int g=0;
  int h=0;
int f=0;
int n=0;
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.begin(16,2); 
   myServo.attach(13);
   myServo1.attach(12);
    pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  pinMode(pir3, INPUT);
  myServo.write(0);
  myServo1.write(0);
  Serial.begin(9600);
 
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  delay(3000);
  h=0;
  f=digitalRead(pir1);
  g=digitalRead(pir2);
 d=digitalRead(pir3); 
 delay(1000);
  lcd.setCursor(0, 1);
 lcd.print("Temp=");
 lcd.setCursor(5, 1);
   lcd.print(DHT.temperature);
   lcd.setCursor(7, 1);
  lcd.print(" Hum=");
  lcd.setCursor(12, 1);
  lcd.print(DHT.humidity);
if(d==1)
{
 f=0;

}
 else if(f==1)
{
 d=0;
 }  
  if(n==0)
{

 Serial.println("0 Person"); 
   lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("0 person"); // Print the string "Hello World!"
  
 a=1;
 b=0;    
}
if((d==1)&&(n==0))
{
  
 Serial.println("1 Person"); 
lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("1 person"); // Print the string "Hello World!"
 
  myServo.write(120);
  delay(5000);
  myServo.write(0);
  delay(2000);
n=1;
  
 goto out;
 
  
}
 else if((d==1)&&(n==1))
{ 
  Serial.println("2 Person");  
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("2 person"); // Print the string "Hello World!"

  myServo.write(120);
  delay(5000);
  myServo.write(0);
  delay(2000);
n=2;
  
 goto out;
}
else if((d==1)&&(n==2))
{ 
 
  
 Serial.println("3 Person");  
 lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("3 person"); // Print the string "Hello World!"
 
myServo.write(120);
  delay(5000);
  myServo.write(0);
  delay(2000);
 n=3;
  
 goto out;  
}  
 else if((d==1)&&(n==3))
{
  
  Serial.println("4 Person"); 
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("4 person"); // Print the string "Hello World!"

myServo.write(120);
  delay(5000);
  myServo.write(0);
  delay(2000);
n=4;
  
 goto out; 
} 
 else if((d==1)&&(n==4))
{
  Serial.println("5 Person");  
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("5 person"); // Print the string "Hello World!"

  myServo.write(120);
  delay(5000);
  myServo.write(0);
  delay(2000);
n=5;
   
 goto out;
}  
else if((d==1)&&(n==5))
{
  
 Serial.println("Full Capacity");
 lcd.clear();
lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("Full Capacity"); // Print the string "Hello World!"


 delay(1000);     
}    
 else if((f==1)&&(n==5))
{ 
   lcd.clear();
  Serial.println("4 Person");  
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("4 person"); // Print the string "Hello World!"

  myServo1.write(120);
  delay(5000);
  myServo1.write(0);
  delay(2000);
n=4;
   
 goto out;  
}
 else if((f==1)&&(n==4))
{  
  
  Serial.println("3 Person");  
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("3 person"); // Print the string "Hello World!"

 myServo1.write(120);
  delay(5000);
  myServo1.write(0);
  delay(2000);
 n=3;
   
 goto out;;  
}
else if((f==1)&&(n==3))
{ 
  
  Serial.println("2 Person");  
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("2 person"); // Print the string "Hello World!"
 
   myServo1.write(120);
  delay(5000);
  myServo1.write(0);
  delay(2000);
n=2;
  
 goto out; 
}  
 else if((f==1)&&(n==2))
{
   
  Serial.println("1 Person");  
  lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("1 person"); // Print the string "Hello World!"
 
   myServo1.write(120);
  delay(5000);
  myServo1.write(0);
  delay(2000);
n=1;
   
 goto out;  
} 
 else if((f==1)&&(n==1))
{
 
 Serial.println("0 Person");  
 lcd.setCursor(0, 0); // Set the cursor on the first column and first row.
  lcd.print("0 person"); // Print the string "Hello World!"

 myServo1.write(120);
  delay(5000);
  myServo1.write(0);
  delay(2000);
n=0;
 delay(1000);   
 goto out;
}
else if((f==1)&&(n==0))
{
delay(1000);
}
out:
delay(100);
}
