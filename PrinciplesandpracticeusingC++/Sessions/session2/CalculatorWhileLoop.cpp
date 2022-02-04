#include  "std_lib_facilities.h"




void calculator()
{
    ///Write a  simple calculator four basic math operations "+,*,-,/"

        cout <<" please enter the numbers u want to add,subtract,multiply,divide : ";
        double num1 = 0;
        double num2 = 0;
        char op = ' ';
        cin >> num1 >> op >> num2;
        {
        if (op == '+')
        cout <<" the sum of "<< num1 <<" + "<< num2 <<" is "<< num1 + num2 <<"\n";
        else if (op == '*')
        cout <<" the sum of "<< num1 <<" * "<< num2 <<" is "<< num1 * num2 <<"\n";
        else if (op == '/')
        cout <<" the sum of "<< num1 <<" / "<< num2 <<" is "<< num1 / num2 <<"\n";
        else if (op == '-')
         cout <<" the sum of "<< num1 <<" - "<< num2 <<" is "<< num1 - num2 <<"\n";
         else 
         cout <<" invalid operation please try again. \n";
        
        }


}



int main()
{ 
    while (true)        //while loop is hardcoded to true this will loop until user is satisfied with using the simple calculator; ctrl+c to close 
    {

        calculator();
    }

    cout << endl;
    return 0;
}