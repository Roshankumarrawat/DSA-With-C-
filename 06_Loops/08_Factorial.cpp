// Write a C++ program to compute the factorial of a positive integer n entered by the user. Recall that the factorial of n (denoted as n!) is the product of all positive integers less than or equal to n.

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "The factorial of " << n << " is " << factorial << endl;

    return 0;
}
