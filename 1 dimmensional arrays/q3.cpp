// Problem 3
#include <iostream>
using namespace std;

int main() {
    int numbers[8], evenCount = 0, oddCount = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < 8; i++) {
        if (numbers[i] % 2 == 0) evenCount++;
        else oddCount++;
    }
    cout << "\nYour array: ";
    for (int i = 0; i < 8; i++) cout << numbers[i] << " ";
    cout << "\nEven numbers: " << evenCount << "\nOdd numbers: " << oddCount << endl;
    return 0;
}
