#include <iostream>

int main () {
    // creating empty variable
    double mark1;
    double mark2;
    double mark3;
    double total;
    // creating input/output prompt
    std::cout <<"Enter Subject grade: ";
    std::cin >> mark1;
    std::cout <<"Enter Subject grade: ";
    std::cin >> mark2;
    std::cout <<"Enter Subject grade: ";
    std::cin >> mark3;
    // creating processing system
    total = (mark1 + mark2 + mark3) / 300 * 100;
    // creating dislpay prompt
    std::cout <<"Your average is: " << total << "%" << std::endl;

    return 0;
}