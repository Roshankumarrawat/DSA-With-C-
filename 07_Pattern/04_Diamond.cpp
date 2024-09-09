//   *
//  ***
// *****
//  ***
//   *


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the upper half of the diamond: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i > 0; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
