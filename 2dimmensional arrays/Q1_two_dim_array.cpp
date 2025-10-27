#include <iostream>
using namespace std;

int main () {
    int values[2][2];

    cout << "You will be asked to enter 4 numbers. \n";
    // read
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Please enter number for row " << i+1 << " column " << j+1 << ": ";
            cin >> values[i][j];
        }
    }

    // print
    cout << "\nYour Matrix: \n";
    cout << '\n';
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << values[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
