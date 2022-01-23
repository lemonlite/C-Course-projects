//if the expression is true then execute statment 1 if false then statment 2
/* syntax example "if (expression)
                    statment1;
                  else
                    statment2; "
 */ //THIS IS THE SIMPLIEST SYNTAX   

#include <iostream>

using std::cout;
using std::cin;
using std::endl; 

int main()                  //THIS IS A SIMPLE TEST SCORE GRADING EXAMPLE
{
    //  int test_score {0};

    // cout <<"Please Enter the student score: ";
    // cin >> test_score;
    // if (test_score >= 90){
    // cout <<"==================================\n";
    // cout << " Student Grade is: A" << endl;
    // }
    // else if (test_score >= 80){
    //     cout << "==============================\n";
    //     cout << "Student Grade is: B";
    // }
    // else if (test_score >=70){
    //     cout << "==============================\n";
    //     cout << "Student Grade is: C";
    // }
    // else if (test_score >=60){
    //     cout << "==============================\n";
    //     cout << "Student Grade is: D"; 
    // }   
    // else {
    //     cout << "==============================\n";     //all others must be f
    //     cout << "Student Grade is: F";
    // }

//COMPARING ENTERED NUMBER VIA ELSE STATEMENT

    int num {};
    const int target{10};           //here target number 10 is chosen u can enter whatever

    cout <<"Enter a number and I'll compare it to " << target <<": ";
    cin >> num;

    if (num >= target)
    {
        cout <<"\n==============================================" << endl;
        cout << num <<" is greater than or equal to " << target << endl;
        int diff {num - target };
        cout << num <<" is " << diff <<" greater than " << target << endl;
    } 
    else 
    {
        cout <<"\n===============================================" << endl;
        cout << num <<" is less than " << target << endl;
        int diff { target - num };
        cout << num <<" is " << diff <<" less than " << target << endl;
 
    }


    cout << endl;
    return 0;
}