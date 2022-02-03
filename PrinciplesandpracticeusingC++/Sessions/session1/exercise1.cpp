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
    cout <<"Enter two names: ";
    string first;
    string second;
    cin >> first >> second;
    if (first == second) cout <<"thats's the same name twice \n";           //() whats inside the parenthesis is called a parameter.
    if (first < second)
        cout << first <<"is alphabetically before " << second << "\n";
    if (first > second)
        cout << first <<" is alphabetically after" << second << "\n";

    


    cout << endl;
    return 0;
}


