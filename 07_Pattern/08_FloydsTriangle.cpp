#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int number = 1; // Start with 1

    for (int i = 1; i <= n; i++) { // Loop through each row
        for (int j = 1; j <= i; j++) { // Loop through each column in the row
            cout << number << " ";
            number++; // Increment the number
        }
        cout << endl; // Move to the next line after printing all numbers in the row
    }

    return 0;
}
