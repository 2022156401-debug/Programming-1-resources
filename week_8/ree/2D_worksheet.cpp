#include <iostream>
using namespace std;

int main () {

    //create containers
    int arr [3][3];

    //create function 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter number for position [" << i << "][" << j << "]: ";
            cin >> arr [i][j];
        } 
    }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
            
                cout << arr [i][j] << " ";
            }
            cout << endl;
        }
    
    return 0;
}