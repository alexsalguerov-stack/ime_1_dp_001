#include <iostream>
using namespace std;

enum motorst { stopped, running };

class StepperMotor {
    private:
        motorst state;
        bool activated;
        int speed;
        int position;
        int revs;

    public:
        StepperMotor() {
            state = stopped;
            activated = false;
            speed = 0;
            revs = 0;
            position = 0;
        }

        void moving() {
            state = running;
            activated = true;
            speed = 100;
            revs = 10;
            position = 50;
            cout << "Stepper motor running.\n";
        }

        void deactivate() {
            activated = false;
            state = stopped; 
            speed = 0;
            revs = 0;
            position = 0;
            cout << "Stepper motor deactivated.\n";
        }


