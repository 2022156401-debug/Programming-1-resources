//create voters eligiblity list for users 18yrs and up
#include <iostream>
using namespace std;

int main() {
    int menuChoice;
    char continueChoice;
    
    do {
        cout << "=== MAIN MENU ===\n";
        cout << "1. Check Voter Eligibility\n";
        cout << "2. Evaluate Grade\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> menuChoice;
        cout << "\n";
        
        switch(menuChoice) {
            case 1:
                do {
                    int age;
                    cout <<"Enter Voters Age: \n";
                    cin >> age;
                    cout <<"\n";
                    
                    if (age >=  18){
                        cout <<"Voter is eligible \n\n";
                    } else {
                        cout <<"Voter is not eligible \n\n";
                    }
                    
                    cout << "Check another voter? (y/n): ";
                    cin >> continueChoice;
                    cout << "\n";
                } while (continueChoice == 'y' || continueChoice == 'Y');
                break;
                
            case 2:
                do {
                    int grade;
                    cout <<"Enter grade: ";
                    cin >> grade;
                    
                    if (grade >= 100) {
                        cout <<"A. \n"; 
                    } else if(grade >= 90){
                        cout <<"B. \n";
                    } else if (grade >= 80){
                        cout <<"C. \n";
                    } else if (grade >= 70){
                        cout <<"D. \n";
                    } else if (grade >= 60) {
                        cout <<"E. \n";
                    } else {
                        cout <<"F. \n";
                    }
                    
                    cout << "Evaluate another grade? (y/n): ";
                    cin >> continueChoice;
                    cout << "\n";
                } while (continueChoice == 'y' || continueChoice == 'Y');
                break;
                
            case 3:
                cout << "Exiting program...\n";
                break;
                
            default:
                cout << "Invalid choice. Please try again.\n\n";
        }
    } while (menuChoice != 3);

    return 0;
}
