#include <iostream>
#include <string>
using namespace std;

int main() {
    // 12. Print "hello" in reverse order
    string hello = "hello";
    cout << "\n12. \"hello\" in reverse: ";
    for (int i = hello.length() - 1; i >= 0; i--) {
        cout << hello[i];
    }
    cout << endl;

}

