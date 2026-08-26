#include "main.h"
#include "timer.h"

bool programKilled = true;

pros::Motor left_motor(9); // Creates a motor on port 9
pros::Motor right_motor(-10);  // Creates a reversed motor on port 10
pros::Optical left_optical(19); // Creates an optical sensor on port 19
pros::Optical right_optical(20); // Creates an optical sensor on port 20

void lineFollowerLoop() {
	while (true) {
		pros::delay(20); // Runs loop every 20 ms
	}
}

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Line Follower Onboarding Activity");
	startTimer(nullptr);
}

void disabled() {}

void competition_initialize() {}

void autonomous() {}

void opControl() {
	lineFollowerLoop();
}