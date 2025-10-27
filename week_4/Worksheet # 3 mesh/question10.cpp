#include <iostream>
#include <string>
using namespace std;

int main() {
    // 10. Sum of odd numbers from 1 to 19
    int sum = 0;
    for (int i = 1; i < 20; i += 2) {
        sum += i;
    }
    cout << "\n10. Sum of odd numbers from 1 to 19: " << sum << endl;
    return 0;
}

