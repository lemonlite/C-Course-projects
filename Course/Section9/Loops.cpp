#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/*looping or iteration aka repetition c++ has 4 loop constructs for loop - iterate a specific number of times
  Range-based for loop - one iteration for each element in arange or collection while loop - iterate while a condition
  remains true stop when the condition becomes false check the condition at the beginning of every iteration
  do-while loop - iterate whilea condition remains true and stops when it becomes false check the condition at the
  end of every iteration */



void exercise2()
{ 
 //// While loop

    int i {1};

    while (i <=5)
    {
      cout <<" i \n";
      ++i; 
    }


}


void exercise1()
{
  ///for (initialization; condition; increment) whitespace statement; this is a for loop

    // for ( int num = 1; num <= 5; ++num) //this is the for loop syntax NOTE it will increment 1 until its less than or equal to 5
    //     {
    //         cout << num <<"\n";
    //     }

    // for (int i {10}; i > 0; --i)        //variable i is initialized insted of assigned
    //     {
    //         cout << i;
    //         cout <<" done \n";
    //     }

    // for (int i {10}; i <= 100; i+=10)
    //     if (i % 15 == 0)
    //     cout << i << "\n";

    // for (int i = 1, j = 6; i <=5; ++i, ++j)  //multiple declaration
    //     cout << i <<" * " << j <<" = " << (i*j) << "\n";

    // for (int i = 1; i <= 100; ++i )     //rows up to 100
    // {
    //     cout << i;
    //     if (i % 10 == 0 )
    //         cout <<"\n";
    //     else
    //         cout <<" ";
    // }

    // vector <int> nums {10,20,30,40,50};
    // for (unsigned  i {0}; i < nums.size(); ++i)
    // cout << i << "\n";



 //// ranged-based for loop
    
    // int Scores [] {10,20,30};

    // for (int score : Scores)       // inside the parentheses variable score will extract the elements from outside the () from variable Scores
    //     cout << score <<" \n";  //print out the stored elements.

    

    //  int Scores [] {10,20,30};

    // for (auto score : Scores)       //modern c++ the auto keyword will identify the ranged variable what data type it is which is an integer "int"
    //     cout << score <<" \n";

    // vector <double> temperatures {87.9, 77.9, 80.0, 72.5};
    // float average_temp = 0;
    // float total = 0;

    // for  (auto temp: temperatures)
    //     total += temp;
    
    // if (temperatures.size() !=0 )
    //     average_temp = total / temperatures.size();

    //     cout << fixed << setprecision(1);
    //     cout <<" average temp is " << average_temp;

    // for (auto val: {1,2,3,4,5})
    //     cout << val << "\n";


 ///C style string
    // for (auto character: "testing")
    //     cout << character;



}













int main()
{
   exercise2();

    

    return 0;
}