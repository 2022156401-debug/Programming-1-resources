#include <iostream>
using namespace std;


int add ( int a, int b);
int subtract ( int a, int b);
int multiply ( int a, int b);
double divide ( double a, double b);
string oddOrEven (int num1);
int sumArray (int arr[], int size);
double circumfrenceOfCircle ( double radius);
string calculateGrade (int score);


int main () {

    //question #1

    cout << "1. Creating functions to add,subtract,multiply and divide respectively." << endl;
    int num1, num2;
    cout << "Enter two numbers \n"; 
    cout << "-Enter First number: ";
    cin >> num1;
    cout <<"-Enter second number: ";
    cin >> num2;
    
    //Addition

    add (num1, num2);
    int resultAdd = add (num1, num2);
    cout << "\ni. The sum of both numbers are: " << resultAdd << endl;

    //Subtraction

    subtract (num1, num2);
    int resultSubtract = subtract (num1, num2);
    cout << "\nii. The difference of both numbers are: " << resultSubtract << endl;

    //multiplication

    multiply (num1, num2);
    int resulMultiply =  multiply (num1, num2);
    cout << "\niii. The product of both numbers are: " << resulMultiply << endl;

    //division

    double divi1, divi2;
    cout << "\nEnter two numbers \n";
    cout << "-Enter First number: ";
    cin >> divi1;
    cout <<"-Enter second number: ";
    cin >> divi2;
    double resultDivide =  divide (divi1, divi2);
    cout << "\niv. The remainder of both numbers are: " << resultDivide << endl;



    //q2

    cout << "\n2. Check if it is odd or even." << endl;
    int number;
    cout << "Enter number: ";
    cin >> number;

    oddOrEven (number);

    string resultoddOrEven = oddOrEven (number);

    cout << "\n-This Number is: " << resultoddOrEven << endl;

    
    
    //q3

    cout << "\n3. Sum of the number in the array" << endl;

    int arr[] = {2, 6, 7, 8, 1};
    int size = 5;

    
    sumArray (arr, size);

    int resultSum = sumArray (arr, size);

    cout << "The sum of the numbers in the array is: " << resultSum << endl;

    
    
    
    //q4

    cout << "\n4. Finding the cirfumfrence of a circle" << endl;
    
    double length;
    cout << "Enter radius: ";
    cin >> length;

    circumfrenceOfCircle (length);
    double resultCircumfrence = circumfrenceOfCircle (length);

    cout << "\nThe Circfumfrence of the circle with radius " << length << "cm is " << resultCircumfrence << "cm." << endl;


    
    //challenge

    cout << "\n>>>CHALLENGE: Calculate grade letter depending on the score value." << endl;
    int input;
    cout << "-Enter grade: ";
    cin >> input;

    calculateGrade (input);
    string resultcalc = calculateGrade (input);

    cout << "\nThe grade Letter for the score of " << input << " is " << resultcalc << endl;


    return 0;
}




// question #1

int add (int a, int b) {
    int sum = a + b;
    return sum;
}
int subtract ( int a, int b){
    int sub = a - b;
    return sub;
}

int multiply ( int a, int b) {
     int multi = a * b;
    return multi;
}
    
double divide ( double a, double b) {
    if (a > 0) {
        double div = a / b;
        return div;
    } else {
    return -1;
    }
}

// question #2

string oddOrEven (int num1) {
    string result;

    if (num1 % 2 == 0) {
        result = "Even";
    } else {
        result = "Odd";
    }
    return result;
}

 // question #3

int sumArray (int arr[], int size) {
    int sum = 0;// rememver to set variable to 0 before storing info or it will likely start off with garbage #'s or wrong values
    for (int i = 0; i < size; i++) {
        sum += arr [i];
    }
    return sum;

}

// question #4


double circumfrenceOfCircle ( double radius) {
    double circ = (2 * 3.1415) * radius;
    return circ;
    
}

string calculateGrade (int score) {
    string result; 
    if (score >= 90) {
        result = "A";
    } else if (score >= 80) {
        result = "B";
    } else if (score >= 70) {
        result = "C";
    } else if (score >= 60) {
        result = "D";
    } else {
        result = "F";
    }
    return result;
}