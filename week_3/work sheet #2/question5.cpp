#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter Second number: ";
    cin>>num2;
    
    if(num1<num2){
    cout<<num2<<" is greater...";

    } else {
    cout<<num1<<" is greater...";
    }
    return 0;
}