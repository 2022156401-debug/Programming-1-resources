// Problem 6
#include <iostream>
using namespace std;

int main() {
    char text[20];
    int vowels = 0;
    cout << "Enter a word or phrase: ";
    cin.getline(text, 20);
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            vowels++;
    }
    cout << "\nYour input: " << text << "\nNumber of vowels: " << vowels << endl;
    return 0;
}
