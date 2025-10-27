#include <iostream>
int main() {
    //creating empty variables
    double num1;
    double num2;
    double sum;

    // creating input/output prompt
    std::cout <<"Enter first Number ";
    std::cin >> num1;
    std::cout <<"Enter Secnond Number ";
    std::cin >> num2;

    // creating processing system
    sum = num1 + num2;

    // creating display prompt

    std::cout <<"The Sum of " << num1 << " and " << num2 << " is " << sum << "." << std::endl;

    return 0;

}
