#include <iostream>

using std::cout;
using std::cin;

void testing()      // One way to encapsulate stuff within the program
{
    int num1 = 0;
    int num2 = 0;
    cout <<"Enter 2 digits with space: ";
    cin >> num1 >> num2;
    cout <<" total with remainder: " << num1 % num2 << "\n";   
}

int main()
{
    while (true)        //this will not quit the program itll loop until ur done ctr + c to close 
    {
        testing();
    }

    
    return 0;
}