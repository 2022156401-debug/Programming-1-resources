#include <iostream>
#include <string>
using namespace std;

int main() {
    // 17. Numbers from 1 to 20 except those divisible by 2
    cout << "\n17. Numbers from 1 to 20 (excluding multiples of 2):\n";
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;

}
