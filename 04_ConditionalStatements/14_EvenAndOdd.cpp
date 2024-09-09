#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << number << (number % 2 == 0 ? " is even." : " is odd.") << endl;

    return 0;
}
