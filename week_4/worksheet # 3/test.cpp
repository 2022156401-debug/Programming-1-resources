#include <iostream>
using namespace std;

int main() {
    int i = 5;

    cout << "Initial value of i: " << i << endl;

    cout << "Using i++ (post-increment): " << i++ << endl;
    // Prints 5, then increases i to 6

    cout << "After i++ the value of i is: " << i << endl;

    cout << "Using ++i (pre-increment): " << ++i << endl;
    // Increases i to 7 first, then prints 7

    cout << "Final value of i: " << i << endl;

    return 0;
}
