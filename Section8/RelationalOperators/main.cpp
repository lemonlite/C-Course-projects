//expr1 op expr2  RELATIONAL OPERATORS
/* >    greater than
   >=   greater than or equal to
   <    less than
   <=   less than or equal to
   <=>  three-way comparison (C++20)
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

int main()
{
    int num1{}, num2{};
    
    cout << boolalpha;
//    cout <<"Enter 2 integers separated by a space: ";
//    cin >> num1 >> num2;  //simple example is num1 10 > greater than num2? and so on 
    
//    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
//    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
//    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
//    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;


     const int lower {10};
     const int upper {20};
     
     cout <<"Enter an integer that is greater than " << lower << ": ";
     cin >> num1;
     cout << num1 <<" > " << lower <<" is " << (num1 > upper) << endl;
     
     cout << "Enter an integer that is less than or equal to " << upper << ":";
     cin >> num1;
     cout << num1 <<" <= " << upper <<" is " <<(num1 <= upper) << endl;
    
    
    cout << endl;
    return 0;
}