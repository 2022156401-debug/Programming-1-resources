#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter the amount: $";
    cin >> amount;

    double discount = 0;
    if (amount >= 50 && amount <= 200) {
        discount = 0.05;
    } else if (amount > 200) {
        discount = 0.10;
    }

    double final_price = amount - (amount * discount);
    cout << "Final price after discount: $" << final_price << endl;

    return 0;
}
