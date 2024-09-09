// Write a C++ program to check if a given number (entered by the user) is a palindrome. A number is a palindrome if it reads the same backward as forward.

#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, reversed = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    originalNumber = number;

    while (number != 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (originalNumber == reversed) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }

    return 0;
}
