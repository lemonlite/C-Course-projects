#include <iostream>
#include <string>

//here we are not using namespaces


void BasicCondition()
{
    std::string name; //std means standard and we are using string as part of the standard library located in iostream headers/library
    int age;
    char verify = ' ';

    std::cout <<" Enter you name: ";    
    getline(std::cin, name);                 //std::cin we are grouping them hence 2 colons the getline functions read through whitespaces     
    std::cout <<" Enter your age: ";
    std::cin >> age;
    std::cout <<" are this the correct information?" <<" "<< name <<" " << age <<": ";
    std::cin >> verify;
        if ( verify == 'y')
        {
            std::cout <<" Hello " << name <<" you are " << age <<" years old. \n";   
        }
        else
        {
            std::cout <<" invalid data try again.\n";
        }
    

}

void BasicIO()
{
    std::string name; //std means standard and we are using string as part of the standard library located in iostream headers/library
    int age;

    std::cout <<" Enter you name: ";    
    getline(std::cin, name);                 //std::cin we are grouping them hence 2 colons the getline functions read through whitespaces 
    std::cout <<" Enter your age: ";
    std::cin >> age;
    
    std::cout <<" Hello " << name <<" you are " << age <<" years old. \n";


}


int main()
{

    BasicCondition();


    std::cout << std::endl; //this prints a new line and flushes the stream 
    return 0;
}