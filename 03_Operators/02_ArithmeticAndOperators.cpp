
#include <iostream>
using namespace std;
int main() {
 // Unary operators
 int x = 5, y = 6, z = 7, w = 8;
 cout << ++x << endl; // Increments the value of x
 cout << --y << endl; // Decrements the value of y
 cout << +z << endl; // Unary +
 cout << -w << endl; // Unary - on a positive number
 cout << -(-w) << endl; // Unary - on a negative number

 // Binary operators
 int a = 10, b = 3;
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 int quotient = a / b;
 int remainder = a % b;

 cout << "Sum: " << sum << endl;
 cout << "Difference: " << difference << endl;
 cout << "Product: " << product << endl;
 cout << "Quotient: " << quotient << endl;
 cout << "Remainder: " << remainder << endl;

 return 0;
}
 