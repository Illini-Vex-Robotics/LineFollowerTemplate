#include "sensors.h"
#include <cstdio>
/*
=-------Set sensor ports, but don't touch anything else in this file---------
*/

pros::Motor left_motor(9); //Add port numbers here
pros::Motor right_motor(-10); 
pros::Optical left_optical(19); 
pros::Optical right_optical(20); 

void initSensors() {
	left_optical.set_led_pwm(100);
	right_optical.set_led_pwm(100);

	left_optical.set_integration_time(5);
	right_optical.set_integration_time(5);

	left_optical.disable_gesture();
	right_optical.disable_gesture();
}

double getLeftOpticalHue() {return left_optical.get_hue();}

double getRightOpticalHue() {return right_optical.get_hue();}

void setLeftMotor(int power) {left_motor.move(power);}

void setRightMotor(int power) {right_motor.move(power);}