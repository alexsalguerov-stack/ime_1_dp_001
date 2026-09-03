#include <iostream>
using namespace std;

struct Product {
    int code;
    float price;
    int stock;
};

int main() {
    Product item;

    Product *ptr = &item;

    ptr->code = 101;
    ptr->price = 49.99;
    ptr->stock = 20;

    cout << "Code: " << ptr->code << endl;
    cout << "Price: " << ptr->price << endl;
    cout << "Stock: " << ptr->stock << endl;

    return 0;
}