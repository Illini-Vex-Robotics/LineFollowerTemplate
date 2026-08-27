#include "main.h"

bool programKilled = true;
pros::Controller master(pros::E_CONTROLLER_MASTER);

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Line Follower Onboarding Activity");
	startTimer(nullptr);
}

void opControl() {
	printSensorValues(); //Delete this before running your line follower logic!

	while (runTimer) {
		/*
		--------YOUR LOGIC HERE--------

		Provided helper functions:
		- getLeftOptical() - Returns Hue of left color sensor
		- getRightOptical() - Returns Hue of right color sensor
		- setLeftMotor(int power) - Sets power of left motor (0-127)
		- setRightMotor(int power) - Sets power of right motor (0-127)

		Only modify the code in this method
		*/
		pros::delay(20); // Runs loop every 20 ms, DO NOT REMOVE
	}
}