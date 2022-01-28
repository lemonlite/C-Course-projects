#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;



using std::cout;
using std::cin;
using std::endl;


void exercise1()        //this function is where we test random things we come up with
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
            cout <<" Turning on the lights......\n";
            else if (' ')
            {
                cout <<" Try again later";
            }
        

}


int main()  // every c++ have at least 1 main fucntion this is where the codes gets read and executed.
{
   



    return 0;
}
