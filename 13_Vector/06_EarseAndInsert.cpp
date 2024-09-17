#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // Erase the element at index 2 (i.e., 30)
    vec.erase(vec.begin() + 2);

    // Insert 100 at index 1
    vec.insert(vec.begin() + 1, 100);

    // Print the modified vector
    cout << "Modified vector:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
