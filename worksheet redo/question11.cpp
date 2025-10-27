#include <iostream>
using namespace std;

// Function to return the sum of all elements in an array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {11, 12, 13, 14};
    int size = 4;

    int result = sumArray(arr, size);
    cout << "Sum of array elements: " << result << endl;

    return 0;
}
