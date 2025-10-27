#include <iostream>
using namespace std;
void doubleArray(int arr[], int size);

int main() {
    int numbers[] = {1, 3, 5};
    int size = 3;  // number of elements in the array

    // Call the function to modify the array
    doubleArray(numbers, size);

    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to double each element in the array
void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // multiply each element by 2
    }
}