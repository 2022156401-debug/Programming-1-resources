#include <iostream>
#include <string>
using namespace std;


int main() {
    
    string name;
    int age; 
    int year;
    int yob;

    cout << "hello there user! my name is System. whats your name?: ";
    cin >> name; 
    cout << "Cool name "<< name <<"!,what year were you born?: ";
    cin >> yob;
    cout << "Really I was born in 2025, what year is it right now?: ";
    cin >> year;
    age = year - yob;
    cout << "Thank you for letting me know " << name << ". "<< endl;
    cout << endl;
    cout << "so you're " << age << " years old, awesome I'll keep that in mind." << endl;

    return 0;
}