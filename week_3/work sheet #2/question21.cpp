#include <iostream>
using namespace std;

int main(){
    double attendance,grade;

    cout <<"Enter score: ";
    cin >> grade;
    cout<<"Enter attendance: ";
    cin>> attendance;

    if(attendance>= 75){
        cout<<"pass...\n";
    } else {
        cout<<"failed...\n";
    }

    return 0;
}