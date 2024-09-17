#include <iostream>
#include <vector>
using namespace std;

// Function to find the candidate for majority element
int findCandidate(const vector<int>& nums) {
    int candidate = 0, count = 0;

    // Traverse the array
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

// Function to check if the candidate is the majority element
bool isMajority(const vector<int>& nums, int candidate) {
    int count = 0;
    int n = nums.size();

    // Count the occurrences of the candidate in the array
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    // Return true if the candidate occurs more than n/2 times
    return count > n / 2;
}

int main() {
    vector<int> nums;
    int n, temp;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }

    // Find the candidate for the majority element
    int candidate = findCandidate(nums);

    // Check if the candidate is actually the majority element
    if (isMajority(nums, candidate)) {
        cout << "The majority element is: " << candidate << endl;
    } else {
        cout << "There is no majority element in the array." << endl;
    }

    return 0;
}
