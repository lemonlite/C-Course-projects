//Global and local variables
// straight and practical

#include <iostream>

using namespace std;

    int age {20};   //Outside of the statement  his is A Global variable

int main()
{                       //whatever is in inside the curly bracket statement are    local variables
    
    int age {21} ;    // when the compiler sees the declared variable which in this case is age it will first look locally then globally
    
    cout << age << endl;
    
    return 0;
}