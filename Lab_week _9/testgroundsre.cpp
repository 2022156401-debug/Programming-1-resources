#include <iostream>
using namespace std;
double circumfrenceOfCircle ( double radius);

int main () {
    
//q4
    cout << "\nCirfumfrence of a circle" << endl;
    
    double length;
    cout << "Enter radius: ";
    cin >> length;

    circumfrenceOfCircle (length);
    double resultCircumfrence = circumfrenceOfCircle (length);

    cout << "The Circfumfrence of the circle with radius " << length << " is " << resultCircumfrence << endl;

    return 0;
}

double circumfrenceOfCircle ( double radius) {
    double circ = (2 * 3.1415) * radius;
    return circ;
    
}