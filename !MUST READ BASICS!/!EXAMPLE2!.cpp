#include <iostream>
#include <string>      
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;
using std::vector;


                                         //NOTE IT IS advisable to set your function to do only one thing it makes it easier and more readable and easier to name.

void exercise5()        //Iteration statement: it is when we want to repeat something several times also reffered as loops and conditional compounds
{

    // cout <<" please enter age and height: ";        //example of basic && || examples in condition logic
    // int age = 0;
    // int height = 6;
    // cin >> age >> height;

    // if (age == 18 && height == 5 )          //here is the AND logic each statement must be true to be approved it means age needs to be equal to 18 and height to 6 exactly
    //   // ( age == 18 || height == 5)        // OR logic in this 2 statements only 1 is needed to be TRUE to be approved
    //     {
    //         cout <<"\n approved";
    //     }
    // else if ( age < 18 && height < 5)           //else if condition is within the if compound else-if can be use as many times as we want as long as there are conditions that are set.
    //     {
    //    cout <<" you are young and short.";
    //     }
    // //if ();                                   //for more complex logic u can have a nested "if()"
    // else                                      // the "else" ends the logic compound or block if none of the statements OR,AND  or any other conditions set by a programmer are met. it can also have an argument else(argument);
    // cout <<" no valid input try again.";



 /// SWITCH statements  

        // cout <<" Enter a day: ";
        // int day = 0;
        // cin >> day;
        // switch (day)
        //     {
        //         case 1:
        //         cout <<" monday\n";          //if there is a match the associated block of code is executed
        //         break;                       // break will stop the program because it had found the condition
        //         case 2:
        //         cout <<" tuesday\n";
        //         case 3:
        //         cout <<" wednesday\n";
        //         break;                       // breaks at the end of all conditions are good practice because we may add in the future.
        //         default:
        //         cout <<" no valid input.";   //default is the else equivalent it will terminate if no conditions are met.    
        //     }   
            




 ///ITERATION "for()"   this loop is when we know how many times we want to loop like days in a week etc.. it is better use than a while loop because it can be in one statement for(argument);





        

}

void exercise4()        //Just like integers in programming heavy use of letters are essential here is a example of a string and concatenation strings are just like the integer flipped words
{                   // strings holds more than 1 letter followed by a double quotation not like char that can only hold a letter which is a byte.                

    // string word1 =" day";
    // string word2 =" night";
    // string full_concatenatoin = word1 + word2;      //Concantation is where you add 2 strings to make a new string. just like the arithmetic "+" operator instead of numbers its strings of letters
    // cout << full_concatenatoin <<"\n";  //output will be "day night"





}

void exercise3()        //example of basic fixed array 
{
    // int num1 [5];       // declared a array variable named "num1" and reserved, indexed it with "[5]" slots of memory for an integer NOTE u can't change this dynamically if u check the limit it will pull a random number in memory
    // num1 [2] = 4;       //num1 memory location [2] is assigned a number 4 NOTE memory location is "3" because whole numbers starts at 0,1,'2',3 so we move forward from 0 to 1,2,3 thats "4" steps
    // num1 [3] = 5;       //reserved slot [3] but actually 4
    // num1 [7] = 6;       //NOTE this "7" is out of the assigned memory hence it will give us an error.
    // int results = num1[2] + num1[3]; //added the 2 assigned slots to result. NOTE THAT IT IS THE SAME VARIABLE 

    // cout <<" This fixed array total is, " << results <<"\n"; // 4+5 is 9




//// basic extracting data using fixed array 2 persons set person1,2 fname,lname,address

    // string person1 [2];
    // person1 [0] =" First name: jack\n";
    // person1 [1] =" Last name: smith\n";
    // person1 [2] =" Address: 12345 helms st. los angeles ca 8422-87634\n";
    // string person2 [2];
    // person2 [0] =" First name: anna\n";
    // person2 [1] =" Last name: smith\n";
    // person2 [2] =" Address: 4453 grand ave. los angelese ca 9354-79952\n";

    //  cout << person1;

}

void exercise1()        //this function is where we test random things we come up with also the () is  the scope of this function.
{
    int example = (5 + 5) * 2;        //in programming PEMDAS wors too
    int result = example;
    cout << result;

    
}

void excercise2()       // we will trun on the lights if the current time is after sunset base if else-if
{       
        char signal = ' ';
        char sunset = ' ';            
        cout <<" Is the phone signal within range?: ";
        cin >> signal;
        if (signal == 'y')
            cout <<" Is it after sunset:?";
        
        else if (signal == 'n')
        {
            cout <<" Try again later.\n";
        }
        cin >> sunset;                      //selection this will initiate if the previous condition is met
            if (sunset == 'y')
        {
            cout <<" Turning on the lights......\n";
        }
        else
        {
            cout <<" ERROR try again.";
        }

          
}



int main()  // every c++ have at least 1 main fucntion this is where the codes gets read and executed.
{
    
       exercise5();
    
    


    return 0;
}
