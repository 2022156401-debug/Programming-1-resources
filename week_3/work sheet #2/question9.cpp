#include <iostream>
using namespace std;

int main() {
    string light_color;
    cout << "Enter traffic light color (Red, Yellow, Green): ";
    cin >> light_color;

    if (light_color == "Red") {
        cout << "Action: Stop" << endl;
    } else if (light_color == "Yellow") {
        cout << "Action: Slow down" << endl;
    } else if (light_color == "Green") {
        cout << "Action: Go" << endl;
    } else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}

