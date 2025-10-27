#include <iostream>
#include <string>
using namespace std;

main() {

    string name;
    int yob;
    int year;

    cout <<"Hello  there  user what is your name?: ";
    cin >> name;
    cout <<"Awesome, " << name  << ".Thats a cool name,what year were you born by the way?: ";
    cin >> yob;
    cout <<"Really, thats great. Just to confirm what year is it currently?: ";
    cin >> year;

    int age = year - yob;
    
    cout <<"Great, so just to confirm your name is " << name <<" , and you are " << age <<" years old. Perfect."<<endl;
    cout<<endl;

    return 0;
}