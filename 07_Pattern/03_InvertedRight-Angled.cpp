// Write a C++ program to print an inverted right-angled triangle pattern of * where the number of rows is provided by the user.

// ****
// ***
// **
// *


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

