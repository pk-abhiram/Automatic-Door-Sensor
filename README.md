# Automatic-Door-Sensor
IOT mini Project

Aim:
	To develop an automatic door opening system using the Arduino Uno board

Objective:
	The main objective of this is to build an IoT based automated automatic door opening system that automatically opens the door in presence of a movement. This is one of the key components of the smart city where our project can be used in various places where physical contact is minimized.

Abstract:
	In the Automatic Door Opening System, the main component or hardware is the sensor which detects the persons (well, the motion of the person in our case). For this purpose, we will be using the PIR Motion Detector Sensor.
When you step on the mat, the sensors send a signal to the automatic doors that tells them to open. Other automatic doors operate on optic or motion sensors. When these optic or motion sensors sense motion nearby, they trigger the automatic doors to open and then close.

WORKING OF AUTOMATIC DOOR OPENER SYSTEM
The working of the Automatic Door Opener System using Arduino and PIR Sensor is very simple. This project can be considered as an extension of Arduino PIR Sensor Tutorial and Arduino L298N DC Motor Control Tutorial.
When the PIR Sensor detects any motion of a person, its Data OUT Pin will become HIGH. As this pin is connected to the Arduino, it will detect this HIGH Signal and understands that there is person approaching the door.
Arduino then immediately activates the L298N Motor Driver module to open the door. After some time (about 2 to 5 seconds in this project), the Arduino will once again activate the Motor Drive to close the door.      

Team-
1	20171CSE0003	AASHIKA

2	20171CSE0014	ABHIRAM PK

3	20171CSE0025	AHADH SHAJAHAN

4	20171CSE0049	AMINA AHMED
