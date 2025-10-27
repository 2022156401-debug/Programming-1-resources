#include <iostream>

int main () {
    // creating empty variable
    double num1;
    double num2;
    double num3;
    double total;
    // creating input/output prompt
    std::cout << "Enter the item #1 cost: ";
    std::cin >> num1;
    std::cout << "Enter the item #2 cost: ";
    std::cin >> num2;
    std::cout << "Enter the item #3 cost: ";
    std::cin >> num3;
    // creating processing system
    total = num1 + num2 + num3;
    // creating dislpay prompt
    std::cout << "The total cost is: " << total << std::endl;

    return 0;
}