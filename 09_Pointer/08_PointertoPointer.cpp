#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;      // Pointer to integer
    int **dblPtr = &ptr; // Pointer to pointer

    // Access value using double pointer
    cout << "Value of x using double pointer: " << **dblPtr << endl;

    // Modify value of x using double pointer
    **dblPtr = 50;
    cout << "Modified value of x: " << x << endl;

    return 0;
}
