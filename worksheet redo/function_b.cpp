#include <iostream>
#include <cmath>   // for e square roots, powers, trigonometry, logarithms, rounding, and more functions

using namespace std;
bool checkEnds (string word );
double multiplyNumbers (double multi1, double multi2 );
double cubeNumber (double num1 );
double areaOfRectangle (double length, double width );
double perimeterOfRectangle (double length, double width );
double hypotenuse (double opposite, double adjacent);
double averageOfFour (double num1, double num2, double num3, double num4 );
bool isMultiple (int positive1, int positive2);
int factorial (int num);
string repeat(string text, int count);
int sumArray (int arr[],int size);
int findMax (int arr2[], int size2);
int countOccurrences (int arr[], int size, int target);
void printReverse(int arr[], int size);





int main () {
    
    //question #1

    string check = "sleepless";

    checkEnds (check);

    cout << "1. Comparing first and last number of the word \"sleepless\"..." << endl;

    if (checkEnds(check)) {
        cout << "\nTrue..." << endl;// if the output return, execute this command
    } else {
        cout << "\nFalse..." << endl;
    }

    //question #2

    cout << "\n2. Enter Two numbers in meters(m): " << endl; 
    double first,second;

    cout << "\n-Enter first number: "; 
    cin >> first;
    cout << "-Enter second number: ";
    cin >> second;

    multiplyNumbers ( first, second);

    double result = multiplyNumbers ( first, second);

    cout << "\nThe product of " << first << "m and " << second << "m is " << result << "m." << endl;

    //question #3

    cout << "\n3. Finding the cude of a number." << endl;
    
    cout << "Enter number: "; 
    double triple;
    cin >> triple;

    cubeNumber (triple); 
    
    double resultCube = cubeNumber (triple);

    cout << "\nThe  cube of the number " << triple << " is " << resultCube << endl; 

    //question  #4

    cout << "\n4. Calculating area of a rectnagle." << endl;

    double side1,side2;
    cout << "\nEnter length: ";
    cin >> side1;
    cout << "\nEnter Width: ";
    cin >> side2;

    areaOfRectangle ( side1, side2);
    double resultArea = areaOfRectangle ( side1, side2);

    cout << "\nThe area of the triangle of length " << side1 << " and width " << side2 << " is " << resultArea << endl;

    // question #5

    cout << "\n5. Finding perimeter of a rectangle in meters (m)." << endl;
    double lside, wside;
    cout << "\nEnter length: ";
    cin >> lside,
    cout << "\nEnter Width: ";
    cin >> wside;

    perimeterOfRectangle (lside, wside);

    double resultPerimeter = perimeterOfRectangle (lside, wside);

    cout << "\nThe perimeter of a rectangle of length " << lside 
    << "m and " << wside << "m is " << resultPerimeter << "m." << endl;

    //question #6

    cout << "\n6. Finding the hypotenuse of a rigth triangle given adjacent and opposite sides." << endl;

    double a, b;

    cout << "Enter length of first side: ";
    cin >> a;

    cout << "Enter length of second side: ";
    cin >> b;

    hypotenuse (a, b);

    double resultHyp = hypotenuse(a, b);

    cout << "The hypotenuse is: " << resultHyp << endl;

    //question #7

    cout << "\nFinding the average of four numbers." << endl;

    double number1,number2,number3,number4;

    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third number: ";
    cin >> number3;
    cout << "Enter fourth number: ";
    cin >> number4;

    averageOfFour (number1, number2, number3 ,number4);

    double resultAverage = averageOfFour (number1, number2, number3 ,number4);

    cout << "\nThe average of the four numbers are " << resultAverage << endl;
    
    //question #8

    cout << "\n8. Checkinhg  if the first number is a multiple of the second number." << endl;
    int pos1,pos2;
    cout << "Enter first number: ";
    cin >> pos1;
    cout << "Enter second number: ";
    cin >> pos2;

    isMultiple (pos1, pos2 );

    if (isMultiple (pos1, pos2 )) {
        cout << "The number " << pos1 << " is a multiple of " << pos2 << endl;
    } else {
        cout << "The number " << pos1 << " is NOT a multiple of " << pos2 << endl;
    }

    //question #9
    cout << "\nFinding factorial of a number: " << endl;
    int number;
    cout << "Enter Number: ";
    cin >> number;
    cout << "\nFactorial of " << number << " is: " << factorial(number) << endl;

    //question #10
    cout << "\n10. Word repetition per times stated: " << endl;
    string word;
    int times;

    cout << "Provide Word: ";
    cin >> word;
    cout << "Enter Repetion Counter: ";
    cin >> times;

    string repeated = repeat(word, times);
    cout << "Repeated string: " << repeated << endl;

    //question #11

    int arr[]= { 11, 12, 13, 14};
    int size = 4;

    sumArray (arr, size);
    int arrSum = sumArray (arr, size);

    cout << "\n11. The sum of the number in the given array is " <<  arrSum << "." << endl;
    
    //question #12

    int arr2 [] = { 5, 12, 3, 7, 9};
    int size2 = 4;

    findMax ( arr2, size2);
    int resultarr2 = findMax ( arr2, size2);

    cout << "\n12. The max number of the given array is " <<  resultarr2 << "." << endl;

    //question #13 

    int size3 = 6;
    int target = 2;
    int arr3 [] = { 1, 2, 3, 2, 4, 2};

   countOccurrences (arr3, size3, target);
   int resultCount = countOccurrences  (arr3, size3, target);
    

   cout << "\n13. The number 2 is repeated in  the given array " << resultCount << " times." << endl;

   //question #14

    int arr4 [] = { 10, 20, 30};
    int size4 = 3;

    printReverse ( arr4, size4);

    //question #15

    int arr5[] = { 1, 3, 5};
    int size5 = 3;

    doubleArray ( arr5, size5);

    cout << "\n15. Updated Array: " << endl;
    for (int i = 0; i < size5; i++) {
        cout << arr5[i] << endl;
    }


    return 0; // end of main function
}





