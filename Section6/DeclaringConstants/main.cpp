//Declaring constants  

/*
    Frank's carpet cleaning services
    Charges $32.50 per room
    Sales tax rate is 6%
    Estimates are valid for 32.50 days
    
    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as: 
    
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $32.50
Cost: $60
Tax: $3.6
===================================
Total estimate: $63.6
This estimate is valid for 32.50 days

Pseudo code: 
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
      
     Display cost: (number of rooms * price per room)
     Display tax: number of rooms * price per room * tax rate
     Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
     Display estimate expiration time */
     

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello welcome to Frank's carpet cleaning services" << endl;
    cout << "\nHow many rooms would you like to be cleaned?: ";
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {30.0};               // see here constant "cons" is added to the declaration "double" the variable priceperroom is now set to 30 indfinitley
    const double sales_tax {0.06};                        //it the variables that are declared by "const" is used in other function or more than the initilized number are used  it will compile error                                           
    const int estimate_expiry {30};    //days                                                                                                       
    
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
   cout << "Price per room: $" << price_per_room << endl;
   cout << "Cost: $" << price_per_room * number_of_rooms << endl;
   cout << "Tax: $" << price_per_room *number_of_rooms * sales_tax << endl;
   cout << "================================" << endl;
   cout << "Total Estimate: $" << (price_per_room* number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
   cout << "This estimate is valid for " <<  estimate_expiry << " days" <<endl;
   
    cout << endl;                 //notice the code looked more readable and cleaner it is called "refactoring" meanig changing your code
                                          //without changing behaviour it makes ur code more readable and modifiable
    return 0;
}
    