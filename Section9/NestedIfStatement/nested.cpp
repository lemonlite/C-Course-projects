//NESTED if statement is nested within another it allows testing of multiple conditions "else" belongs to the closest "if"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
//BASIC EXAMPLE

    // int score {};
    // cout <<" Please enter student score: ";
    // cin >> score;
    
    // {                                    //notice this one whole syntax is on one block for "score" so we dont get confused
    //     if (score >= 90)
    //     if (score >= 95)
    //     cout << "Student score is: A+";
    //     else
    //     cout << "Student score is: A";
    //     else
    //     cout <<"Sorry, No A " << endl;
 //   }

// EXAMPLE 2 GRADES

    // int score {};
    // cout <<"Enter your score on the exam (0-100): ";
    // cin >> score;
    // char letter_grade {};               //char declared 

    // if (score >= 0 && score <= 100) {
    //     if (score > 90)     
    //       letter_grade = 'A';           //NOTICE - that the semi colon is applied in the and of the if and if-else statement
    //     else if (score > 80)            // it is because that is the output for that specific condition it is the solution. 
    //       letter_grade = 'B';
    //     else if (score > 70)
    //       letter_grade = 'C';
    //     else if (score > 60)
    //       letter_grade = 'D';
    //     else 
    //        letter_grade ='F';

    //        cout <<" Your grade is: " << letter_grade << endl; 
    // }

    // else
    //  {
    //     cout <<"Sorry " << score << " is not in range " << endl;
    // }
    // {
    // if (letter_grade == 'F')
    // cout <<" u failed bitch u gotta repeat the class" << endl;
    // else 
    // cout <<" u passed.";
    // }
     
    
        
    
     cout << endl;
     return 0;
}