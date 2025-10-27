#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;
    int num;

    while (count < 10) {
        cout << "Enter an integer (-1 to stop): ";
        cin >> num;

        if (num == -1) {
            break;
        }

        arr[count] = num;
        count++;
    }

    cout << "\nNumbers entered: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
