#include<iostream>
using namespace std;

int sum(int values[], int size);

int main() {
   int scores[] = {1, 2, 3};
   int size = 3;

   int result = sum(scores, size);
   cout <<"The sum is: " << result << endl;

   return 0;
}

int sum(int values[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total = total + values[i];
    }
    return total;
}