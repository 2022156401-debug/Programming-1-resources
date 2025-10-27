#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3,sum;
    cout << "Enter three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    sum = side1 + side2 + side3;

    if (sum==180) {
        cout <<"Triangle is valid...\n";
    } else {
        cout<<"Error,Invalid angles entered...\n";
    }
    }