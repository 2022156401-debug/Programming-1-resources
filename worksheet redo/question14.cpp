#include <iostream>
using namespace std;

// Function to print array elements in reverse order
void printReverse(int arr[], int size) {
    cout << "Array in reverse order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30};
    int size = 3;

    printReverse(arr, size);

    return 0;
}
