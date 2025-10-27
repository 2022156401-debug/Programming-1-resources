// Problem 9
#include <iostream>
using namespace std;

int main() {
    char word[25];
    cout << "Enter a word: ";
    cin >> word;
    cout << "\nOriginal word: " << word;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'A') word[i] = '*';
    }
    cout << "\nModified word: " << word << endl;
    return 0;
}
