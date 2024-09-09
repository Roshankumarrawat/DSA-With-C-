// *       *
// **     **
// ***   ***
// *********
// ***   ***
// **     **
// *       *


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Top half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print left wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right wing
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
