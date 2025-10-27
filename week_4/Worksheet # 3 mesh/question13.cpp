#include <iostream>
using namespace std;

int main() {

    // 13. Count number of vowels in "Programming"
    string word2 = "Programming";
    int vowels = 0;
    for (int i = 0; i < word2.length(); i++) {
        char ch = tolower(word2[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }
    cout << "\n13. Vowels in \"Programming\": " << vowels << endl;
    return 0;

}