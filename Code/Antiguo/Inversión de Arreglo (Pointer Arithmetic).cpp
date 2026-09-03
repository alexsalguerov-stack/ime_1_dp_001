#include <iostream>
using namespace std;

int main() {
    char array[6] = {'H','o','l','a','!','\0'};

    char *first = array;
    char *last = array + 4;

    while (first < last) {
        char past = *first;
        *first = *last;
        *last = past;

        first++;
        last--;
    }

    cout << "Inverted word: " << array << endl;

    return 0;
}