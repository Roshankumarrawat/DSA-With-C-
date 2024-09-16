#include <iostream>
using namespace std;

int main() {
    int numbers[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    // Reverse the array
    for (int i = 0; i < size / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[size - 1 - i];
        numbers[size - 1 - i] = temp;
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
