#include <iostream>
using namespace std;

//Function Prototype
bool checkEnds (string word); // returns boolean ue (bool data type) if the string begins and ends with the same letter or false otherwise. Assume that the string passed in will always be lowercase.

int main () {

    string insert;
    
    cout << "Enter a word: ";
    cin >> insert;

    if (checkEnds(insert))
        cout << "\nTrue" << endl;
    else 
        cout << "\nFalse" << endl; 
    
    return 0;
}

//creating in bool to return if true or false
bool checkEnds (string word) {
    // collecting letter "char type" to be compared
    char first = word [0];//Storing the first letter
    char last = word [word.length() - 1]; //Storing the last letter
    //return to main(comping the store letters)
    return (first == last);
}