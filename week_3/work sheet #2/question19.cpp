#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "Enter three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "Equilateral triangle" << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "Isosceles triangle" << endl;
    } else {
        cout << "Scalene triangle" << endl;
    }

    return 0;
}
