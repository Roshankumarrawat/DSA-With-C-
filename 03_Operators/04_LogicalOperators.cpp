
#include <iostream>
using namespace std;
int main() {
 int a = 1, b = 0;

 if (a && b) {
 cout << "Both a and b are true (non-zero)" << endl;
 } else {
 cout << "At least one of a or b is false (zero)" << endl;
 }

 if (a || b) {
 cout << "At least one of a or b is true (non-zero)" << endl;
 } else {
 cout << "Both a and b are false (zero)" << endl;
 }

 if (!b) { // value of b becomes 1
 cout << "b is false (zero)" << endl;
 } else {
 cout << "b is true (non-zero)" << endl;
 }

 return 0;
} 