#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;


int main()
{   
   
    cout <<" Enter repeated words: ";
    int number_of_words {};
    string previous = "";       // previous workd; initialized to "not a word"
    string current;             // current word
    cin >> current;          
    while (cin>>current)    //read a stream of words
    {   
        ++number_of_words;  //increase word count
        if (previous == current)    //chec if the word is the same as last
        cout <<" word number: " << number_of_words;
        cout <<" repeated word: " << current << "\n";
        previous = current;

    }




    cout << endl;
    return 0; 

}