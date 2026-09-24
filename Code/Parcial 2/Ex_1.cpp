#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Input number of cells: " << endl;
    cin >> n;

    int array[n];
    int sum = 0;

    for (int i = 0; i < n; i++){
        array[i] = 50;
        sum += 50;
    };
    cout << "Sum: " << sum << endl;
    return 0;
}