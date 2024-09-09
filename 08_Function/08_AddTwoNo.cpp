#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "The sum is: " << add(num1, num2) << endl;
    
    return 0;
}
