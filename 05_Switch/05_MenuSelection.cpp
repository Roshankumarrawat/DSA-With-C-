#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu:" << endl;
    cout << "1. Say Hello" << endl;
    cout << "2. Say Goodbye" << endl;
    cout << "3. Print Date" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Hello!" << endl;
            break;
        case 2:
            cout << "Goodbye!" << endl;
            break;
        case 3:
            cout << "Today's date is: " << __DATE__ << endl;
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
    }

    return 0;
}
