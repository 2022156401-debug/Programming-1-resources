#include <iostream>

int main(){
    // creating empty variables
    double length;
    double width;
    double heigth;
    double volume;
    // creating input/output promt
    std::cout <<"Enter Lenght of cuboid: ";
    std::cin >> length;
    std::cout <<"Enter width of cuboid: ";
    std::cin >> width;
    std::cout <<"Enter heigth of cuboid: ";
    std::cin >> heigth;
    //creating the processing system
    volume = length * width * heigth;
    //creating the display prompt"
    std::cout <<"The Volume of the Cuboid with the Length:" << length << ", Width:" << width <<" and heigth:" << heigth << " is " << volume << " . " << std::endl;

    return 0;
}
