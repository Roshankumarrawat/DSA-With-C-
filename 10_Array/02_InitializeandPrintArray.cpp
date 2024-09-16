#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Print array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
