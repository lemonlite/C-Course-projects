#include <iostream>

using namespace std;



void exercise1()
{
    // int num {};
    // cout <<" Enter and integer: ";
    // cin >> num;

    // if (num % 2 == 0)
    //     cout << num <<" is even number\n";
    
    // else 
    //     cout << num <<" is a odd number\n";
    //     cout << num <<" is " << ((num %2 ==0)? "even" : "odd" ) <<"\n";



    int num1 {}, num2 {};       //this is a condition al operator ? its like a for condition its all in one parenthesis

    cout <<" Enter 2 integers spereated by space: ";
    cin >> num1 >> num2;

    if (num1 != num2)
    {
        cout <<" Largest: " << ((num1 > num2) ? num1 : num2) <<"\n";
        cout <<" smallest: " << ((num1 < num2 ) ? num1 : num2 ) <<"\n";

    }
    else
    {
         cout <<" The numbers are the same\n";
    }




    cout << endl;
}








int main()
{
    exercise1();


    
}