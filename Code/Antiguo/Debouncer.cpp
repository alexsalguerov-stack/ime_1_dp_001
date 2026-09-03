#include <iostream>
using namespace std;

int counter = 0;
int main() {
    bool sensor_signal[9] = {false, true, false, true, true, true, true, false, false}; 
    
for (
    int i = 0; i < 9; i++) {
        cout << "pos" << i << " : " << sensor_signal[i] << endl;

            if (sensor_signal[i] == true) {
                counter++;
            }
            else {
                counter = 0;
            }

            if (counter == 3) {
                cout << "Debounced signal: " << true << endl;
            }

    }

    cin.get();

    return 0;
}