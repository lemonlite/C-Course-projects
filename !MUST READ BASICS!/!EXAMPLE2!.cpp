#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;


                    //NOTE IT IS advisable to set your function to do only one thing it makes it easier and more readable and easier to name.
using std::cout;
using std::cin;
using std::endl;



void exercise1()        //this function is where we test random things we come up with also the () is  the scope of this function.
{
    int example = (5 + 5) * 2;        //in programming PEMDAS wors too
    int result = example;
    cout << result;

    
}

void excercise2()   // we will trun on the lights if the current time is after sunset base if else-if
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
        cin >> sunset;
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

    excercise2();


    return 0;
}
