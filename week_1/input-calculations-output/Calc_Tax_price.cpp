//For Pre-calculated tax rate (tax%/100)=tax
#include <iostream>

int main () {
    // creating empty variable
    double price;
    double tax;
    double total;
    // creating input/output prompt
    std::cout << "Enter the price of the item: ";
    std::cin >> price;
    std::cout << "Enter the tax rate: ";
    std::cin >> tax;
    // creating processing system
    total = price + (price * tax);
    // creating dislpay prompt
    std::cout << "The total price of the item is: " << total << std::endl;

    return 0;
}