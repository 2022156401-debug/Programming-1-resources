#include <iostream>
using namespace std;

int main () {
    
    for(;;) {

    cout << "Enter a positive number: ";
    int userInput;
    cin >> userInput;

        if(userInput == -1) {
           cout << "Goodbye\n";
           break;
        }
    }
} 

//An infinite loop - while version

/* while(1) {

    cout << "Enter a positive number: ";
    int userInput;
    cin >> userInput;

    if(userInput == -1) {
       cout << "Goodbye\n";
       break;
    }
}
*/


// An infinite loop - while version (bool)

/*while(true) {

    cout << "Enter a positive number: ";
    int userInput;
    cin >> userInput;

    if(userInput == -1) {
       cout << "Goodbye\n";
       break;
    }
}
*/