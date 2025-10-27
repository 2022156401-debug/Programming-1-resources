// Problem 10
#include <iostream>
using namespace std;

int main() {
    int array1[5], array2[5];
    bool found = false;
    cout << "Enter 5 numbers for first array:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << (i+1) << ": ";
        cin >> array1[i];
    }
    cout << "\nEnter 5 numbers for second array:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << (i+1) << ": ";
        cin >> array2[i];
    }
    cout << "\nFirst array: ";
    for (int i = 0; i < 5; i++) cout << array1[i] << " ";
    cout << "\nSecond array: ";
    for (int i = 0; i < 5; i++) cout << array2[i] << " ";
    cout << "\nCommon elements: ";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (array1[i] == array2[j]) {
                cout << array1[i] << " ";
                found = true;
            }
        }
    }
    if (!found) cout << "No common elements found";
    cout << endl;
    return 0;
}
