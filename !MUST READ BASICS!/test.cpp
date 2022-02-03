#include <iostream>
#include "ExampleHeaderFile.h"              //here we "include" our custom header file which calls codes writen from that file .cpp and .h file needs to exist in the same folder to be able to
                                            //communicate to each other

using std::cout;
using std::cin;
using std::endl;
using std::string;


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

    cout <<" this is a function";
    return;
}


int main()
{

    cout <<" Are you adding numbers? (y / n): ";
    char decision = ' ';
    cin >> decision;
    if ( decision == 'y')                   
    {
        Addition();                //this calls the function that only does addition ONLY
    }
    else
    {
        cout <<" thank you for using the addtion system.";
    }


    
    return 0;
}