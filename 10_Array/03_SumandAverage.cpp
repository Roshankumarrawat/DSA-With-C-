#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    // Calculate the sum
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Calculate the average
    float average = static_cast<float>(sum) / 5;

    // Print results
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
