#include "main.h"

bool programKilled = false;

pros::Controller master(pros::E_CONTROLLER_MASTER); //Controller object
pros::Motor left_motor(9); // Creates a motor on port 9
pros::Motor right_motor(-10);  // Creates a reversed motor on port 10
pros::Optical left_optical(19); // Creates an optical sensor on port 19
pros::Optical right_optical(20); // Creates an optical sensor on port 20

void on_center_button() {
	programKilled = !programKilled;
	if (programKilled) {
		pros::lcd::set_text(2, "Program Killed");
	} else {
		pros::lcd::clear_line(2);
	}
}

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");

	pros::lcd::register_btn1_cb(on_center_button);
}

void disabled() {}

void competition_initialize() {}

void autonomous() {}

void opcontrol() {
	while (true) {
		pros::delay(20); // Runs loop every 20 ms
	}
}