#include <iostream>
using namespace std;
int main () {
    // creating empty variable
    double radius;
    double area;
    double circumference;

    // creating input/output prompt
    cout <<"Enter radius of circle: ";
    cin >> radius;
    // creating processing system 
    area = 3.1415 * radius * radius;
    circumference = 2 * 3.1415 * radius;

    // creating display prompt
    cout <<"--->>>  The CIRCUMFERENCE & AREA of a circle of radius: " << radius << "  <<<---" << endl;
    cout << endl;
    cout << " is " << circumference << " and " << area << " respectively"  << "." << endl;
    return 0;

}
