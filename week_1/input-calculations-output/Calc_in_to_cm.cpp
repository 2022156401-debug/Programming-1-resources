#include <iostream>

int main () {
    // creating empty variable
    double num1;
    double cm;
    // creating input/output prompt
    std::cout <<"Enter a number in inches: ";
    std::cin >> num1;
    // creating processing system
    cm = num1 * 2.54;
    // creating dislpay prompt
    std::cout << num1 << " inches is equal to " << cm << " cm.";

    return 0;
}
