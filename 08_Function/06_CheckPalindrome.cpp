#include <iostream>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
