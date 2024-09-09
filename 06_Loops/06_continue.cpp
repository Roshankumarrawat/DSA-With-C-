// continue Statement:

// The continue statement in C++ is a control statement used within loops to skip the remaining code in the current iteration and immediately start the next iteration of the loop. It causes the loop to bypass any code that follows the continue statement in the current iteration and proceeds with the next iteration based on the loop's condition.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip the rest of the loop body for even numbers
        }
        cout << i << " ";
    }
    return 0;
}
