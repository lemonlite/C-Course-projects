//CONVERTING EUR TO USD
// at this time 1 euro is 1.14USD


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   const double usd_per_euro {1.14};     
        
    cout <<"Euro to USD converter software" << endl;
    cout <<"--------------------------------" << endl;
    cout <<"Enter the value in EUROS: ";
        
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    dollars = euros * usd_per_euro;
    
    cout << euros <<" euros is equivalent to $ " << dollars << endl; 
    
    
    cout << endl;
    return 0;
}