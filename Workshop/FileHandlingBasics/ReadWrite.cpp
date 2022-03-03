#include <iostream>
#include <fstream>
#include <string>

void BasicWrite()
{
    std::fstream myFile;      //variable myFile has been declared 
    myFile.open("mytext.txt", std::ios::out); //write           //open function from fstream the file mytext.txt will be open if not existant it will be created
    if (myFile.is_open())   //when the variable is open
    {
        myFile <<"hello\n";      //just like cout this will write "hello" in the file.
        myFile <<"this is the second line\n";
        myFile.close();     //will close the file after writing 
    }
     myFile.open("mytext.txt", std::ios::app); //Appending
    if (myFile.is_open())   
    {
        myFile <<"this line is append\n";   
        myFile.close();     
    }

}

void BasicRead()
{
    std::fstream myFile;
    myFile.open("read.txt", std::ios::in); //read mode
    if (myFile.is_open())
    {
        std::string line;                   //we will store data here in string variable "line"
        while (getline(myFile, line))       //it reads all the text in myFile and store is in "line" variable
        {   
            std::cout << line << std::endl; // it will loop until all text of line are read
        }
        myFile.close();      //after are text are read it will close the file

    }
}


int main()
{
   
    std::cout << std::endl;
    return 0;
}