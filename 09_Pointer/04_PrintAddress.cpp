#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;  // Pointer stores the address of x

    cout << "Value of x: " << *ptr << endl;  // Dereference pointer to get value
    cout << "Address of x: " << ptr << endl; // Print the address stored in ptr

    return 0;
}
