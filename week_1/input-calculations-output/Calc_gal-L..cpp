#include <iostream>

int main () {
    // creating empty variable
    double volume;
    double liters;
    // creating input/output prompt
    std::cout << "Enter the volume in gallons: ";
    std::cin >> volume;
    // creating processing system
    liters = volume * 3.78541;
    // creating dislpay prompt
    std::cout << "The volume in liters is: " << liters << std::endl;
    return 0;
}