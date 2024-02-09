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
    return 0;
}