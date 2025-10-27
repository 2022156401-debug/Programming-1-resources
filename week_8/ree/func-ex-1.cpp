#include <iostream>
using namespace std;

void showMessage();
void greetUser (string name);
int addNumbers (int num1, int num2);
double findArea(double length, double width);

int main () {

    showMessage();

    string username;
    cout << "Enter your name: ";
    cin >> username;

    greetUser(username);

    int x, y;
    cout << "Enter two numbers: \n";
    cin >> x >> y; 

    int result = addNumbers ( x, y); 
    cout << "Sum = " << result << endl;

    double l,w;
    cout << "\nEnter length and width: ";
    cin >> l >> w;

    double area = findArea (l,w);

    cout << "Area = " << area << endl;
     

    return 0;

}

void showMessage() {
    
    cout << "\nWelcome to programming!" << endl;
 
}

void greetUser (string name) {
    cout << "\nWelcome back, "<< name << "!" << endl;
}

int addNumbers (int num1, int num2) {
    int total = num1 + num2;
    return total;
}

double findArea(double length, double width) {
    double area = length * width;
    return area; 
}