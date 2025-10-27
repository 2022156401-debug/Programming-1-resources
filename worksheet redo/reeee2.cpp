#include <iostream>
#include <cmath>   // for e square roots, powers, trigonometry, logarithms, rounding, and more functions

using namespace std;

int sumArray (int arr[],int size);




int main () {
    
    //question #11

    int arr[]= {11, 12, 13, 14};

    int size = 4;

    sumArray (arr, size);

    int arrSum =  sumArray (arr, size);

    cout << "\n The sum of the number in the given array is: " <<  arrSum << "." << endl;
    

    return 0;
}

//question # 11

int sumArray (int arr[],int size) {

    int sum = 0;

    for (int i = 0; i <= size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
