#include <iostream>
#include <string>
using namespace std;

int main() {
    // 3. Product of numbers from 1 to 5
    int product = 1;
    for (int i = 1; i <= 5; i++) {
        product *= i;
    }
    cout << "\n3. Product from 1 to 5: " << product << endl;
    return 0;
}
