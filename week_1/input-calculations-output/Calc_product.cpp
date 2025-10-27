#include <iostream>

int main() {
    // creating empty vairables
    double num1;
    double num2;
    double product;
    // creating input/output prompt
    std::cout <<"Enter First Number ";
    std::cin >> num1;
    std::cout <<"Enter Second Number ";
    std::cin >> num2;
    // creating processing system
    product = num1 * num2;
    // creating dislpay prompt
    std::cout <<"the Product of " << num1 << " and " << num2 << " is " << product << "." << std::endl;
    
    return 0;
    
}
