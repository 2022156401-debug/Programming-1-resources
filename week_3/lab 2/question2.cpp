#include <iostream>
using namespace std;

int main() {
    double grade;
    cout <<"Enter grade: ";
    cin >> grade;

    if(grade >= 50) {
        cout <<"Pass...\n";
    } else {
        cout <<"Fail...\n";
    }
     
    return 0;
}