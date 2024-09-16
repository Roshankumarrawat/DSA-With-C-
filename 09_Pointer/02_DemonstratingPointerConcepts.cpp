#include <iostream>
using namespace std;

int main() {
    // Declare a normal integer variable
    int x = 100;
    
    // Declare a pointer and initialize it with the address of x
    int *ptr = &x;

    // Output the address of x using the pointer
    cout << "Address of x: " << ptr << endl;
    
    // Output the value of x using the pointer (dereferencing)
    cout << "Value of x through pointer: " << *ptr << endl;
    
    // Modify the value of x through the pointer
    *ptr = 200;
    cout << "Modified value of x: " << x << endl;
    
    // Pointer and Arrays
    int arr[5] = {10, 20, 30, 40, 50};
    int *arrPtr = arr;  // arr is equivalent to &arr[0]

    cout << "Array elements using pointer: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " ";  // Pointer arithmetic to access array elements
    }
    cout << endl;

    // Dynamic memory allocation using new
    int *dynamicPtr = new int;  // Allocate memory for an integer
    *dynamicPtr = 500;          // Assign a value to the allocated memory
    cout << "Value of dynamically allocated memory: " << *dynamicPtr << endl;

    // Deallocate the dynamically allocated memory
    delete dynamicPtr;
    
    // Null pointer
    int *nullPtr = nullptr;
    if (nullPtr == nullptr) {
        cout << "This is a null pointer." << endl;
    }

    return 0;
}
