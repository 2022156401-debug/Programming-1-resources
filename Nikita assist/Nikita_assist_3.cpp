#include <iostream> 
using namespace std; 

int main() { 
    // creating variables
    int rows;
    int columns;
    //creating three matrix
    int matrix1[100][100];
    int matrix2[100][100];
    int result[100][100];
    
    // asking user to input number of rows; 
    cout << "Please enter number of rows: "; 
    cin >> rows; 
    cout << "\nPlease enter number of columns: "; 
    cin >> columns; 
    
    // asking user to input values for first matrix
    cout << "\nPlease enter the numbers for the first matrix: \n";
    //using for loop to ask user to input values in the different matrix
    for(int i = 0; i < rows; i++) { 
        for(int j = 0; j < columns; j++) {
            cout << "\nPlease enter number for row " << (i+1) << " columnn " << (j+1) << ": ";
            cin >> matrix1[i][j];
        }
    }

    // asking user to input values for second matrix
    cout << "\nPlease enter the numbers for the second matrix: \n";
    //using for loop to ask user to input values in the different matrix
    for(int i = 0; i < rows; i++) { 
        for(int j = 0; j < columns; j++) {
            cout << "\nPlease enter number for row " << (i+1) << " columnn " << (j+1) << ": ";
            cin >>matrix2[i][j];
        }
    }

    //using for loop to add the matrices
    for(int i = 0; i < rows; i++) { 
        for(int j = 0; j < columns ; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j]; 
        }
    }
    
    // using for loop to display the result 
    cout << "The sum of the two matrices: \n"; 
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) { 
            cout << result[i][j] << " "; 
        }
        cout << "\n";
    }

    return 0;
}