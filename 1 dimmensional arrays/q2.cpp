// Problem 2
#include <iostream>
using namespace std;

int main() {
    int numbers[7], min, minIndex = 0;
    for (int i = 0; i < 7; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> numbers[i];
    }
    min = numbers[0];
    for (int i = 1; i < 7; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            minIndex = i;
        }
    }
    cout << "\nYour array: ";
    for (int i = 0; i < 7; i++) cout << numbers[i] << " ";
    cout << "\nSmallest number: " << min << "\nFound at index: " << minIndex << endl;
    return 0;
}
