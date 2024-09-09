// Write a function to generate the Fibonacci sequence up to n terms. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the previous two numbers.

#include <iostream>
using namespace std;

// Function to print Fibonacci sequence
void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        if (i == 0) cout << a << " ";
        else if (i == 1) cout << b << " ";
        else {
            next = a + b;
            a = b;
            b = next;
            cout << next << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    fibonacci(n);

    return 0;
}
