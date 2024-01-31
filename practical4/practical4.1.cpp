// WAP to implement the concept of single level inheritance

#include <iostream>

using namespace std;

class A
{
public:
    int x;
};

class B : public A
{
public:
    int y;
};

int main()
{
    B yay;
    cout << "Enter x: ";
    cin >> yay.x;
    cout << "Enter y: ";
    cin >> yay.y;
    cout << yay.x << " " << yay.y<< endl;
    return 0;
}