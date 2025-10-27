#include <iostream>
using namespace std;

bool checkEnds (string check);
double multipleNumbers(double num1,double num2,double num3);
double cubeNumber (double num);
double areaOfRectangle(oduble length, double width);

int main () {

    cout << "1. Checking to see if the first and lasr letters are the same" << endl;
    string word;
    cout << "\nEnter a word:";
    cin >> word;

    checkEnds (word);
    
    if (checkEnds(word)) {
        cout << "\nLetter are the same." << endl; 
    } else {
        cout << "\nletter are different." << endl;
    }

    //question #2

    cout << "\n2. Multiplying three float numbers" << endl;
    double nums1,nums2,nums3;

    cout << "\nEnter three numbers to be multiplied: \n";
    cout << '\n';
    cin >> nums1;
    cin >> nums2;
    cin >> nums3;
    multipleNumbers(nums1, nums2, nums3);
    double resultProduct = multipleNumbers(nums1, nums2, nums3);
    cout << "\nThe product of the three numbers are: " << resultProduct << endl;

    //question #3

    cout << "\n3. Finding the cube of a number prrovided." << endl;
    double cube;
    cout << "\nEnter Number: ";
    cin >> cube;

    cubeNumber (cube);
    double resultCube = cubeNumber (cube);
    
    cout << "\nThe cube of the number " << cube << " is " << resultCube << "." << endl;
    
    //question #4

    cout << "\n4. Finding the area of a rectangle." << endl;
    double len,wid;

    b    

    double areaOfRectangle(len, wid);
    return 0;
}

//question #1

bool checkEnds (string check) {
    char first = check [0];
    char last = check[check.length () -1];

    return (first == last);
}

//question #2 

double multipleNumbers(double num1,double num2,double num3) {

    double product =  num1 * num2 * num3;

    return product;

}

//question #3

double cubeNumber (double num) {
    double cube = num * num * num;

    return cube;
}

//question #4

double areaOfRectangle(oduble length, double width) {
    double area = length * width;
    return area;
}