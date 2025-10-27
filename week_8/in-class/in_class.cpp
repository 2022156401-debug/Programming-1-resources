
// Functions Slide #9
#include <iostream>
using namespace std;

void sayMyName();
void myBestColor();
void sayHello();
void myAddress();
void greeting(string name);
void printNumber(double value);
void computeSum(double val1,double val2,double val3);
void product (int val1,int val2);

//function  prototype
int main () {
   sayHello();
   sayMyName();
   myBestColor();
   myAddress();
   greeting("Paul");
   printNumber(4.5);
   computeSum( 12.3, 2.45, 4.5);
   product ( 12, 32);

   return 0;
}
// Function definitions
void sayMyName() {
    cout << "My name is Allan." << endl;
}

void myBestColor() {
    cout << "My favorite color is Blue." << endl;
}

void sayHello() {
    cout << "Hello there!" << endl;
}

void myAddress() {
    cout << "My address is in Belize." << endl;
}

void greeting(string name) {
    cout << "Nice to meet you, " << name << "!" << endl;
}

void printNumber(double value) {
    cout << "Print stored number: " << value << endl;
}

void computeSum(double val1, double val2, double val3) {
    double sum = val1 + val2 + val3;
    cout << "The sum is: " << sum << endl;
}

void product(int val1, int val2) {
    int product = val1 * val2;
    cout << "The product of " << val1 << " and " << val2 
         << " is " << product << endl;
}
