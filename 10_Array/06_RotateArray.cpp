#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int d) {
    int temp[d];
    
    // Store the first d elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
    // Shift remaining elements to the left
    for (int i = d; i < size; i++) {
        arr[i - d] = arr[i];
    }
    
    // Place the d elements from the temporary array at the end
    for (int i = 0; i < d; i++) {
        arr[size - d + i] = temp[i];
    }
}

int main() {
    int numbers[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int d = 3; // Number of positions to rotate

    rotateArray(numbers, size, d);

    // Print the rotated array
    cout << "Array after rotation: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
