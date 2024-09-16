#include <iostream>
using namespace std;

// Function to swap two variables using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(&x, &y);  // Pass addresses of x and y to swap function
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
