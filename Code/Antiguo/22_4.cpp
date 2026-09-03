#include <iostream>
#include <queue>
using namespace std;

int main() {
    std::queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Initial status: 10, 20, 30" << std::endl; // Output: 10, 20, 30

    std::cout << "Queue size: " << q.size() << std::endl; // Output: 3

    std::cout << "Front element: " << q.front() << std::endl; // Output: 10
    std::cout << "Back element: " << q.back() << std::endl;   // Output: 30

    q.pop(); // Remove the front element (10)

    int newElement = 40;
    q.push(newElement); // Add a new element (40)

    std::cout << "New front element: " << q.front() << std::endl; // Output: 20
    std::cout << "New back element: " << q.back() << std::endl;   // Output: 40

    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#define MAX_SIZE 5 // Maximum size of the queue
using namespace std;

struct Pile {
    int items[MAX_SIZE];
    int top = -1; // Initialize top to -1 to indicate an empty stack
};

bool isFull(Pile& pile) {
    return pile.top == MAX_SIZE - 1; // Check if the stack is full
}

bool isEmpty(Pile& pile) {
    return pile.top == -1; // Check if the stack is empty
}

void push(Pile& pile, int item) {
    if (isFull(pile)) {
        cout << "Stack overflow! Cannot push " << item << endl;
    } else {
        pile.items[++pile.top] = item; // Increment top and add item to stack
        cout << "Pushed " << item << " to stack." << endl;
    }
}

void pop(Pile& pile) {
    if (isEmpty(pile)) {
        cout << "Stack underflow! Cannot pop from an empty stack." << endl;
    } else {
        cout << "Popped " << pile.items[pile.top--] << " from stack." << endl; // Pop item and decrement top
    }
}

int seeTop(Pile& pile) {
    return pile.items[pile.top]; // Return the top item of the stack
}

int main() {
    Pile pile;

    push(pile, 10);
    push(pile, 20);
    push(pile, 30);
    push(pile, 40);
    push(pile, 50);
    push(pile, 60); // This will cause stack overflow

    cout << "Top element: " << seeTop(pile) << endl; // Output: 50

    pop(pile); // Remove top element (50)
    pop(pile); // Remove top element (40)

    cout << "New top element: " << seeTop(pile) << endl; // Output: 30

    return 0;
}   