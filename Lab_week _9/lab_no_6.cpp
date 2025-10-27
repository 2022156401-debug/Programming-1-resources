#include <iostream>
using namespace std;

void greetUser ();
void printSum (int a, int b);
void printTable (int n);
void printStars (int n);
void countEvenOdd (int arr [], int size);


int main () {
    //question #1
    
    greetUser ();

    //question #2
    cout << "\n Finding the sum of two numbers." << endl;
    int num1,num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the first number: ";
    cin >> num2;

    printSum (num1, num2 );

    //question #3
    cout << "\n Finding the product." << endl;
    int num;

    cout << "Enter the number: ";
    cin >> num;

    printTable (num);

    //question #4

    cout << "\nPrint stars";

    int value;
    cout << "Enter amount of stars to display: ";
    cin >> value;

    printStars (value);


    //challenge

    int arr[] = {2, 6, 7, 8, 1};
    int size = 5;

    
    countEvenOdd (arr, size);

    
    return 0;
}

//question #1 


void greetUser () {
    cout << "\nHello, Welcome to C++ Programming!" << endl;

}

// question #2 

void printSum (int a, int b) {
    int sum = a + b;
    cout << "\nThe sum of both numbers are " << sum << endl;
    
}
//question #3 

void printTable (int n) {
    for (int i = 1; i <= 10; i++) {
        cout << i << " * " << n << " = " << n * i << endl;
    }
}

void printStars (int n) {
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
     cout << endl;  

}
void countEvenOdd (int arr[], int size) {
    int countEven = 0, countOdd = 0;
    for (int i = 0; i <= size; i++) {
        if (arr[i] % 2 == 0 ) {
            countEven++;
        } else {
            countOdd++;
        }
    } 
    cout << "\nEven count: " << countEven << endl;
    cout << "\nOdd count: " << countOdd << endl;



}