// 10.	Use a for loop to calculate the sum of odd numbers from 1 to 19.
#include <iostream>
using namespace std;

int main () {

    cout << "\ncalculate the sum of odd numbers from 1 to 19: \n";

    for (int i = 1;i <=19;i+=2){
        cout << i + i << " ";
    }
    
    cout << endl;
    
    return 0;
}