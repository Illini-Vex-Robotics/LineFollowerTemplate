#include "sensors.h"

int getLeftOptical() {
	return left_optical.get_hue();
}

int getRightOptical() {
	return right_optical.get_hue();
}

void setLeftMotor(int power) {
	left_motor.move(power);
}

void setRightMotor(int power) {
	right_motor.move(power);
}