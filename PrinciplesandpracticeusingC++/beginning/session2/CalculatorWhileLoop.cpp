#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it
#include <vector>

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;
using std::vector;


void calculator()
{
    ///Write a  simple calculator four basic math operations "+,*,-,/"

        cout <<" please enter the numbers u want to add,subtract,multiply,divide : ";
        double num1 = 0;
        double num2 = 0;
        char op = ' ';
        cin >> num1 >> op >> num2;
        {
        if (op == '+')
        cout <<" the sum of "<< num1 <<" + "<< num2 <<" is "<< num1 + num2 <<"\n";
        else if (op == '*')
        cout <<" the sum of "<< num1 <<" * "<< num2 <<" is "<< num1 * num2 <<"\n";
        else if (op == '/')
        cout <<" the sum of "<< num1 <<" / "<< num2 <<" is "<< num1 / num2 <<"\n";
        else if (op == '-')
         cout <<" the sum of "<< num1 <<" - "<< num2 <<" is "<< num1 - num2 <<"\n";
         else 
         cout <<" invalid operation please try again. \n";
        
        }


}



int main()
{ 
    while (true)        //while loop is hardcoded to true this will loop until user is satisfied with using the simple calculator; ctrl+c to close 
    {

        calculator();
    }

    cout << endl;
    return 0;
}