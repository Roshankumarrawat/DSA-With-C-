#include <iostream>
using namespace std;

int main() {
    double temperature;
    char scale;

    cout << "Enter temperature (e.g., 32C or 100F): ";
    cin >> temperature >> scale;

    if (scale == 'C' || scale == 'c') {
        // Convert Celsius to Fahrenheit
        double fahrenheit = (temperature * 9 / 5) + 32;
        cout << temperature << "C is " << fahrenheit << "F." << endl;
    } else if (scale == 'F' || scale == 'f') {
        // Convert Fahrenheit to Celsius
        double celsius = (temperature - 32) * 5 / 9;
        cout << temperature << "F is " << celsius << "C." << endl;
    } else {
        cout << "Invalid scale. Use 'C' for Celsius or 'F' for Fahrenheit." << endl;
    }

    return 0;
}
