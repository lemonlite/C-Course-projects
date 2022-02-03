#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;

// int main ()   ////main is a prameter !!ATTENTION!! do remember in C++ there could only be ONE main function in a file source code etc..
// {

// ///// Just testing sqrt() finding the quare root of random number

//     // int a = 6;   //NOTE variable "a" is declared as "int" then assign "=" the number of 6
//     // {
//     //     cout << sqrt(a) ; //NOTE here we calculate variable "a" which is value "6" is assigned as a result the square root of 6 is 2.44949
//     // }






//     cout << endl;
//     return 0;
// }


void print_square(int v)    ////NOTICE that we wrote a new parameter "void"  means nothing as the return type it ignores it and the compiler jumps to the next paremeter
{
    cout << v << '\t' << v*v << "\n";  //NOTE (int v) within this parentheses are paremeter that makes up a function.
}



int main()  //// here another paremeter has been set. below are the local variables and functions
{
    for (int i = 0; i<100; ++i) print_square(i); //or the simpler (i) square instead of print_square(variable)
                                                //note as you can see all the information to call a for function is all in a one line.

  return 0;  
}