//question #1
bool checkEnds (string word) {
    char first = word [0];//first char in sleepless starts at cell 0
    char last = word [word.length() - 1];// second char starts at the last cell of the word length(word [word.length() -1])

    return (first == last);//sends the value if true to the main function as checkEnds
}

//question #2
double multiplyNumbers ( double multi1, double multi2) {
    double product = multi1 * multi2;
    return (product);
}

//question #3

double cubeNumber (double num1) {
    double cube = num1 * (num1 * num1);
    return (cube);
}

//question #4

double areaOfRectangle (double length, double width) {
    double area = length * width;
    return (area);
}

//question #5

double perimeterOfRectangle (double length, double width ) {
    double perimeter = 2 * (length + width);
    return (perimeter);

}

//question #6

double hypotenuse (double opposite, double adjacent) {

    double hyp = sqrt((opposite * opposite) + (adjacent * adjacent));
    return (hyp);
}

//question #7

double averageOfFour (double num1, double num2, double num3, double num4 ) {
    double average = (num1 + num2 + num3 + num4) / 4;
    return (average);
}

//question #8

bool isMultiple (int positive1, int positive2) {
    int check =  positive2 % positive1;

    return (check == 0);
}

//question #9

int factorial (int num) {
    int result =1;

    if (num == 0) {
        return 1;
    }
    for (int i = 1; i <= num; i++) {
        result *= i;
    }

    return (result);
}

//question #10

string repeat(string text, int count) {
     string result = "";

    if (count <= 0) {
        return ("\nINVALID COUNTER VALUE...");
    }

    for (int i = 0; i < count; i++) {
        result += text;
    }

    return (result);
}

//question # 11

int sumArray (int arr[],int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}
    
// question #12

int findMax (int arr2[], int size2) {
    int store = arr2 [0];
    for (int i = 0; i <= size2; i++) {
        if ( arr2[i] < store) {
            store = arr2[i];
        }
    }

    return store;
}

//question #13

int countOccurrences ( int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

//question #14 
void printReverse(int arr[], int size) {
    cout << "\n14. Print array in reverse order: " << endl;
    for (int i = size -1; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

void doubleArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }

}