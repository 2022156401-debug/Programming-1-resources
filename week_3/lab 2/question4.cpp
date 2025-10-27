#include <iostream>
using namespace std;

int main() {

    double price,discount;

    cout <<"Enter Item fee: ";
    cin >> price;
    
    discount = price - (price * 0.10);

    if (price>100) {
        cout << discount <<" is your total charge...\n";
    } else {
        cout << price <<" is your final charge...\n";
    }

    return 0;
}