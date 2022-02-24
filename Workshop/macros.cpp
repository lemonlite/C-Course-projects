#include <iostream>
#include <cstdlib>
#define pi 3.141         //macros are known as preprocessor directive means, something picked up by the preprocessor "#" while compiling here in example user made pi and will replace anything that is pi
#define Multiply(a,b) (a * b)

int main()
{
    
    

    std::cout << std::endl; // here macro is called hence will output 3.141
    return 0;
}