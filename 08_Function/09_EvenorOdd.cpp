#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    
    return 0;
}
