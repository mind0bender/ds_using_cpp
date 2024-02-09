#include <iostream>

using namespace std;

namespace greet {
string name;
void hello() {
    cout << "Hello, " << name << endl;
}
}  // namespace greet

using namespace greet;

int main() {
    name = "Yash";
    hello();
    cout << endl
         << "Name: Yash\tUID: 23BCS11317" << endl;

    return 0;
}