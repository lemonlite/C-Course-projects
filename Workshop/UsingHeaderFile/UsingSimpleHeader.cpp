// This source file is a practice example of how header files work in c++ the SimpleHeader.h must be included pre processor directive "include"

#include <iostream>         //this is part of the c++ header file
#include "SimpleHeader.h"  //double quotation marks are always used for custom headers




int main()
{
    std::cout <<"I will eat " << RecommendAFood ('a') << "\n";   
    GetRecipe();


    std::cout << std::endl; // flushes the stream don't use often because of slow compilation
    system("pause>0"); //windows exclusive does not work in other OS this will pause the build exe until a key is pressed to be closed or move into the next function
}

const char* RecommendAFood(char firstletter)   //in this source file the recommedfood is implemented the definition u can make a independet cpp file for a definition if u want
{       
    if(firstletter == 'a' || firstletter == 'A')            //choice of food
        return "apple";                                 //return 
    else if (firstletter == 'b' || firstletter == 'B')
        return "banana";
    else if (firstletter == 'c' || firstletter == 'C')
        return "cake";
    else return "anything";
}

void GetRecipe()
{
    std::cout <<" here is the recipe for pizza. ";
}