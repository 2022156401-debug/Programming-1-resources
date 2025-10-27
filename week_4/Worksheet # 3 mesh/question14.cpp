#include <iostream>
#include <string>
using namespace std;

int main() {

    // 14. Count consonants in "Computer"
    string word3 = "Computer";
    int consonants = 0;
    for (int i = 0; i < word3.length(); i++) {
        char ch = tolower(word3[i]);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            consonants++;
        }
    }
    cout << "\n14. Consonants in \"Computer\": " << consonants << endl;
    return 0;

}