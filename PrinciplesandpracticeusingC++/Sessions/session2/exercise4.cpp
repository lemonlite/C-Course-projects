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
using std::allocator;
using std::boolalpha;
using std::noboolalpha;


int main()
{ 
///// VECTORS - are similar to arrays but in arrays once the element has been set (4) it is only limited to that
///// in vectors you can increase the element it is highly versatile just remember initialize it to zero or {}

    // vector <double> v = {5,7,9,4,6,8};
    // // {
    // // for ( int i=0; i<v.size(); ++i)
    // // cout << v[i] << "\n";     
    // // }

    // vector <double> num1; //NOTE in vectos you can limit check not like arrays that its element are set her if num1 is ()
    // num1.push_back(1);      //The push_back() method adds element now the vecotr "num" has 3 elements " it starts 0-1,2,3,4" like a whole number
    // num1.push_back(4);  //NOTE so now it s vector <double> num1 {1,4,5}; but not visualized.
    // num1.push_back(5);


///// Vector realistic example via temperature data computing
//  NOTE there is no limit to the range of computations we might perform on a data speed,quanity, etc...... anything 


    // vector <double> temps;      //temperature
    // {
    //     for (double temp; cin >> temp; )    //read into temp
    //     temps.push_back (temp);         //put temp into vector
    // }

    // { // compute mean temperature
    // double sum =0;
    // for ( double x : temps) sum += x;
    // cout <<" Average temperature: " << sum/temps.size() << "\n";
    // }

    // { //compute median temperature
    // sort(temps);       //sorts out temperatures
    // cout <<" Median temperature: " << temps[temps.size()/2] << "\n";
    // }
    


///// VECTOR text examples simple dictionary

    // vector <string> words;
    // for (string temp; cin>>temp; )
    //     words.push_back(temp);
    //     cout <<" Number of words: " << words.size() <<"\n";

    //     sort(words);         //NOTE for some reason sort dont work without the official "std_lib_facilities.h" header

    //     for (int i = 0; i<words.size(); ++i)
    //         if (i==0 || words [i-1]!=words[i])
    //         cout << words[i] << "\n";
    



/////testing modulo. remainder

//     int result;

//    int num1 = 9;
//     int num2 = 5;

//     result = num1 % num2;
//     cout << result  << "\n";


///// 







    cout << endl;
    return 0;
}