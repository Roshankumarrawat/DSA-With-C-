#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    int number, originalNumber, sum = 0;

    cout << "Enter an integer (1 to 999): ";
    cin >> number;

    originalNumber = number;

    // For 1-digit numbers
    if (number >= 0 && number <= 9) {
        sum = number;
        cout << number << (sum == number ? " is an Armstrong number." : " is not an Armstrong number.") << endl;
    }
    // For 2-digit numbers
    else if (number >= 10 && number <= 99) {
        int firstDigit = number / 10;
        int secondDigit = number % 10;
        sum = pow(firstDigit, 2) + pow(secondDigit, 2);
        cout << number << (sum == number ? " is an Armstrong number." : " is not an Armstrong number.") << endl;
    }
    // For 3-digit numbers
    else if (number >= 100 && number <= 999) {
        int firstDigit = number / 100;
        int secondDigit = (number / 10) % 10;
        int thirdDigit = number % 10;
        sum = pow(firstDigit, 3) + pow(secondDigit, 3) + pow(thirdDigit, 3);
        cout << number << (sum == number ? " is an Armstrong number." : " is not an Armstrong number.") << endl;
    }
    // For numbers with more than 3 digits
    else {
        cout << "Number out of range (1 to 999)." << endl;
    }

    return 0;
}
