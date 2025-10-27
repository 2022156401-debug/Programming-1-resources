#include <iostream> 
using namespace std; 

int main() { 
    // creating variables
    int rows;
    int columns;
    //creating three matrix
    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];
    
    cout << "Please enter number of rows: "; 
    cin >> rows; 
    cout << "\nPlease enter number of columns: "; 
    cin >> columns; 
    
    cout << "\nPlease enter the numbers for the first matrix: \n";

    for(int i = 0; i < rows; i++) { 
        for(int j = 0; j < columns; j++) {
            cout << "\nPlease enter number for row " << (i+1) << " columnn " << (j+1) << ": ";
            cin >> matrix1[i][j];
        }
    }


    cout << "\nPlease enter the numbers for the second matrix: \n";

    for(int i = 0; i < rows; i++) { 
        for(int j = 0; j < columns; j++) {
            cout << "\nPlease enter number for row " << (i+1) << " columnn " << (j+1) << ": ";
            cin >>matrix2[i][j];
        }
    }


    for(int i = 0; i < rows; i++) { 
        for(int j = 0; j < columns ; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j]; 
        }
    }
    
    cout << "The sum of the two matrices: \n"; 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) { 
            cout << result[i][j] << " "; 
        }
        cout << "\n";
    }

    return 0;
}