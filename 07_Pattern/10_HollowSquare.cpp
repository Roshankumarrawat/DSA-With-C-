#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (and columns) for the pattern: ";
    cin >> n;

    // Print the top border
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    // Print the middle part
    for (int i = 0; i < n - 2; i++) {
        cout << "* "; // Left border
        for (int j = 0; j < n - 2; j++) {
            cout << "  "; // Spaces in the middle
        }
        cout << "* "; // Right border
        cout << endl;
    }

    // Print the bottom border
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    return 0;
}
