#include <iostream>
using namespace std;

int main(){
    double angle1,angle2,angle3,sum;
    cout<<"Enter angle A: ";
    cin>>angle1;
    cout<<"Enter angle B: ";
    cin>>angle2;
    cout<<"Enter angle C: ";
    cin>>angle3;

sum=angle1 + angle2 +angle3;

    if(sum==180){
        cout<<"Triangle is valid....\n\n";
    } else {
        cout <<"Error,This angle is invlid....";
    }
return 0;
}