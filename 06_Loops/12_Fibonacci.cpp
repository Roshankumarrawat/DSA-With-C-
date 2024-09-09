// Write a C++ program that generates and prints the Fibonacci sequence up to n terms, where n is entered by the user.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Fibonacci sequence up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    cout << endl;

    return 0;
}
