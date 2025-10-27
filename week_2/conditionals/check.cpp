#include <iostream>
using namespace std;
int main() {
    int value;
    cout<<"Enter an integer: ";
    cin>> value;
// creating conditional true or false system then display
    if (value > 0){
        cout <<"A positive integer! \n\n";
    } else {
        cout <<"A Negative integer! \n\n";
    }

    return 0;
}