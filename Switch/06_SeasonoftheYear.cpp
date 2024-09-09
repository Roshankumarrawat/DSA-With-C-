#include <iostream>
using namespace std;

int main() {
    int season;

    cout << "Enter a number (1-4) representing a season:" << endl;
    cout << "1. Spring" << endl;
    cout << "2. Summer" << endl;
    cout << "3. Autumn" << endl;
    cout << "4. Winter" << endl;
    cin >> season;

    switch (season) {
        case 1:
            cout << "Spring" << endl;
            break;
        case 2:
            cout << "Summer" << endl;
            break;
        case 3:
            cout << "Autumn" << endl;
            break;
        case 4:
            cout << "Winter" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            break;
    }

    return 0;
}
