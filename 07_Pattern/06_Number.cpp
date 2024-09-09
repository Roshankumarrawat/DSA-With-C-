// Write a C++ program that prints a pattern of numbers in increasing order.

// 1
// 12
// 123
// 1234

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
