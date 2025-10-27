// 13.	Use a for loop to count the number of vowels in the string "Programming".
#include <iostream>
using namespace std;

int main(){
    string word = "programming";
    int vowelCount = 0;

    for(int i = 0; i < word.length();i++) {
        char c = word[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
    }
    
    cout << "Number of vowels in 'Programming': " << vowelCount << endl;
    

    return 0;
}