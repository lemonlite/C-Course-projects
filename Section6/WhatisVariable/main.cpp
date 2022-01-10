#include <iostream>
//variables are crucial in programming languages
//variables MUST be declared before the are  used

using namespace std;

int main()
{
    string  age;  // the variable is 'age' and the way it will be used is as integer (int) thus declaring the variable to be an integer not a string
    //you can change it to string instead of a real number intger u can type it as characters "letters" 
    
    cout << " Please enter your age: ";
    
    cin >> age;
    
    cout << "You are " << age << " years old " << endl;
    
    return 0;
}
 /* Variables allow programmers to use meaningful names and not memory addresses Variables have types like integers,realnumber
a string,person account etcc... and the values the contents inside it like 10,6,frank,names etcc..*/

