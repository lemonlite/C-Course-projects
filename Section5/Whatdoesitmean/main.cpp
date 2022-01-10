#include <iostream>
/* in this project a simple explanation of what this punctioations operands,symbols mean and
 and it explains what make a syntax in c++ */
 
 /* what is a syntax? - all of this elements symbols etcc... put together in a program
  this are what makes a syntax of c++ language it is a structure the meaning u want the compiler to understand
   */


int main() //int and return this are c++ keywords
{
    int favorite_number;   //this is a identifyer not a keyword
    
    std::cout << "Enter your favorit number between 1 - 100:" ;   /* << chevrons are called stream operator meaning inserting
whatever on the right hand side of it this is a output stream */ 
    
    std::cin >> favorite_number;  // >> greater than chevron is a string extractor it takes from the console and store tha variable 
    
    std::cout << "thats my favorite number too" << std::endl; //keyword
    std::cout << "no really, " << favorite_number << " is my favorite number" << std::endl;  //:: this is called colon scope resolution operator
    
    return 0; 
}


// {} curly brackets whatever inside of it is the complete statement a complete syntax for the c++ langauge.