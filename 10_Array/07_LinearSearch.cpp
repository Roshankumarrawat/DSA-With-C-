#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Array to search in
    int target = 30; // Element to search for

    // Perform linear search
    int index = linearSearch(numbers, 5, target);

    // Print the result
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
