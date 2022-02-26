/*Header files are used in tandem with source files ".cpp" it helps to narrow down the scope of the program.
whatever is declared on this header can be called out in multiple source files .cpp instead of copy pasting
individual functions or variables into every single .cpp files and most likely will get a linker error */

#pragma once  //it insures you will not include this header file multiple times in a single .cpp file


const char* RecommendAFood(char firstletter);   //declaration of function goes before the main function
void GetRecipe();
