#include <iostream>
#include <string>
using namespace std;

class Robot{
    private:
        string comand;

    public:
        Robot(string c) {
            comand = c;
        }

        string getComand() {
            return comand;
        }

        void conect(Robot &Robot2){
            cout << "Conectando " << comand << " con " << Robot2.getComand() << endl;
        }
};

int main() {
    Robot r1("Robot1");
    Robot r2("Robot2");

    r1.conect(r2);
    r2.conect(r1);

    return 0;
}