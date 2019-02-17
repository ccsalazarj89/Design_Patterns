#include <iostream>

using namespace std;

int main(){

    int firstvalue = 5 , secondvalue = 15; 
    int *p1 , *p2;

    p1 = &firstvalue;  // p1 saves an memory address of firtvalue
    p2 = &secondvalue; // p2 saves an memory address of secondvalue
    *p1 = 10;          // value pointed to  p1 = 10
    *p2 = *p1;         // saves value from value pointed by p1;
    p1  = p2;          // value address is copied
    *p1 = 20;          // set value of 20 in value of pointed by p1

    cout<<"first value is "<< firstvalue<<endl;
    cout<<"second value is "<<secondvalue<<endl;


    return 0;
}