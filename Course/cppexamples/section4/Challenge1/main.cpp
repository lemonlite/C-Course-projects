#include <iostream>

int main() 
{
    int favorite_number;
    int really;
    std::cout << "Enter your favorite number between 1-100:"; 
    std::cin >> favorite_number; 
    std::cout << "thats my favorite number too";
    std:: cout << "for real??";
    std::cin >> really;
    std::cout << "no really," << favorite_number << " is my favorite number" << std::endl;
    
    return 0;
}