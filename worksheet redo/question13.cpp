#include <iostream>
using namespace std;

// Function to count how many times a target number appears in the array
int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int size = 6;
    int target = 2;

    int result = countOccurrences(arr, size, target);
    cout << "Occurrences of " << target << ": " << result << endl;

    return 0;
}
