#include <iostream> 
using namespace std; 

int main() { 
    //creating variables and matrix
    int array[2][2];
    int max;
    int maxRow;
    int maxCol;

    //asking user to input 4 numbers
    cout << "You will be asked to enter 4 numbers.\n";
    for(int i = 0; i < 2; i++) { 
        for(int j = 0; j < 2; j++) { 
            cout << "\nPlease enter number for row " << (i+1) << " column " << (j+1) << ": ";
            cin >> array[i][j];
         }
        }

        //initalizing the array and variables
        max = array[0][0];
         maxRow = 0;
         maxCol = 0;

         //using for loop to findd the max and the maxrow and max column
        for( int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
            if(array[i][j] > max) { 
                max = array[i][j];
                maxRow = i; 
                maxCol = j;
            }
        }
    }
    cout << "Maximum value: " << max << "\n"; 
    cout << "Found at position: Row " << maxRow+1 << " Column " << maxCol+1 << "\n"; 
        return 0; 
    }
