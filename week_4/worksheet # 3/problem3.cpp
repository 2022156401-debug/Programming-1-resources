#include <iostream>
using namespace std;

int main () {
    int product = 1;
    int number[]={ 1, 2, 3, 4, 5 };

    for ( int i = 0; i <= 4; i++ ){
        product *= number[i];
    }

    cout <<"The product of the number from 1 to 5 is " << product <<endl;


    return 0;
}