#include <iostream>
#include <memory>


int main(){

int * foo;    
foo = new int [5]; //if allocation fails , an exception is thrown
foo = new (std::nothrow) int[5];
return 0;
}
