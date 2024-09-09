// Write a C++ program that reverses the digits of a positive integer entered by the user.

#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    cout << "The reversed number is " << reversed << endl;

    return 0;
}
