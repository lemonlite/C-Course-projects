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
 ////A function
    //     cout <<" this is a function";
    //     return;


 ////  How string gets stored in an array
    string Sarray = "creme";    //here the variable sarray is declared as string and assigned "creme" as the string of word now each letter is stored in memory locatio starting from index [0] as always
                                //point your mouse on "creme" and its current assigne index is [6] and also declared as const char its because string is just a sries of char, letters and per char is 1 byte in memory which is 8 bits
    cout << Sarray[2] <<"\n";   //here we extrated the "e" which is stored n index memory [2].

 
}


int main()
{
    Sample1();
    

    
    return 0;
}