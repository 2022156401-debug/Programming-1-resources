#include <iostream>

int main(){
    //creating empty variable
    double side;
    double area;
    //creating input/output prompt
    std::cout <<:"Enter side value of Squre: ";
    std::cin >> side;
    // creating processing system
    area = side * side;
    //creating display prompt
    std::cout >>"the area of the square of side length: " << side << " is " << area << " . " << std::endl;
    

    return 0;
}