#include <iostream>

//types of comments

//this is a comment a single line comment

/*  this is a multiple 
line comment
the pre-processor strips the comments before
the compiler sees it hence it greyed out   */


//using a modified version of djistra algorithm to improve space efficiency 

int main() 
{
    int favorite_number;   //this is a identifyer not a keyword
    
    std::cout << "Enter your favorit number between 1 - 100:" ;
    
    std::cin >> favorite_number;
    
    std::cout << "thats my favorite number too" << std::endl;
    std::cout << "no really, " << favorite_number << " is my favorite number" << std::endl;
    
    return 0; 
}