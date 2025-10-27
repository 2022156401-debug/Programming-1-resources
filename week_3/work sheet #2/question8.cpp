#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter the amount: $";
    cin >> amount;

    double discount = 0;
    if (amount >= 100 && amount <= 500) {
        discount = 0.10;
    } else if (amount > 500) {
        discount = 0.20;
    }

    double final_price = amount - (amount * discount);
    cout << "Final price after discount: $" << final_price << endl;

    return 0;
}
