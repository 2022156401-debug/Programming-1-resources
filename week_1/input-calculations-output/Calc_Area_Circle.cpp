#include <iostream>

int main () {
    // creating empty variable
    double radius;
    double area;
    // creating input/output prompt
    std::cout <<"Enter radius of circle ";
    std::cin >> radius;
    // creating processing system 
    area = 3.1415 * radius * radius;
    // creating dislpay prompt
    std::cout <<"The Area of a cirle radius " << radius << " is " << area << "." <<std::endl;

    return 0;
}
