// Problem 8
#include <iostream>
using namespace std;

int main() {
    int numbers[8], evenNumbers[8], evenIndex = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < 8; i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers[evenIndex] = numbers[i];
            evenIndex++;
        }
    }
    cout << "\nOriginal array: ";
    for (int i = 0; i < 8; i++) cout << numbers[i] << " ";
    cout << "\nEven numbers: ";
    for (int i = 0; i < evenIndex; i++) cout << evenNumbers[i] << " ";
    cout << endl;
    return 0;
}
