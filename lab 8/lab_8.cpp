#include <iostream>
using namespace std;

int findMin ( int arr[],int size);
int countPositive ( int arr[],int size);
void printReverse(int arr[], int size);
string repeat(string text, int count);
int countOccurrences (int arr[], int size, int target);

int main () {

    //question #1
    int size1 = 5;
    int arr1[] = { 9, 2, 14, 7, 5};

    findMin ( arr1, size1);

    int resultMin = findMin ( arr1, size1);

    cout << "\n1. The smallest nuymber in the given array is " << resultMin << "." << endl;

    //question #2

    int size2 = 6;
    int arr2[] = { 1, -3, 5, -2, 9, -8};

    findMin ( arr2, size2);
    
    int resultCount = countPositive ( arr2, size2);
    cout << "\n2. Number of positive values: " << resultCount << endl;

    //question #3

    int arr3 [] = {10, 20, 30};
    int size3 = 3;

    printReverse ( arr3, size3);
    
    //question #4

    cout << "\n4. Word repetition per times stated: " << endl;
    string word;
    int times;

    cout << "Provide Word: ";
    cin >> word;
    cout << "Enter repetition Counter: ";
    cin >> times;

    string repeated = repeat(word, times);
    cout << "Repeated string: " << repeated << endl;

    //challenge
    
    cout << "\n*Challenge*:\nFinding the target numbers occurrances within given array." << endl;

     int arr4[] = {1, 2, 3, 2, 4, 2};
     int size4 = 6;
     int target1 = 2;

    countOccurrences (arr4, size4, target1);
    int result = countOccurrences (arr4, size4, target1);

    cout << "\nThe target number repeats " << result << " times." << endl;



    return 0;
}


//question #1

int findMin (int arr[],int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

//question #2

int countPositive(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}
//question #3

void printReverse(int arr[], int size) {
    cout << "\n3. Print in reverse order:" << endl;
    for (int i = size -1; i >= 0; i--) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

//question #4
string repeat(string text, int count) {
     string result = "";

    if (count <= 0) {   
        return "";
    } else {
        for (int i = 0; i < count; i++) {
            result += text;
    }
}

    return result;
}

//Challenge

int countOccurrences (int arr[], int size, int target) {
    int count = 0;
    for (int i = 0;  i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}