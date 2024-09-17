#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

// Function to find the maximum sum of a contiguous subarray
int maxSubArray(int arr[], int n) {
    int currentMax = 0;
    int globalMax = INT_MIN;  // Initialize to the smallest possible value

    for (int i = 0; i < n; i++) {
        currentMax = max(arr[i], currentMax + arr[i]);
        if (currentMax > globalMax) {
            globalMax = currentMax;
        }
    }

    return globalMax;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Sample array
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubArray(arr, n);
    cout << "Maximum contiguous subarray sum is " << maxSum << endl;

    return 0;
}
