#include <iostream>
using namespace std;

int main() {
    int numbers[7] = {4, 7, 2, 9, 5, 1, 8};
    int max = numbers[0];
    int min = numbers[0];

    // Find max and min
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // Print results
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
