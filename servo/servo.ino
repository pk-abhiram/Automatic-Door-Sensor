#include<Servo.h>
Servo myServo;
int buttonState=1;
void setup() {
   myServo.attach(13);
   pinMode(3, INPUT);
  // put your setup code here, to run once:
  myServo.write(0);
  Serial.begin(9600);

}

void loop() {
  myServo.write(180);
delay(500);   
 myServo.write(0);
delay(500); 
}
