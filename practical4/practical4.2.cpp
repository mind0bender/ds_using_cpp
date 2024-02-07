// WAP to implement the concept of multiple inheritance

#include <iostream>

using namespace std;

class A {
   protected:
    int a;
    void getA() {
        cout << "Enter A: ";
        cin >> a;
    }
};

class B {
   protected:
    int b;
    void getB() {
        cout << "Enter B: ";
        cin >> b;
    }
};

class D {
   protected:
    int d;
    void getD() {
        cout << "Enter D: ";
        cin >> d;
    }
};

class C : protected A, protected B, protected D {
   protected:
    int c;

   public:
    void getC() {
        getA();
        getB();
        cout << "Enter C: ";
        cin >> c;
        getD();
    }
    int sum() {
        return a + b + c + d;
    }
};

int main() {
    C pogo;

    pogo.getC();

    cout << "sum: " << pogo.sum() << endl;
    return 0;
}