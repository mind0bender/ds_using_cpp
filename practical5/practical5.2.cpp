#include <iostream>

using namespace std;

class A {
   protected:
    int a;
    void get() {
        cout << "Enter A: ";
        cin >> a;
    };
    void show() {
        cout << "a: " << a << endl;
    }
};

class B {
   protected:
    int b;
    void get() {
        cout << "Enter B: ";
        cin >> b;
    }
    void show() {
        cout << "b: " << b << endl;
    }
};

class D {
   protected:
    int d;
    void get() {
        cout << "Enter D: ";
        cin >> d;
    }
    void show() {
        cout << "d: " << d << endl;
    }
};

class C : protected A, protected B, protected D {
   protected:
    int c;

   public:
    void get() {
        A::get();
        B::get();
        cout << "Enter C: ";
        cin >> c;
        D::get();
    }
    void show() {
        A::show();
        B::show();
        cout << "c: " << c << endl;
        D::show();
    }
};

int main() {
    C pogo;

    pogo.get();
    cout << endl;
    pogo.show();

    cout << endl
         << "Name: Yash\tUID: 23BCS11317" << endl;

    return 0;
}