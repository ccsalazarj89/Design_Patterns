#include <iostream>

using namespace std;

    int main(){

    int myvar;
    myvar = 25; //myvar's value  

    auto a = &myvar; //memory adress where myvar's value is Adress of operator(&)
    auto b = *a;     //value pointer by a.   Dereference operator(*)
    cout<<a<<endl;
    cout<<b<<endl;

}