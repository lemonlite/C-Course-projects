#include <iostream>

/*this classic namespace directive code the one std::cout means standard library cout
 it is used so c++ wont be confused wich one to use in its big library this is not recommended
  * for big programs */


int main() 
{
    int number;
    cout << "Enter desired number 1-100: ";
    
    cin >> number;
    
    cout << " good choice" << endl; 
    
    return 0;
}