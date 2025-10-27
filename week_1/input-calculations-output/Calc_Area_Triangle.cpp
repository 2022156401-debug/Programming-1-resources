#include <iostream>

int main () {
    // creating empty variable
    double base;
    double height;
    double area;
    // creating input/output prompt
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    // creating processing system
    area = (base * height) / 2;
    // creating dislpay prompt
    std::cout << "The area of the triangle is: " << area << std::endl;
    return 0;
}