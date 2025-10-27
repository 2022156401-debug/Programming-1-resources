#include <iostream>
using namespace std;

int main(){
    double num1;
    double num2;
    double product;

    cout <<"Enter First Number";
    cin >> num1;
    cout <<"Enter Second Number";
    cin >> num2;

    product = num1 * num2;

    cout <<"The product of " << num1 <<" and " << num2 << " is " << product << " . " << endl;

    return 0;
}