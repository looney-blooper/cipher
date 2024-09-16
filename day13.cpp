#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 42;
    cout << "The value of the dynamically allocated variable is: " << *ptr << endl;
    delete ptr;
    return 0;
}
