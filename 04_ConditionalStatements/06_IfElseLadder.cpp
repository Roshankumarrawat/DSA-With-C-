// if else-if ladder in C++
// It is an extension of the if-else statement. If we want to check multiple conditions if the first ifcondition becomes false, use the if else-if ladder. 
// If all the if conditions become false the else block gets executed.


// C++ program to find if an integer is positive, negative or zero
// using nested if statements

#include <iostream>
using namespace std;

int main() {

  int num;
    
  cout << "Enter an integer: ";  
   cin >> num;    

  // outer if condition
  if (num != 0) {
        
    // inner if condition
    if (num > 0) {
      cout << "The number is positive." << endl;
    }
    // inner else condition
    else {
      cout << "The number is negative." << endl;
    }  
  }
  // outer else condition
  else {
    cout << "The number is 0 and it is neither positive nor negative." << endl;
  }

  cout << "This line is always printed." << endl;

  return 0;
}