//Section 6 challenge  REMEMBER PEMDAS

/* ya boi carpet cleaning service charges
    $25 per small room 
    $35 per large room 
    Sales tax rate is 6%
    Estimates are valid for 30 days
    
    Prompt the user for the number of small and large rooms they would like cleaned 
    and provide an estimate such as:
    
    Estimate for carpet cleaning service 
    Number of small rooms: 3
    Number of large rooms: 1
    Price per small rooms: $25
    Price per large room: $35
    Cost: $ 110
    Tax: $6.6
===========================
Total estimate: $116.6
This estimate is valid for 30 days 
*/

#include <iostream>

using namespace std;

int main()
{
    cout <<"Welcome to ya boi's carpet cleaning services\n";
    cout <<"=============================================\n";
    cout <<"Hello customer ! this is our service rates $$$\n";
    cout <<"Small rooms: $25\n";
    cout <<"Large rooms: $32\n";
    cout <<"Sales tax rate: %6\n";
    cout <<"Estimates are valid for 30 days\n";
    cout <<"=============================================" << endl;
    
   int number_of_small_rooms {0};
   cout <<"How many small rooms to be cleaned? : ";
   cin >> number_of_small_rooms;
   
   int number_of_large_rooms {0};
   cout <<"How many large rooms to be cleaned? : ";
   cin >> number_of_large_rooms;
   cout <<"==============================================" << endl;
   
    const int price_per_small_room {25};
    const int price_per_large_room {35};
    const double tax {0.06};
    const int valid_days {30};
 
    cout <<"Estimate total is \n";
    cout <<"Total number of small rooms: " << number_of_small_rooms << "\nTotaling: $"  << ( number_of_small_rooms * price_per_small_room ) << endl;
    cout <<"Total number of large rooms: " << number_of_large_rooms << "\nTotaling: $" << ( number_of_large_rooms *price_per_large_room ) << endl;
    cout <<"===============================================" << endl;
    cout <<"Total cost:  $" << (price_per_small_room * number_of_small_rooms) + (number_of_large_rooms * price_per_large_room) << endl;
    cout << "Tax: $" << ( price_per_small_room * number_of_small_rooms * price_per_large_room * number_of_large_rooms * tax ) << endl;
    cout <<"Estimates are valid for " << valid_days << endl;
    
    
    cout <<"\n\nEND....." << endl;
    
    return 0;
}






