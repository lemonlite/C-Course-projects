#include <iostream>

    using std::cout;
    using std::cin;
    using std::endl;

int main()
{
    const int num1 {10{   //here num1 declared as an constants integer it shouldnt be allowed because once a const variable has been declared it cant be changed.
//    int num1 {10};       //num1 and num2 are initialized and declared as integers 
    int num2 {20};      //NOTE "lhs = rhs;" is the syntax for assigning an operator lhs is left hand sign equals to right  hand side ended by semicolon since its a statement 
    
//    num1 = 100;        // "=" is a assignment operator its initialized at 10 but now its assigned to 100 and now its storing is on num1.
                         //"r value is the content of a variable which here is num1 which is 10 the "L" value is the location of that variable.
//    num1 = num2;        //now were using the r value of num2 which is 20 and were assignin it to num1
//    num1 = num2 = 1000; //we can chain them together. this will result in num2and1 being 1000 it reads it right to left.   
//    num1 = "Frank";   // the C++ compiler is smart it will still try to read the assignmen form right to left but it will give you an error a conversion error
                        //because it does not make sense num1 is declared as an integer but assigned a string.
                        //NOTE not like any programming languages C++ compiler is a STATIC TYPE meaning it type checks ur code on run time to check errors
                        //NOTE u can write like a hidden code on frank to make it like an intger or something advanced shit
    
                        
    cout <<"num1 is " << num1 << endl;
    cout <<"num2 is " << num2 << endl;
    cout << endl;
    
    
    
    return 0;
    
}