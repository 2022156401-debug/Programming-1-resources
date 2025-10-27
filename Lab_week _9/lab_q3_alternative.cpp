#include <iostream>
using namespace std;

int sumArray (int arr[], int size);

int main () {
    
 //q3

    cout << "\n3. Sum of the number in the array" << endl;
    int size = 0; // size of the array
    cout << "How many numbers will yoiu be entering: ";
    cin >> size; 
    int arr[size] = {};

    cout << "Enter Numbers to be added: " << endl;
    for  (int i = 0; i < size; i++) {
    cin >> arr[i];
    }
    
    sumArray (arr, size);

    int resultSum = sumArray (arr, size);

    cout << "The sum of the numbers in the array is: " << resultSum << endl;
    

    return 0;
}

 // question #3

int sumArray (int arr[], int size) {
    int sum = 0;// remember to set variable to 0 before storing info or it will likely start off with garbage #'s or wrong values
    for (int i = 0; i < size; i++) {
        sum += arr [i];
    }
    return sum;

}