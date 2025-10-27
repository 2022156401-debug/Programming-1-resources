#include <iostream>

int main () {
    // creating empty variable
    double num1;
    double num2;
    double average;
    // creating input/output prompt
    std::cout << "Enter first Number ";
    std::cin >> num1;
    std::cout << "Enter Secnond Number ";
    std::cin >> num2;
    // creating processing system
    average = (num1 + num2) / 2;
      
    // creating dislpay prompt
    std::cout << "the Average of " << num1 << " and " << num2 << " is " << average << "." << std::endl;

    return 0;
}