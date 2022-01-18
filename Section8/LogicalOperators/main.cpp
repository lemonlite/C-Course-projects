//Logical operators works in boolean expression and evaluate themselves as such
//Logical operators are used to build conditions and complex ones 

/*  not          //this is a negation    //C++ has 3 logical operators and its symbols this are as below
     !
=================================================
    and         // logical "and" only true when both expersions are true anything else is false                                
     &&
=================================================
    or
    ||          // logical "or"  the only time its false is if both expresions are false. if any expressions are true the compiler already knows its true
==================================================
*/

#include <iostream> 

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::noboolalpha;


int main()
{
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    
    // Determine if an entered integer is between two other integers
    // assume lower < upper
    cout <<"Enter an integer - the bounds are " << lower <<" and " << upper <<": ";
    cin >> num;
    
    bool within_bounds {false};
    
    within_bounds = (num > lower && num < upper);
    cout << num <<" is between " << lower <<" and " << upper <<": " << within_bounds << endl;
    
    
    
    //Detremine if an entered integer is outside two other integers
    //assume lower < upper
//    cout <<"\nEnter an integer - the bounds are " <<lower <<" and " <<upper <<":";
//    cin >> num;
    
    
    cout << endl;
    return 0;
}