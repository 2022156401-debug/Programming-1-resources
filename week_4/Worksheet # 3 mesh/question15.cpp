#include <iostream>
#include <string>
using namespace std;

int main() {
   // 15. Numbers from 1 to 30 divisible by both 2 and 3
    cout << "\n15. Numbers from 1 to 30 divisible by 2 and 3:\n";
    for (int i = 1; i <= 30; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}


