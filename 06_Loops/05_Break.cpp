// break Statement:

// The break statement in C++ is a control statement used to exit from a loop (for, while, or do-while) or to terminate the execution of a switch statement prematurely. When the break statement is encountered, it immediately terminates the closest enclosing loop or switch block, transferring control to the statement following the loop or switch.

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 3) {
            break; // Exit the loop when i equals 3
        }
        cout << i << " ";
    }
    cout << "Loop exited." << endl;
    return 0;
}
