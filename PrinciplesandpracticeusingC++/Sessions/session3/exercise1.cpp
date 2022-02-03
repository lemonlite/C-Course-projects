#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>       //NOTE! this headers is what the course book uses until chatper 10 by 21 you'll understand it

using std::cout;   //i just made this because its bad practice to use namespace in standard  C++ library
using std::cin;
using std::endl;
using std::string;
            ////ERROR TYPES
// int main()
// {   
    // int area (int length, int width);

    //syntax errors   this are grammar for the C++ language

    // int s1 = area (7;       //missing )
    // int s2 = area(7);       // missing semicolon ;
    // Int s3 = area (7);      //Int is not a type        
    // int s4 = area('7);

//type errors this is a mismatch between the types you declared or forgot to declare

    // int x0 = arena(7);  //variable "arena" is undeclared mis typo
    // int x1 = area(5);   //wrong number of arguments
    // int x2 = area("seven", 2); //1st argument has a wrong type supposed to be a integer


//Non errors  some compiler will give warnings some don't.

    // int x4 = area (10,-7);     //but what is a rectangle with a width of minux 7? the area() asks for 2 integers and you gave it but it doesnt mean those arguments had to be positive
    // int x5 = area (10.7,9.3);   // since its not a "double" it has decimals it only calls as (10,9)
    // char x6 = area (100,9999);   //truncates the result char is only 1 byte "8 bits"

//Linker error when an obj file is having error trying to creat the exec file we use header files to ensure the translation is the same.

    // int x = area (2,3); //if defined in another source file and linked the code generated from that source file to this code the linker will complain that it didnt find a definition of "area()"   

    // double area (int , int y );     //Functions with the same name but different tpyes will not match 


//Run time errors if the program has no compile time, or no link time errors it will run this error is harder to find because it didnt get caught in compile and link 


    // int area (int length, int width) //calculate area of a rectangle
    // {
    //     return length*width;

    // }

    // int framed_area (int x, int y) // calculate area within frame
    // {
    //     return area (x-2, y-2);
    // }

    //     int main()
    //     {
    //         int x = -1;
    //         int y = 2;
    //         int z = 4;
    //         int area1 = area (x,y);
    //         int area2 = framed_area (1,z);
    //         int area3 = framed_area (y,z);
    //          double ratio = double (area1)/area3;       //convert to double to get floating-point division


    //     }









   
//}