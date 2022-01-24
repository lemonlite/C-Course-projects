#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;

int main()
{
    // int a {0};     //Expression statements a declaration, variable and value (initialization) ending with semi-colon ";"
    // a = 2;         // "=" is an assignment operand hence a is expressed as 2.
    // a++;

    // cout << a << "this is the result blah blah" << "\n";     // full Statement

//// While and for statments

        // for ( int num = 0; num < 5; num++)      //NOTE here is an example of a for loop we declare the variable "num" as a int and initialized at "0" and if num is less than "5" we increment it till it reahes 5 loops
        // {                                       // and if num is less than "5" we increment it till it reahes 5 loops

        //     cout <<"this is a for loop that loops 5 times. " << "\n"; //this block contains the arguments,statements u can apply here we put a simple cout.
        // }

            // int num = 0;            //NOTE this is a simple while loop notice the difference in "for" for includes everything in one argument inside  a "()"
            // while ( num < 5)        // notice we have to declare num as an int then apply while (argument) then a block and its content output.
            // {
            //     cout <<"this is a 'while' loop\n";
            //     num++;
            // }



    cout << endl;
    return 0;
}