// nested if statement in C++
// We can include an if-else block in the body of another if-else block. 
// This becomes a nested if-else statement.


// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  } 
  else if (number < 0) {
    cout << "You entered a negative integer: " << number << endl;
  } 
  else {
    cout << "You entered 0." << endl;
  }

  cout << "This line is always printed.";

  return 0;
}