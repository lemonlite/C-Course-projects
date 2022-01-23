#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it
#include <vector>

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{   //VECTOR examples
    vector <int> v = {5,7,9,4,6,8};
    {
    for ( int i=0; i<v.size(); ++i)
    cout << v[i] << "\n";     
    }






    cout << endl;
    return 0;
}