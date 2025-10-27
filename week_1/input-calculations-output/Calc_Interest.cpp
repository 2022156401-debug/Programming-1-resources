#include <iostream>

int main () {
    // creating empty variable
    double dept;
    double dept2;
    double interest;
    double timeframe;
    double interest2;
    // creating input/output prompt
    std::cout <<"Enter the amount of you money borrowed: ";
    std::cin >> dept;
    std::cout <<"Enter interest rate you agreed on(in percentage): ";
    std::cin >> interest;
    std::cout <<"Enter payment period (in years): ";
    std::cin >> timeframe;
    // creating processing system
    
    dept2 = dept * interest/100 * timeframe;
    interest2 = dept2;
    dept2 = dept + dept2;
    // creating dislpay prompt
    std::cout <<"Congradulations you owe: $" << dept2 <<std::endl;
    std::cout <<"$" << interest2 << " on the $3000 you already owe.(ㆆ_ㆆ)" << std::endl;

    return 0;
}