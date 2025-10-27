#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int difference;

    cout <<"Enter First Number: ";
    cin >> a;
    cout <<"Enter Second Number: ";
    cin >> b;

    difference = a - b;

    cout <<"The difference of the two numbers " << a << " and " << b <<" is " << difference <<"." <<endl;
    cout << endl;
    return 0;
}