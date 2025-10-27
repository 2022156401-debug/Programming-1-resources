#include <iostream>
#include <string>
using namespace std;

int main() {

    // 16. Sum of all odd numbers from 1 to 50
    int sum = 0;
    for (int i = 1; i <= 50; i += 2) {
        sum += i;
    }
    cout << "\n16. Sum of odd numbers from 1 to 50: " << sum << endl;
    return 0;

}
