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
    cout <<"Enter the name of the person you want to write to:  ";
    string first_name;
    cin >> first_name;
    cout <<"Dear, " << first_name <<" how you doing fucker im doing c++ and i am confused as fuck \n" ;
    cout <<"enter another name pls: ";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name <<" lately?\n";
    cout <<"Please enter friend gender(m or f): ";
    char g = ' ';       //g is gender initialized as a space.
    cin >> g;
    {
        if (g == 'm' ){   //notice the single quotation because "g" is declared as a char
        cout <<"If you see " << friend_name <<" Please ask him to call me.\n";
        }
        else if (g == 'f')
        cout <<"If you see " << friend_name <<" Please ask her to call me.\n"; 
        else;
        cout <<" invalid try again. ";
    }

    cout <<"Enter age of friend: ";
    int age {0};
    cin >> age;
    cout <<"I hear you just had a brithday and you are " << age <<" years old. \n";
    {
    if (age <= 0 )
    cout <<" bullshit enter valid age.\n";
    else if (age >= 100 )
    cout <<" bullshit enter valid age.";
    else if ( age == 12)
    cout <<" Next year you willl be " << age+1 << "\n";  
    else if (age == 17)
    cout <<" Next year you will be able to vote\n";
    else if (age >=70)
    cout <<" Hope you are enjoying retiremen\n";    
    }





    cout << endl;
    return 0;
}