#include <iostream>
using namespace std;

int main () {

    //question #1
    
    int arr [3][3];

    cout << "1. Creating a 2D array that outputs a 3 x 3 table.\n" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0;j < 3; j++) {
            cout << "  Please enter number for row " << i+1 << " column " << j+1 << ": ";
            cin >> arr[i][j];
        }
    }
    cout << "\n-The matrix of the given numbers: \n" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0;j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << '\n' << endl;

    //question #2

    int arr2[3][3];
    int largest;
    int row;
    int column;

    cout << "\n2. Creating a 2D array that outputs Largest value and its position.\n" << endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0;j < 3; j++) {
            cout << "Please enter number for row " << i+1 << " column " << j+1 << ": ";
            cin >> arr2[i][j];
        }

        largest = arr2[0][0];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (largest < arr2[i][j]) {
                    largest = arr2[i][j];
                    row = i;
                    column = j;
                }
            }
        }
    }
    cout << "\nMaximum value: " << largest << endl;
    cout << "Found at position: Row " << row+1<< " Column " << column+1;
    return 0;

    return 0;
}