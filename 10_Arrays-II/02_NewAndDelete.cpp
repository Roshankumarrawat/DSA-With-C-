#include <iostream>
using namespace std;

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate an array of integers
    int* arr = new int[size];

    // Input values into the array
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Output the values
    cout << "The array contains: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory using delete[]
    delete[] arr;

    return 0;
}
