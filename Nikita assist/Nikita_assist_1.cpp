#include <iostream> 
using namespace std; 

int main() { 
    // Creating an array
    int array[3][3];
    
    //asking user to input 9 numbers 
    cout << "You will be asked to enter 9 numbers.";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        cout << "\nPlease enter number for row " << (i+1) << " column " << (j+1) << ": "; 
        cin >> array[i][j];
              } 
        }

    //printing array in matrix form 
    cout << "\nYour matrix:\n"; 
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
          cout << array[i][j] << " ";
        }
        cout << " \n";
    }
    
    return 0; 
}
