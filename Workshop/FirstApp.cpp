#include <iostream>
#include <string>
#include <cmath>

//here we are not using namespaces



void Getname()
{
    std::string name; //std means standard and we are using string as part of the standard library located in iostream headers/library

    std::cout <<" Enter you name: ";    
    getline(std::cin, name);                 //std::cin we are grouping them hence 2 colons the getline functions read through whitespaces     
    std::cout <<" Welcome " << name << "\n";      
}

void SimpleCalculator()
{

        std::cout <<" please enter the numbers u want to add,subtract,multiply,divide : ";
        double num1 = 0;
        double num2 = 0;
        char op = ' ';
        std::cin >> num1 >> op >> num2;
        {
        if (op == '+')
        std::cout <<" the sum of "<< num1 <<" + "<< num2 <<" is "<< num1 + num2 <<"\n";
        else if (op == '*')
        std::cout <<" the sum of "<< num1 <<" * "<< num2 <<" is "<< num1 * num2 <<"\n";
        else if (op == '/')
        std::cout <<" the sum of "<< num1 <<" / "<< num2 <<" is "<< num1 / num2 <<"\n";
        else if (op == '-')
         std::cout <<" the sum of "<< num1 <<" - "<< num2 <<" is "<< num1 - num2 <<"\n";
         else 
         std::cout <<" invalid operation please try again. \n";
        
        }

}


int main()
{





    system("pause>0");
    std::cout << std::endl; //this prints a new line and flushes the stream 
    return 0;
}