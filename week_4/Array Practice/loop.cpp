#include <iostream>
using namespace std;

int main() {
    
    // creating array to hold names
    string symbols[] = {"tapir", "orchid", "toucan", "flag"};
    //creating loop process and out put
    for (int i=0; i <=3;i++) {
        if (symbols[i]=="toucan"){
            cout <<"A beautiful bird...\n";
        }else{
            cout << symbols[i]<<endl;
        }
        cout << symbols[i] <<endl;
        cout <<"End count...\n";
    }

    for( int i = 0;i < 6;i++){

       cout <<"Hello!\n";
    }

   cout<<"bye!...\n";

    
    
    return 0;
}


   // cout<< symbols [0] << endl;
   // cout<< symbols [1] << endl;
   // cout<< symbols [2] << endl;
   // cout<< symbols [3] << endl;
    
    //to inverse placement of value being displayed:
    //cout<< symbols [3] << endl;
    //cout<< symbols [2] << endl;
    //cout<< symbols [1] << endl;
    //cout<< symbols [0] << endl;