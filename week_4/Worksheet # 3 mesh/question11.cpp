#include <iostream>
using namespace std;

int main() {
    // 11. Count occurrences of 'a' in "banana"
    string word1 = "banana";
    int countA = 0;
    for (int i = 0; i < word1.length(); i++) {
        if (word1[i] == 'a') countA++;
    }
    cout << "\n11. Number of 'a' in \"banana\": " << countA << endl;
    return 0;

}