#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

int main() {
    vector<int> vec = {30, 10, 50, 20, 40};

    // Sort the vector in ascending order
    sort(vec.begin(), vec.end());

    // Print the sorted vector
    cout << "Sorted vector:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
