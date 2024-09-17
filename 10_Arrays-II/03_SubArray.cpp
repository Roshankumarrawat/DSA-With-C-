#include <iostream>
using namespace std;

// Function to find and print all subarrays and their sums
void subarraySums(int arr[], int n) {
    // Loop over each starting point of the subarray
    for (int i = 0; i < n; i++) {
        int sum = 0;
        
        // Loop over each ending point of the subarray starting from i
        for (int j = i; j < n; j++) {
            sum += arr[j];
            
            // Print the subarray and its sum
            cout << "Subarray: [";
            for (int k = i; k <= j; k++) {
                cout << arr[k];
                if (k != j) cout << ", ";
            }
            cout << "] -> Sum: " << sum << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};  // Sample array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array

    // Function call to print subarrays and their sums
    subarraySums(arr, n);

    return 0;
}
