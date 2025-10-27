#include <iostream>
#include <string>
using namespace std;

// Function prototype
bool checkEnds(string word);

int main() {
    string input;

    cout << "Enter a lowercase word: ";
    cin >> input;

    if (checkEnds(input))
        cout << "True — the word begins and ends with the same letter.\n";
    else
        cout << "False — the word does not begin and end with the same letter.\n";

    return 0;
}

// Function definition
bool checkEnds(string word) {
    // Get the first and last characters
    char first = word[0];
    char last = word[word.length() - 1];

    // Compare them and return the result
    return (first == last);
}
