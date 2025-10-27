// 11.	Use a for loop to count the number of occurrences of the letter 'a' in a string "banana".
#include <iostream>
using namespace std;

int main(){

    string word = "banana";
    int countA = 0;

    for (int i = 0;i <word.length();i++){
        if (word[i]=='a') countA++;
    }

    cout << "\nThe number of occurrences of the letter 'a' in a string \"banana\": \n" << countA << endl;

    return 0;
}