#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

// Function to modify and print global variable
void modifyGlobal() {
    // Local variable
    int localVar = 5;
    globalVar += localVar;
    cout << "Inside modifyGlobal function:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
}

int main() {
    cout << "Inside main function:" << endl;
    cout << "Global variable before modification: " << globalVar << endl;
    
    modifyGlobal();
    
    cout << "Global variable after modification: " << globalVar << endl;
    // Uncommenting the following line will cause an error because localVar is not accessible here
    // cout << "Local variable from modifyGlobal: " << localVar << endl;

    return 0;
}
