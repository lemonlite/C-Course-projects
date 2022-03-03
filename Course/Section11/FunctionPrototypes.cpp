#include <iostream>
//FUNCTION prototypes
double CalcVolCylinder(double radius, double height);
double CalcAreaCircle(double);
void AreaCircle();
void VolumeCylinder();      //now it will compile and run THIS IS USUALLY JUST FOR SMALL PROTOYTING THIS FUNCITON  will most go to a header file so it can be used in multiple .cpp files

const double pi = 3.14159;


int main()
{
    AreaCircle();
    VolumeCylinder();

    std::cout << std::endl;
    return 0;
}



//THIS WILL PRODUCE A NOT DECLARED in this scope compiler error 


double CalcAreaCircle(double radius)  //here the function is declared as a double just like a variable and has an argument declared double named radius variable
{
    return pi * radius * radius;

}

double CalcVolCylinder(double radius, double height)
{
   // return pi * radius * height;
   return CalcAreaCircle(radius) * height;      //the compiler will see that "CalcAreaCircle" function is declared and now can be used to any line below it. if not we will have a compiler error
}

void AreaCircle()
{
    double radius {};
    std::cout <<"\n Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout <<"The area of a circle with radius " << radius <<" is " << CalcAreaCircle(radius) <<"\n"; //the function is also used here
}

void VolumeCylinder()
{
    double radius {};
    double height {};
    std::cout <<"\nEnter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout <<"\nEnter the height of the cylinder: ";
    std::cin >> height;
    std::cout <<"The volume of a cylinder with radius " << radius <<" and height " << height <<" is " << CalcVolCylinder(radius, height) <<"\n";
}