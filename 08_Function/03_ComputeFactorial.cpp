// Write a function to compute the factorial of a number. The factorial of a number n is the product of all positive integers less than or equal to n.


#include <iostream>
using namespace std;

// Function to compute factorial
int factorial(int num) {
    if (num <= 1) return 1;
    return num * factorial(num - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
