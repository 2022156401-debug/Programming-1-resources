#include <iostream>
using namespace std;

int main() {

    double radius;
    double area;
    double circumference;

    cout <<"Enter radius of circle: ";
    cin >> radius;
    area = 3.1415 * radius * radius;
    circumference = 2 * 3.1415 * radius;

    
    cout <<"The circumference and area of a circle of radius: " << radius << endl;
    cout << endl;
    cout << "is " << circumference << " and " << area << " respectively"  << "." << endl;
    return 0;

}
