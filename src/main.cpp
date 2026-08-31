#include "main.h"
#include "sensors.h"
#include "timer.h"

pros::Controller master(pros::E_CONTROLLER_MASTER);

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Line Follower Onboarding Activity");

	initSensors();
}

void opcontrol() {
	printSensorValues(); //Delete this before running your line follower logic!
	lineFollowerLoop();
}

void lineFollowerLoop() {
	runTimer = true;
	pros::Task timerTask(startTimer);

	while (runTimer) {
		/*
		--------YOUR LOGIC HERE--------

		Provided helper functions:
		- getLeftOpticalData()  - Returns an optical_raw_s_t for the left sensor
		- getRightOpticalData() - Returns an optical_raw_s_t for the right sensor
		    (fields: .red .green .blue .clear -- each an unsigned raw value)
		- setLeftMotor(int power)  - Sets power of left motor  (-127 to 127)
		- setRightMotor(int power) - Sets power of right motor (-127 to 127)

		Only modify the code in this method
		*/
		pros::delay(20); // Runs loop every 20 ms, DO NOT REMOVE
	}
	//Do not delete these
	setLeftMotor(0);
	setRightMotor(0);
}
