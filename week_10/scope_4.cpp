#include<iostream>
using namespace std;

//there are two types of variables (lacal,global)

// Global variable
int y = 5;

// Function prototype
void foo();


int main() {
    // Function call
   foo();
   cout <<"==MAIN==\n";
   cout <<"The value of y is: " << y << endl;
   y = y + 10;
   cout <<"The value of y is: " << y << endl;
   
   return 0;
}

// Function definition
void foo() {
    cout <<"==FOO==\n";
    y = y + 1;
    cout <<"The value of y is: " << y << endl;
}