#include <iostream>

int main(){
//creating empty variable
double radius;
double circumfrence;
//creating input/output prompt
std::cout <<"Enter radius of Circle: ";
std::cin >> radius;
// creating processing system
circumfrence = 2 * 3.1415 * radius;
// creating display prompt
std::cout <<"The circumfrence of a circle of radius: " << radius <<" is " << circumfrence << " . " << std::endl;

    return 0;
}