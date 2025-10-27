#include <iostream>
using namespace std;

int main () {
 
    int x = 2;
    int y = 5;
    int z = 1;

    for (int i = 1; i <= 3; i++) {
        x = x + i;
        y = y + x;
        z = z + y;
    
    
    }

        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    
    

    return 0;
}