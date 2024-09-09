#include <iostream>
using namespace std;

// Function to find maximum of three numbers
int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    cout << "The maximum number is " << maxOfThree(a, b, c) << endl;

    return 0;
}
