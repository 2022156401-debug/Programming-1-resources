#include <iostream>

int main (){
    // creating empty variable
    double num1;
    double num2;
    double perimeter;
    // creating input/output prompt
    std::cout <<"Enter lenght of Rectangle ";
    std::cin >> num1;
    std::cout <<"Enter Width of Rectangle ";
    std::cin >> num2;   
    // creating processing system 
    perimeter = (num1 + num2) * 2;
    // creating dislpay prompt

    std::cout <<"The Perimeter of the Rectangle of Length " << num1 << " and Width " << num2 << "is" << perimeter << " . " << std::endl;


    return 0;
}
