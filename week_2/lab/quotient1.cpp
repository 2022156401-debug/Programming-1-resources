#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;
    int quotient;

    cout <<"Enter First Number: ";
    cin >> num1;
    cout <<"Enter Second Number: ";
    cin >> num2;

    quotient = num1 / num2;

    cout <<"The quotient of " << num1 <<" by " << num2 << " is " << quotient << " . " << endl;

    return 0;
}