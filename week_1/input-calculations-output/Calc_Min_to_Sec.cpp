#include <iostream>

int main () {
    // creating empty variable
    double minutes;
    double seconds;
    // creating input/output prompt
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    // creating processing system
    seconds = minutes * 60;
    // creating dislpay prompt    
    std::cout << "The number of seconds in " << minutes << " is "<< seconds << std::endl;
    std::cout << std::endl;
    std::cout <<"☆*:.｡.o(≧▽≦)o.｡.:*☆"<< std::endl;

    return 0;
}