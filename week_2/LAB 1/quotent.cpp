#include <iostream>
using namespace std;

int main() {

    int num1;
    int num2;

    cout <<"Enter First Number: ";
    cin >> num1;
    cout <<"Enter Second Number: ";
    cin >> num2;

    int quotient = num1 / num2;

    cout << endl; 
    cout <<"If the First Number is: "<< num1 << endl;
    cout << "The Second Number is: "<< num2  << endl;
    cout<<"Then the qoutient is: " << quotient <<"."<< endl;
    cout << endl; 
    
    return 0;
}