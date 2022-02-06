#include <iostream>

using std::cout;
using std::cin;
using std::endl;



void excersise1()
{
    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade)
    {
        case 'a':
        case 'A':
        cout <<" you need a 90 or above \n";
        break;
        case 'b':
        case 'B':
        cout <<" You need 80-89 \n";
        case 'c':
        case 'C':
        cout <<" You need 70-79 for an average grade \n";
        case 'd':
        case 'D':
        break;
        case 'f':
        case 'F':
        {                   //create another block if your declaring variables within a switch block
            char confirm {};
            cout <<" Are you sure y/n?: ";
            cin >> confirm;
            if(confirm == 'y' || confirm == 'Y')
            cout <<" you need 60-69\n";
            else if (confirm == 'n' || confirm =='N')
            cout <<" study \n";
            else
            cout << "invalid input\n";
            break;
        }
        cout <<" failed grade\n";
        break;
        default:
        cout <<" invalid input try again.\n";
    }

}

void excercise2()
{
    enum Direction      //enum is for const variable "Direction"
    {
        left,right,up,down //this are the variable constants declared within the enum block

    };

    Direction heading {left};

    switch (heading)
    {
        case left:
         cout <<" going left\n";
         break;
         case right:
         cout <<" going right\n ";
         break;
         default:
         cout << "ok\n";
    }

}





int main()
{
    excercise2();


return 0;
}