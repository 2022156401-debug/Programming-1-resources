#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int smallest = (num1 < num2 && num1 < num3) ? num1 : ((num2 < num3) ? num2 : num3);
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
