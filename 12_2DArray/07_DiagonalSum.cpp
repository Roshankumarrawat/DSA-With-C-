#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the square matrix
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Calculate the sum of both diagonals
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];            // Primary diagonal
        secondaryDiagonalSum += matrix[i][n - 1 - i];  // Secondary diagonal
    }

    // If n is odd, subtract the middle element since it was added twice
    if (n % 2 != 0) {
        secondaryDiagonalSum -= matrix[n / 2][n / 2];
    }

    cout << "Primary diagonal sum: " << primaryDiagonalSum << endl;
    cout << "Secondary diagonal sum: " << secondaryDiagonalSum << endl;

    return 0;
}
