// Problem 4
#include <iostream>
using namespace std;

int main() {
    int numbers[6];
    for (int i = 0; i < 6; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> numbers[i];
    }
    cout << "\nOriginal array: ";
    for (int i = 0; i < 6; i++) cout << numbers[i] << " ";
    cout << "\nReversed array: ";
    for (int i = 5; i >= 0; i--) cout << numbers[i] << " ";
    cout << endl;
    return 0;
}
