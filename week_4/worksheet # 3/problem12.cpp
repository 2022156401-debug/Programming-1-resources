 // 12.	Use a for loop to print the characters of the string "hello" in reverse order.
 #include <iostream>
 using namespace std;

 int main () {
    string hello = "hello";
    cout << "\n The characters \"hello\" in reverse order is: \n";
     for (int i = hello.length()-1;i >= 0;i--){
     cout << hello[i];
    
     }
    
    cout << endl;
     return 0;
 }