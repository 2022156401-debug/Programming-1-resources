#include <iostream>

int main () {
    // creating empty variable
    double num1;
    double square;
    // creating input/output prompt
    std::cout <<"Enter a number to be squared: ";
    std::cin >> num1;    
    // creating processing system
    square = num1 * num1;
    // creating dislpay prompt
    std::cout << "The square of the number is: " << square << std::endl;

    return 0;
}