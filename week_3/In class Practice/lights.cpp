#include <iostream>
using namespace std;

int main() {
string color;

    cout<<"Enter the light colour: ";
    cin>>color;

    if (color == "red"){
        cout <<"stop dude \n";
    } else if ( color == "yellow") {
    cout<<"GO slow....\n";
    } else if (color == "green") {
        cout<<"GO GO GOOO\n";         
    } else {
        cout<<"Your input is invalid.\n";    
    }

    return 0;

}