// Write a C++ program that reads a student's score (between 0 and 100) and prints out the corresponding grade based on the following criteria:

// A: 90 - 100
// B: 80 - 89
// C: 70 - 79
// D: 60 - 69
// F: Below 60

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the student's score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
