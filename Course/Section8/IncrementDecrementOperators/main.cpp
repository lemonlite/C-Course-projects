/*  Increment operator ++  
    Decrement operator --   basically means increment and decrement something by 1 it is made up of 2plus and subtraction operators   

    Increment or decrements its operand by 1
    Can be used with integers floating point types and pointers
    
    Prefix      ++num
    Postfix     num++
    
    !Don't overuse this operator!
    ALERT!! never use it twice for the same variable in the same statement. it will result in junk or undefined data
    */
    
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int counter {10};
    int result {0};
    

//  Example 1 - simple increment
//  cout << "Counter: " << counter << endl;
//
//  counter = counter + 1;
//  cout <<"Counter: " << counter << endl; //Counter will now be 11
//
//  counter++;
//  cout <<"Counter: " << counter << endl; //and now increment of 1 Counter will now be 12
//
//  ++counter;
//  cout <<"Counter: " << counter << endl; //pre fix does the same thing now it will result in 13


//  Example 2 - preincrement
//  counter = 10;
//  result = 0;
//
//  cout <<"Counter: " << counter << endl;
//
//  result = ++counter;  //Note the pre increment it will be 11 and result 11 because itll store it on result
//  cout <<"Counter: " << counter << endl; //11
//  cout <<"Result: " << result << endl;  //11


//  Example 3 post-increment
//  counter = 10;
//  result = 0;
//
//  cout <<"Counter: " << counter << endl;  //10
//
//  result = counter++;     //Note the post increment
//  cout <<"Counter: " << counter << endl; //11
//  cout <<"Result: " << result << endl;  //10  it stores counter to result since its post increment ading 1 after counter and counter will result in 11


//  Example 4  
//  counter = 10;
//  result = 0;
//
//  cout <<"Counter: " << counter << endl; //10
//    
//  result = ++counter + 10; //Note the pre increment just use formula result = counter + 10 remove the increment or decrement
//
//  cout <<"Counter: " << counter << endl; //11
//  cout <<"Result: " << result << endl;  //21 


//  Example 5
  counter = 10; 
  result = 0;

  cout <<"Counter: " << counter << endl; 
    
  result = counter++ + 10; //Note the pre increment result = counter + 10 counter = counter + 1

  cout <<"Counter: " << counter << endl; //20
  cout <<"Result: " << result << endl; //11   
    
        
    cout <<  endl; 
    return 0;
}