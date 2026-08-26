#include "main.h"

bool programKilled = true;

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Line Follower Onboarding Activity");
	startTimer(nullptr);
}

void opControl() {
	while (runTimer) {
		/*
		--------YOUR LOGIC HERE--------
		*/
		pros::delay(20); // Runs loop every 20 ms, DO NOT REMOVE
	}
}