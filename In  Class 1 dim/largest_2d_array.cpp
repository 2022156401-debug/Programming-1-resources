#include <iostream> 
using namespace std; 

int main() {
    int arr [2][2];
    int maxrow;
    int maxcol;
    int largest;

    cout << "You will be asked to enter 4 numbers. \n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Please enter number for row " << i+1 << " column " << j+1 << ": ";    
            cin >> arr[i][j];
        }   
    
        
        largest = arr[0][0];


        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (arr[i][j] > largest) {
                    largest = arr[i][j];
                    maxrow = i; //  i+1 (user friendly)
                    maxcol = j; //same condition

                }
            }
        }
    }    
    cout << "\nMaximum value: " << largest << endl;
    cout << "Found at position: Row " << maxrow+1<< " Column " << maxcol+1;
    return 0;
}
   