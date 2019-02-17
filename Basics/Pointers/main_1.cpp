#include <iostream>

using namespace std;

int main(){


    int firstvalue , secondvalue; 
    int  *mypointer;

    mypointer = &firstvalue;   // it saved  firstvalue's adress
    *mypointer = 10;           // set a value of 10 in mypointer
    mypointer = &secondvalue;  // it saved  firstvalue's adress
    *mypointer = 20;          // set a value of 20 in mypointer
    cout<<"Firstvalue is " << firstvalue <<endl;
    cout<<"Secondvale is " << secondvalue<<endl;
    cout<<"mypointer is  " << *mypointer<<endl;

    return 0;

}