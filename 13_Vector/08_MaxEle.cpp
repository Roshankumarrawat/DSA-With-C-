#include <iostream>
#include <vector>
#include <algorithm> // For max_element
using namespace std;

int main() {
    vector<int> vec = {10, 20, 35, 50, 5};

    // Find the maximum element
    int max_val = *max_element(vec.begin(), vec.end());

    // Print the maximum element
    cout << "Maximum element in the vector: " << max_val << endl;

    return 0;
}
            