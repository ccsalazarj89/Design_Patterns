#include <iostream>

using namespace std;

int main(){

    int numbers[5];
    int * p;
    p = numbers;        // set value of  address memory
    *p = 10;            // set value pointed to 10 in that location.
    p++;                // increment p in array.
    *p = 20;            // set value pointed to 20 in the current location.
    p = &numbers[2];    // set address value memory in position 2
    *p = 30;            // set value pointed to 20 in the current location.
    p = numbers +3;     // set address memory value in positon 3 of the array.
    *p = 40;            // set value pointed to 40 in the current location.
    p = numbers;
    *(p + 4) = 50;

    for (int n=0; n <5; n++)
        cout<<numbers[n]<<" , "<<endl;
        
    return 0;
}