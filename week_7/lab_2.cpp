#include <iostream>
using namespace std;

int main () {
    
    int y;
    int x = 1;
    int total = 0;
    
    while (x <= 10) { 
        y = x * x;
        cout << y << endl;
        total = total + y;
        x++;
    }
    
    cout <<"The total is " << total << endl;

return 0;
}