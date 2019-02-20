#include <iostream>

using namespace std;

int main(){

    int myvar;
    int * myptr = &myvar; //It's a way to initialize a pointer

   // int * myptr;   //This code  and above one  are the same
    myptr = &myvar;

    int *foo = &myvar;
    int *bar = foo;

    cout<<foo<<" "<<bar<<endl; // they got the same value.


    return 0;

}