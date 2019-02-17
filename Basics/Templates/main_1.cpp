#include <iostream>

using namespace std;

template <class T, class U>
bool are_equal (T a , U b)
{
    return (a==b);
}

int main()
{
    if (are_equal(10,10.0))    // are_equal(<int,double>(10,10.0)) is equivalent
        cout<<"x and y are equal"<<endl;
    else
        cout<<"x and y aren't equal"<<endl;

    return 0;    
        
}

