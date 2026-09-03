#include <iostream>
using namespace std;

enum door_stat {Closed, Opening, Open, Closing};
enum motor_stat {cl_motor, op_motor, stop_motor};

struct auto_door {  
    door_stat door_status = Closed;
    motor_stat motor_status = cl_motor;

    bool sensor_move = false;
    bool sensor_motor = false;
};
    
void refresh(){
	door_stat door_status = Closed;
    motor_stat motor_status = cl_motor;

    bool sensor_move = false;
    bool sensor_motor = false;
    
    switch (door_status, motor_status) {
        case Closed:
            if (sensor_move == true && sensor_motor != true) {
                cout << "Activating Motor: Opening" << std::endl;
                door_status = Opening;
                motor_status = op_motor;
            }
            break;

        case Opening:
            if (sensor_move == true && sensor_motor == true) {
                cout << "Stopping Motor: Door fully open" << std::endl;
                door_status = Open;
                motor_status = stop_motor;
            }
            break;
        case Open:
            if (sensor_move == false && sensor_motor == false) {
                cout << "Activating Motor: Closing" << std::endl;
                door_status = Closing;
                motor_status = cl_motor;
            }
            break;
        case Closing:
            if (sensor_move == false && sensor_motor == true) {
                cout << "Stopping Motor: Door fully closed" << std::endl;
                door_status = Closed;
                motor_status = stop_motor;
            }
        break;
    }
}

int main() {
    auto_door door1;
    cout << "Simulacion de puerta"<< endl;
    cout << "Movimiento detectado sensor = true" << endl;
    refresh();
    return 0;
}