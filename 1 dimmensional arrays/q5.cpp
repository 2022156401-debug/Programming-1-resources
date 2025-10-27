// Problem 5
#include <iostream>
using namespace std;

int main() {
    int numbers[10], sum = 0, count = 0;
    double avg;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    avg = sum / 10.0;
    for (int i = 0; i < 10; i++) if (numbers[i] > avg) count++;
    cout << "\nYour array: ";
    for (int i = 0; i < 10; i++) cout << numbers[i] << " ";
    cout << "\nAverage: " << avg << "\nNumbers above average: " << count << endl;
    return 0;
}
