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

    string first_name ;  
    cout << "Please enter your first name: ";
    cin >> first_name;

    double age {};
    const int yr_in_month = 12;
    cout <<" Enter age: ";
    cin >> age;
    cout <<"Hello i am " << first_name <<" (age " << age * yr_in_month <<")" <<" month old ";



    cout << endl;
    return 0;
}