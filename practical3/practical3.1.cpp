// WAP to calculate getArea of a square by passing arguments in member function.

#include <math.h>

#include <iostream>

using namespace std;

class Square {
    float side;

   public:
    void setSide(float s) {
        side = s;
    }
    float getArea() {
        return pow(side, 2);
    }
};

int main() {
    Square sq1, sq2;
    sq1.setSide(5);
    sq2.setSide(3.14);
    cout << "Side: 5\t\tArea: " << sq1.getArea() << endl;
    cout << "Side: 3.14\tArea: " << sq2.getArea() << endl;
    cout << endl
         << "Name: Yash Gupta    UID: 23BCS11317" << endl;
    return 0;
}