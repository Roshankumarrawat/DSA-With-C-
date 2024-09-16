#include <iostream>
using namespace std;

// Function that takes a pointer as an argument
void modifyValue(int *ptr) {
    // Dereference the pointer and modify the value it points to
    *ptr = 200;
}

int main() {
    int x = 100;
    
    cout << "Value of x before modification: " << x << endl;

    // Pass the address of x to the function
    modifyValue(&x);

    // x has been modified via the pointer
    cout << "Value of x after modification: " << x << endl;

    return 0;
}
