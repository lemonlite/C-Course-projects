#include <iostream>
#include "ExampleHeaderFile.h"              //here we "include" our custom header file which calls codes writen from that file .cpp and .h file needs to exist in the same folder to be able to
                                            //communicate to each other

using std::cout;
using std::cin;
using std::endl;
using std::string;


void sample2()
{
   



}

void Addition()
{

    int num1 = 0;
    int num2 = 0;
    int total = num1 + num2;
    cin >> num1 >> num2;
    cout <<"\n" << num1 <<" + " << num2 <<" is: " << total;
}

void Sample1()
{
 ////A function
    //     cout <<" this is a function";
    //     return;


 ///errors and debugger

    //     int age = 23;               //here it will run fin because proper syntax        //red dot on the line is called breakpoint it will run the program at this point

    //     if (age > 12 && age < 20)       //logical errors instead of &&  || is used so 17 is greater than 12 which is true and less than 20 use debugger for logical erros
    //         cout << "you are teenager";
    //     else
    //     {
    //         cout <<" you are not teenager";
    //     }


    //     //cout <<"cakes    //syntax error or grammar every programming language has different syntaxes here in C++ we are missing an double qute and semi colon in this statement.

    //  /// Arithmetic error

    //     int a = 1;
    //     int b = 3.2;            // this will not produce accurate result because b is declared as an integer it only takes the whole number not the decimal .2 
    //     int result = a + b;        // either u use float or double for more accurate results double are recommended
    //     cout << result;  


 /* Exception errors caused by a condition in the software where the program has reached a state where it can no longer run this will compile and run but will crash unexpectadly
 
   there is many reason for expetional errors but you can mitigate the program crash by applying exception handling which is pretty complex in C++ */




}


int main()
{
    
    

    
    return 0;
}