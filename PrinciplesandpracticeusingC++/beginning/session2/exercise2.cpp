#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;

//!!NOTE!! UNCOMMENT THE EXERCISES TO SEE RESULTS. idk

////HERE IS AN EXAMPLE of if if-else and else program flow alternatives unitl it ends this is the most basic form of selection based comparison of value 

int main()
{
    // const double cm_per_inch = 2.54;
    // double length = 1;                                                           

    // char unit =' '; 
    // cout << "Please enter length followed by a unit (c or i):";
    // cin >> length >> unit ;
    // {
    // if (unit =='i')                                                    //NOTE if or if-else are always  followed by an expression wiht or without parenthessis but () is a must and a standard for readability
    //     cout << length <<" in ==" << cm_per_inch * length << "cm\n";
    // else if (unit == 'c')
    //     cout << length <<" cm ==" << length / cm_per_inch <<"inch\n"; // always check for bad input  example if a user didnt put neither i or c the program will just read through else and use centimeter to calculate    
    // else                                                            //NOTICE that this is where if-else flow ends in an else the followed by the last statement        
    //     cout <<" unit is invalid try again " << unit << "\n";       //HERE it is mitigated to restrict the user to just use the two assigned char i and c.
    // }                                                               //NOTE this is where this alternatives end noticed the curly endig bracket. this is good practice for ur conditional structure.
                                                                         




//// CURRENCY CONVERSION EXAMPLE

    /*  in this example we will convert 1 dollar into 3 currencies using common conditional if if-else else

        USD = $1
        1 Yen = 114.08
        1 CAD = 1.25
        1 RUBLES = 76.56
                        */
    
//     cout <<" Welcome to currency converter v1.0";
//     cout <<"\n========================================\n";
//     cout <<" we convert Yen,CAD,RUBL,USD ";
//     cout <<"\n========================================\n";

//     const int dollars = 1;
//     const double yen = 114.08;
//     const double cad = 1.25;
//     const double rubl = 76.56;
//     char c =' ';                    //NOTE u cannot add more than 1 letter on a char type i guess? i tried strings but i get errors?
    
//     cout <<" Please enter the number of usd followed by (yen,cad,ru): $ ";            //NOTE it dont matter if user type "yen or rubles" as long as the program hits the right first letter "y,c,r" itll produce whats on the conditional statements.
//     cin >> dollars >> c;
//     {
//     if ( c == 'y')                                                       //STARTS with if ends in else as you notice in the end.                                                          
//         cout << dollars * yen <<" yen.";
//     else if (c == 'c')
//         cout << dollars * cad <<" canadian dollars.";
//     else if (c == 'r')
//         cout << dollars * rubl <<" russian ruble. ";
//     else
//         cout <<" invalid currency please follow instructions. ";
//    }
    
//// switch statement c++ provides special statement for the most common selection problems called switch usually used in int,char or enumeration NOT on a string and used for large projects with a lot of const"


    // const double cm_per_inch = 2.54;
    // double length = 1;                                                           

    // char unit =' '; 
    // cout << "Please enter length followed by a unit (c or i):";
    // cin >> length >> unit ;
    // switch (unit)                                                           //NOTE the value on the break; must be a constant
    // {
    // case 'i':                                                            //NOTE the value showed inside the parenthesis is labeled as "case" in a switch statement 
    //     cout << length <<" in == " << cm_per_inch * length <<" cm\n";       //NOTICE the difference from the beginning problem as switch statement has been applied
    //     break;                                                           //NOTE like if else a "case;" is terminated by a "break;"
    // case 'c':
    //     cout << length <<" cm == " << length / cm_per_inch <<" in\n";          //SO case; cout break; is the structure maybe?
    //     break;
    // default:                                                         //NOTE just like else "default" is the label if it doesnt match the input/alternatives. and will terminate it then break; it is optional but good practice
    //     cout <<" invalid unit try again. " << unit << "\n";         //its much less convoluted but fuck man i'll just use if and else
    //     break;
                    
    //}                                                        



///// for-statement is for looping same as while-statements also called itereation "repetition"

    // {                  //Note whats inside this curly bracket is a "block" C++ program scopes are global,local and block variables.

    //     for (int i = 0; i<100; i+2)  //NOTE this means i is declared int, it will execute the program until it hits 100 loops
    //     cout << i <<'\t' << (i) << "\n";    // \t means tab and "(i)" provides the variable "i" a square root. sqrt()
    // }                                        //this shit loops forever

///// Functions - a named sequence of statements/ A function can return result "return value"


    // {
    //     cout << (2) << "\n";   // () this is a square 2*2 = 4 it will print 4
    //     cout << (10);       // print 100

    // }

    
    









    cout << endl;
    return 0;
}
