// 9. using for llop to calculate the sum of the even numbers from 2 to 20
#include <iostream>
using namespace std;

int main () {
    cout << "\n using for loop to calculate the sum of the even numbers from 2 to 20: \n";

    for (int i = 0;i <= 20;i+= 2){
        cout << i + i << " ";
    }

    cout << endl;
    
    return 0;
}