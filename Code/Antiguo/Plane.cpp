#include <iostream>
#include <string>
using namespace std;

struct dimension
{
    float length, width, height;
};

struct plane
{
    string model;
    int flyID;
    dimension size;
};

int main()
{
    plane boeing747;
    boeing747.size.length = 70.6f;
    return 0;
}
