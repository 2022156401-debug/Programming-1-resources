#include <iostream>
using namespace std;

int main() {

    int a;
    int b;


    cout <<"Enter First Number: ";
    cin >> a;
    cout <<"Enter Second Number: ";
    cin >> b;

   int  sum = a + b;
    int difference = a - b;
    int quotient = a / b;
    int product = a * b;
    int remainder = a % b;


    cout <<"The sum is: " << sum << endl;
    cout <<"The difference is: " << difference << endl;
    cout <<"The quotient is: " << quotient << endl;
    cout <<"The product is: " << product << endl;
    cout <<"The remainder is: "<< remainder << endl;
    
    return 0;
}