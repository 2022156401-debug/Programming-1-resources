#include <iostream>
using namespace std;

int main() {
    int years_of_service;
    double salary;
    
    cout << "Enter years of service: ";
    cin >> years_of_service;
    
    cout << "Enter current salary: $";
    cin >> salary;
    
    double bonus = (years_of_service >= 5) ? 0.10 * salary : 0.05 * salary;
    cout << "Employee bonus: $" << bonus << endl;

    return 0;
}
