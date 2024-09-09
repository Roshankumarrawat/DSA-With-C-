#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "Enter an integer: ";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    cout << number << (isPrime ? " is a prime number." : " is not a prime number.") << endl;

    return 0;
}
