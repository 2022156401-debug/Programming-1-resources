#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int symbol[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

for (int i = 0; i <= 9; i++){
sum += symbol[i];
}
cout << "The sum of numbers 1 to 10 is " << sum << endl;

    return 0;
}