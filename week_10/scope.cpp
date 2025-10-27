#include<iostream>
using namespace std;

// Function prototype
void foo();


int main() {
    // Function call
   cout <<"==MAIN==\n";
   foo();

   return 0;
}

// Function definition
void foo() {
    cout <<"==FOO==\n";
    int x = 42;
    cout <<"The value of x is: " << x << endl;
}
