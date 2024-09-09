// Write a C++ program that prints an alphabet pyramid pattern.

//    A
//   ABA
//  ABCBA
// ABCDCBA

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        // Print increasing characters
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        // Print decreasing characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
