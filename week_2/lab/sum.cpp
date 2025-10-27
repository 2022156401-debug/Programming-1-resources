#include <iostream>
using namespace std;

int main(){
    double num1;
    double num2;
    double sum;

    cout <<"Enter First Number";
    cin >> num1;
    cout <<"Enter Second Number";
    cin >> num2;

    sum = num1 + num2;

    cout <<"The Sum of " << num1 <<" and " << num2 << " is " << sum << " . " << endl;

    return 0;
}