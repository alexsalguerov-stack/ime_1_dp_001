#include <iostream>
using namespace std;

int main() {
    int array[10] = {1,4,2,5,6,9,7,0,3,8};

    int number;
    cout << "Enter the number to search: ";
    cin >> number;

    int *ptr_start = array;
    int *ptr_search = array;

    bool found = false;

    while (ptr_search < array + 10) {
        if (*ptr_search == number) {
            int location = ptr_search - ptr_start;

            cout << "Number found at position: " << location << endl;
            found = true;
            break;
        }
        ptr_search++;
    }

    if (!found) {
        cout << "Number not present in the array" << endl;
    }

    return 0;
}