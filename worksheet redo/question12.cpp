#include <iostream>
using namespace std;

// Function to return the largest element in an array
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {5, 12, 3, 7, 9};
    int size = 5;

    int result = findMax(arr, size);
    cout << "Largest element: " << result << endl;

    return 0;
}
