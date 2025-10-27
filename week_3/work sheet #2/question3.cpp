    #include <iostream>
using namespace std;

int main() {
    
    int num1;
    cout<<"Enter Number: ";
    cin>>num1;
    
    if (num1 > 0){
        cout<<"This number is Positive \n";
    }else if (num1 < 0){
        cout<<"This number is Negative \n";
    } else {
        cout<<"This number is Zero \n";
    }

    return 0;
}