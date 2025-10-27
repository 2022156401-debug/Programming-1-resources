#include <iostream>
using namespace std;

int main(){
    double num1,num2;

    cout<<"Input First Number: ";
    cin>> num1;
    cout<<"Input Second Number: ";
    cin>> num2;    

    if (num1>num2){
        cout<<num1<<" is larger...\n";
    } else {
        cout<<num2<<" is larger...\n";
    }

    return 0;
}