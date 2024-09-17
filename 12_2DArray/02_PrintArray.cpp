#include <iostream>
using namespace std;

int main() {
    // Define and initialize a 2D array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Print the 2D array
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < 3; i++) {       // Loop over rows
        for (int j = 0; j < 4; j++) {   // Loop over columns
            cout << matrix[i][j] << " ";  // Print element at row i, column j
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
