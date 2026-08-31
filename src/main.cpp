#include "main.h"
#include "sensors.h"
#include "timer.h"
#include <cmath>

pros::Controller master(pros::E_CONTROLLER_MASTER);

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Line Follower Onboarding Activity");

	initSensors();
}

//Edit this method
void opcontrol() {
	runTimer = true;
	pros::Task timerTask(startTimer);
	
	//DEFINE VARIABLES YOU NEED HERE

	while (runTimer) {
		//ADD YOUR LOGIC HERE
		pros::delay(5); // Runs loop every 5 ms, DO NO REMOVE
	}
	//Do not delete these
	setLeftMotor(0);
	setRightMotor(0);
}
