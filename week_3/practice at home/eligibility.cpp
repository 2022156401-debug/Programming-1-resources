//create voters eligiblity list for users 18yrs and up
#include <iostream>
using namespace std;

int main() {
// creating the vairiables
    int age;
    cout <<"Enter Voters Age: \n";
    cin >> age;
    cout <<"\n";
//creating conditional system process/display
    if (age >=  18){
        cout <<"Voter is eligible \n\n";
    } else {
    cout <<"Voter is not eligible \n\n";

    }
//When creating conditionals, process code and display code is written in the same group
    return 0;
}