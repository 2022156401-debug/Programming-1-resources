#include <iostream>
using namespace std;

void greet();
void addNumbers(double num1, double num2);

int main() {
    int choice; // variable to store user choice

    cout << "Choose an option:\n";
    cout << "1. Greet\n";
    cout << "2. Add Numbers\n";
    cout << "\nEnter your choice (1 or 2): ";
    cin >> choice;

    // Use if/else or switch to decide which function to call
    if (choice == 1) {
        greet();
    } 
    else if (choice == 2) {
        double num1, num2;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        addNumbers(num1, num2);
    } 
    else {
        cout << "Invalid choice! Please run the program again.\n";
    }

    return 0;
}

void greet() {
    cout << "\nMy name is Adrian Allan Morris!!!" << endl;
}

void addNumbers(double num1, double num2) {
    double sum = num1 + num2;
    cout << "\nThe sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;
}
