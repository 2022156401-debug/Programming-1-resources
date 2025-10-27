#include <iostream>
using namespace std;

int main () {

    int grades[3][4] = {
    {76, 87, 95, 45},
    {98, 85, 78, 76},
    {80, 90, 75, 78}
    };
       

    for (int i =0; i < 3; i++) {
        for (int j = 0;j < 4; j++){
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << " The average of the different grades are: \n";
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0;j < 4; j++) {
            sum += grades[i][j];
        }
        double average = sum / 4; 
        cout << "Grade" << (i+1) << " :" << average << endl; 
    }
        cout << endl;

    
    return 0;
}