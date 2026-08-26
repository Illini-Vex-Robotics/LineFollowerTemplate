#include "timer.h"
#include "api.h"
#include "main.h"

int timerMs = 0;

void startTimer(void* param) {
    runTimer = true;
    while (true) {
        if (master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) {
            runTimer = !runTimer; // Toggle the timer state
        }
        if (runTimer) {
            pros::lcd::print(2, "%d.%d sec", timerMs / 1000, timerMs % 1000);
            timerMs += 20;
        }
        pros::delay(20); 
    }
}

void stopTimer() {
    runTimer = false;
}