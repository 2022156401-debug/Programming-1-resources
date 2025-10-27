#include <iostream>
using namespace std;

int main(){

    int age;

    cout <<"Enter age: ";
    cin >> age;

    if (age < 5) {
        cout <<"You can enter, no charge!...\n";
    } else if (age <= 12) {
        cout <<"Your charge is $8";
    } else if (age <= 59) {
        cout <<"Your charge is $12";
    } else if (age >= 60) {
        cout <<"Your charge is $6";
    }
}