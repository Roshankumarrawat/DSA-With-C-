#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the midpoint

        if (arr[mid] == target) {
            return mid; // Return the index if target is found
        }
        else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        }
        else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Sorted array
    int target = 30; // Element to search for

    // Perform binary search
    int index = binarySearch(numbers, 5, target);

    // Print the result
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
