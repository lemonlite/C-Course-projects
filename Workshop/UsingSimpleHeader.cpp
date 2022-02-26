// This source file is a practice example of how header files work in c++ the SimpleHeader.h must be included pre processor directive "include"

#include <iostream>
#include <SimpleHeader.h>

const char* RecommendAFood(char firstletter);   //declaration of function goes before the main function


int main()
{
    std::cout <<"I will eat " << RecommendAFood ('c');



    std::cout << std::endl; // flushes the stream don't use often because of slow compilation
    system("pause>0"); //windows exclusive does not work in other OS this will pause the build exe until a key is pressed to be closed or move into the next function
}

const char* RecommendAFood(char firstletter)       //definition of the declared function the implementation of that function
{
    if(firstletter == 'a' || firstletter == 'A')            //choice of food
        return "apple";                                 //return 
    else if (firstletter == 'b' || firstletter == 'B')
        return "banana";
    else if (firstletter == 'c' || firstletter == 'C')
        return "cake";
    else return "anything";
}