#include "std_lib_facilities.h"


void CleanerCalculator()
{
    cout <<"Please enter expression +.-,*,/\n";
    cout <<" ad an x to end expression (ex.1+2+1): ";
    int lval = 0;
    int rval;
    cin >> lval;
    if (!cin) error("no first operand");
    for (char op; cin >>op; )
    {
        if (op=='x') cin >> rval;
        if (!cin) error("no second operand" ); 
        switch(op)
        {
            case '+':
                lval += rval;   //add assignment operator
                break;
            case '-':
            lval -= rval;       //subtract assignment operator
                break;
            case '*':
            lval *= rval;
                break;
            case '/':
            lval /= rval;
                break;
            default:
                cout <<"Result: " << lval <<"\n";
                
        }
    }

    error("bad expression");
}




int main()
{
    CleanerCalculator();

    
    return 0;
}