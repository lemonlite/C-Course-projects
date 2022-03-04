//Math example using the cmath library functions
//Random generation using csdlib library and ctime for time
#include <iostream>
#include <cstdlib>	//required for rand() this is the C languuage standard library like c++ has STDL
#include <ctime>	//required for time()
#include <cmath>	//required


void RandomNumberGeneration()		//void means data to be ignored and then your custom funciton name then {} you will call this function in the main() to be able to be compiled
{
	int RandomNumber {};
	size_t count {10};	//number of random numbers to generate
	int min {1};		//lower bound (inclusive)	whatever range you want
	int max {6};		//upper bound (inclusive)
	
	//seed the random number generator
	//if you dont seed the generator you will get the same sequence random numbers every run
	
	std::cout<<" RAND_MAX on my system is: " << RAND_MAX <<"\n";
	srand(time(nullptr));
	
	for (size_t i{1}; i <=count; ++i)
	{
		RandomNumber = rand() % max + min;		//generate a random number [min, max]
		std::cout << RandomNumber <<"\n";
	}
	
	
}

void example1()
{
	double num {};
	
	std::cout <<" Enter a number (double): ";			//all of this are part of the cmath library idk any of this its just to show the abstraction of a funciton()
	std::cin >> num;
	
	std::cout <<" The sqrt of " << num <<" is: " << sqrt(num) <<"\n";   		//we are calling the sqrt "square root" function from cmath library 
	std::cout <<" The cubed root of " << num <<" is: " << cbrt(num) <<"\n";
	
	std::cout <<" The sine of " << num <<" is: " << sin(num) <<"\n";
	std::cout <<" The cosine of " << num <<" is: " << cos(num) <<"\n";
	
	std::cout <<" The ceil of " << num <<" is: " << ceil(num) <<"\n";
	std::cout <<" The floor of " << num <<" is: " << floor(num) <<"\n";
	std::cout <<" The round of " << num <<" is: " << round(num) <<"\n";
	
	double power {};
	
	std::cout <<"\nEnter a power to raise " << num <<" to: ";
	std::cin >> power;
	std::cout << num <<" raised to the " << power <<" power is: " << pow(num,power) <<"\n";
		
}


 int main()		//here you call the functions you made above and gets compiled and executed.
 {
	
     std::cout <<std::endl;
     return 0;
 }
