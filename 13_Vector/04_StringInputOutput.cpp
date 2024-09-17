#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words;
    int n;

    // Get the number of words to input
    cout << "Enter the number of words: ";
    cin >> n;

    // Input n words into the vector
    for (int i = 0; i < n; i++) {
        string word;
        cout << "Enter word " << i + 1 << ": ";
        cin >> word;
        words.push_back(word);
    }

    // Print the words from the vector
    cout << "The words you entered are:" << endl;
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }

    return 0;
}
