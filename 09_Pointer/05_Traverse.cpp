#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // Pointer to the first element of the array

    cout << "Array elements using pointer arithmetic: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // Access each element using pointer
    }
    cout << endl;

    return 0;
}
