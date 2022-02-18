#include <iostream>
#include <string> //for cpp string part of the c++ standard library
#include <cstring> //for c-style string functions 
#include <cctype> //for character-based function

//Character functions #include<cctype> there is C-style and C++ strings

using namespace std;

void exercise1()
{
 ///this is how string are stored in memory

    // string name1  = "ThisIsCPlusPlus\n";
    // cout << name1 [7] << "\n";  //just like an array here we choose index [7] and if u count in integer 0-7 it is the letter P
    //                             //at the end \0 is null terminate




}

void CType()
{   // here is a ctype characters and strings array of characters

    char first_name[20] {};        //uninitialized strings
    char last_name[20] {};          //now initialaized as a dynamic array
    char full_name[50] {};          //the [] indexes is how many characters this array can store this one is 50
    char temp[50] {};

    // cout << first_name;     //nothing is assigned to the given indexes "memory slots" this will display garbage

    // cout <<"Please enter your first name: ";
    // cin >> first_name;                          //user input will store the characters to the variable first_name

    // cout <<"Please enter your last name: ";
    // cin >> last_name;                            //and so on.....
    // cout <<"========================================\n";

    // cout <<"Hello," << first_name <<" your first name has " << strlen(first_name) <<" characters\n";  /// strlen(string length) counts the string inside the variable
    // cout <<"And your last name, " << last_name <<" has " <<strlen(last_name) <<" characers\n";

    // strcpy(full_name, first_name);      //copy first name to full name always think right to left.
    // strcat(full_name, " ");             //concatenate full and a space it gives null or whitespace for the last name
    // strcat(full_name, last_name);       //concatenate last namt to full name
    // cout <<"Your full name is " << full_name <<"\n";

    // cout <<" Enter your full name: ";
    // cin.getline(full_name, 50);          //maximum characters to read which is 50
    // cout <<" your full name is "<< full_name <<"\n";

    // cout <<"==========================================\n";
    // strcpy(temp, full_name);
    // if(strcmp(temp,full_name) == 0)
    // {
    //     cout << temp <<" and " << full_name <<" are the same\n";
    // }
    // else
    // {
    //     cout << temp <<" and " << full_name <<" are different\n";
    // cout <<"===================================================\n";
    // }

    // for (size_t i{ 0 }; i < strlen(full_name); ++i)  //size_t unsigned 
    // {
    //     if (isalpha(full_name[i]))
    //         full_name[i] = toupper(full_name[i]);       //will capitalized all cases

    // }

    // cout <<"================================================\n";
    // if (strcmp(temp,full_name) ==0)
    //     cout << temp <<" and " << full_name <<" are the same \n";
    // else
    //     cout << temp <<" and " << full_name <<" are different\n";


    // cout <<"==================================================\n";
    // cout <<"result of comparing " << temp << " and " << full_name <<": " << strcmp (temp, full_name) <<"\n";
    // cout <<"result of comparing " << full_name <<" and " << temp << ": " << strcmp (full_name, temp) <<"\n";
        
}

void CppType()
{ //cpp style strings always initialaized
    // string word1;
    // string word2;
    // word1 = "this is a random word";  //"string" is assigned in word1
    // word2 = ", this connects to word1";    
    // cout << word1 + word2 <<"\n";   // here we can use an operator/boolean like addition it combines the stored strings on the variable word1 and 2
    // cout << word1 + "can i add this"; // this is will give you an error because you cannot add a string literal with a string variable

    // string word1 { "this is a string with whitespace" };
    // cout << word1.find ("string");  //this .find in the string library will find the word "" in the variable word1 whicih is occupies 10 memory slots
    // cout << word1.find ("this", 4);
    // cout << word1.length();  //this will count the characters in a string including the spaces
}


int main()
{
    CppType();
    cout << endl;
    return 0;
}