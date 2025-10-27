#include <iostream>
using namespace std;
using  std::string;

class user {
// Currently Private by default
//can add protected:,public to charge access of class function
public://changed to public
    string School;
    string Name;
    int Age;

    void Introduction () {
        cout << "Your name is: " << Name << endl;
        cout << "You attend: " << School << endl;
        cout << "Your age is: " << Age << endl;  
    }

    //create construct
    user (string name, string school, int age){
        Name = name;
        School = school;
        Age = age;

    }

};

int main () {
    user student1 = user ( "Adrian Morris", "University Of Belize", 20); // using construct


    /*student1.School = "University Of Belize";
    student1.Name = "Adrian Morris";
    student1.Age = 20;
    student1.Introduction ();*/    // to repeat commmand - copy and paste function call on new line

    cout << '\n';
    
    user student2 = user("Alvin Staines", "University Of Belize", 19);

    
    /*student2.School = "University Of Belize";
    student2.Name = "Alvin Staines";
    student2.Age = 19;
    student2.Introduction ();*/
}