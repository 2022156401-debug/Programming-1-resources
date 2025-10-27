// Problem 7
#include <iostream>
using namespace std;

int main() {
    char text[30];
    int letters = 0, digits = 0;
    cout << "Enter text: ";
    cin.getline(text, 30);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= '0' && text[i] <= '9') digits++;
        else if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) letters++;
    }
    cout << "\nYour input: " << text << "\nLetters: " << letters << "\nDigits: " << digits << endl;
    return 0;
}
