#include<LiquidCrystal.h>
#include<Servo.h>
Servo myServo;
Servo myServo1;
LiquidCrystal lcd(12,10,5,4,3,2);
int sensorInput;
double temp;
int pir1=9;
int pir2=11;
int val1=0,val2=0;
int a=0;
int b=0;
  int d=0;
int f=0;
void setup()
{
   myServo.attach(13);
   myServo1.attach(7);
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  
  lcd.begin(16,2);
  Serial.begin(9600);
  analogWrite(6,25);

  myServo.write(0);
  myServo1.write(0);
}

void loop()
{
  sensorInput=analogRead(A0);
  temp=(double)sensorInput/1024;
  temp=temp*5;
  temp=temp-0.5;
  temp=temp*100;  
  Serial.println(temp);
  delay(20);
if(35<temp<41)  
{ 
  
d=digitalRead(pir1);
 f=digitalRead(pir2);  
if(d==1)
{
 f==0;
 delay(2000);

}
 else if(f==1)
{
 d==0;
 delay(2000);
 
}  
  if(a==0)
{
 lcd.setCursor(1,0);
 lcd.print("0 Person");
 Serial.println("0 Person"); 
   
 a=1;
 b=0;    
}
 else if((d==1)&&(a==1))
{
 myServo.write(90);
lcd.setCursor(1,0);
 lcd.print("1 Person");
 Serial.println("1 Person");  

 delay(5000);   
 myServo.write(0);
 a=2; 
 b=4;  
}
 else if((d==1)&&(a==2))
{  myServo.write(90);
   lcd.setCursor(1,0);
 lcd.print("2 Person");
  Serial.println("2 Person");  

 delay(5000);   
 myServo.write(0);
 a=3; 
 b=3;
}
else if((d==1)&&(a==3))
{ 
  myServo.write(90);
  lcd.setCursor(1,0);
 lcd.print("3 Person");
 Serial.println("3 Person");  

 delay(5000);    
  myServo.write(0);
 a=4;    
 b=2;  
}  
 else if((d==1)&&(a==4))
{
   myServo.write(90);
   lcd.setCursor(1,0);
 lcd.print("4 Person");
  Serial.println("4 Person");  

 delay(5000);     
   myServo.write(0);
 a=5; 
 b=1;  
} 
 else if((d==1)&&(a==5))
{myServo.write(90);
   lcd.setCursor(1,0);
 lcd.print("5 Person");
  Serial.println("5 Person");  
a=6;
 delay(5000); 
 myServo.write(0);
}  
else if((d==1)&&(a==6))
{
  lcd.setCursor(1,0);
 lcd.print("Full Capacity");
 Serial.println("Full Capacity");
 delay(5000);   

 Serial.println("                 "); 
 
 delay(1000);

 Serial.println("Full Capacity");
 delay(2500);  
 lcd.setCursor(1,0);
  lcd.print("                 ");
 Serial.println("                 "); 
 delay(2500);    
}    
 else if((f==1)&&(b==0))
{ 
   myServo1.write(90);
   lcd.setCursor(1,0);
 lcd.print("4 Person");
  Serial.println("4 Person");  

 delay(5000);      
   myServo1.write(0);
 b=1; 
 a=4;  
}
 else if((f==1)&&(b==1))
{  
   myServo1.write(90);
   lcd.setCursor(1,0);
 lcd.print("3 Person");
  Serial.println("3 Person");  

 delay(5000); 
   myServo1.write(0);
 b=2; 
 a=3;  
}
else if((f==1)&&(b==2))
{ 
  myServo1.write(90);
  lcd.setCursor(1,0);
 lcd.print("2 Person");
  Serial.println("2 Person");  

 delay(5000);    
  myServo1.write(0);
 b=3; 
 a=2; 
}  
 else if((f==1)&&(b==3))
{
   myServo1.write(90);
   lcd.setCursor(1,0);
 lcd.print("1 Person");
  Serial.println("1 Person");  

 delay(5000);   
   myServo1.write(0);
 b=4;
 a=1;  
} 
 else if((f==1)&&(b==4))
{
   myServo1.write(90);
   lcd.setCursor(1,0);
 lcd.print("0 Person");
 Serial.println("0 Person");  

 delay(5000);  
   myServo1.write(0);
 b=5;  
 a=0;  
}
else if((f==1)&&(b==5))
{

} 
} 
}
