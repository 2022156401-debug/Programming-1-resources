#include <iostream>
using namespace std;
int main(){
    double num1;
    double num2;
    double difference;

    cout <<"Enter First Number";
    cin >> num1;
    cout <<"Enter Second Number";
    cin >> num2;

    difference = num1 - num2;

    cout <<"The difference of " << num1 <<" and " << num2 << " is " << difference << " . " << endl;

    return 0;
}