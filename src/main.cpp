#include "main.h"
#include "timer.h"

pros::Controller master(pros::E_CONTROLLER_MASTER);

// Set these to your robot's port numbers (motors 1-21, negative = reversed).
pros::Motor left_motor(1);
pros::Motor right_motor(2);
pros::Optical left_optical(3);
pros::Optical right_optical(4);

void initSensors() {
	left_optical.set_led_pwm(100);
	right_optical.set_led_pwm(100);

	left_optical.set_integration_time(5);
	right_optical.set_integration_time(5);

	left_optical.disable_gesture();
	right_optical.disable_gesture();
}

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
	left_motor.move(0);
	right_motor.move(0);
}
