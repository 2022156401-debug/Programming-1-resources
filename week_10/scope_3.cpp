#include<iostream>
using namespace std;

// Global variable
int y = 5;

// Function prototype
void foo();


int main() {
    // Function call
   foo();
   cout <<"==MAIN==\n";
   cout <<"The value of y is: " << y << endl;

   
   return 0;
}

// Function definition
void foo() {
    cout <<"==FOO==\n";
    int y = 22;
    cout <<"The value of y is: " << y << endl;
}
