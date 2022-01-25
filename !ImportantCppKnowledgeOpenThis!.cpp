//Unreal engine C++ developer by game.dev   REFER to unreal engine documentation about coding standards

#include <iostream>
#include <cmath> 



using std::cout;
using std::cin;
using std::endl;        //this are global   

//IMPORTANT data type "void" saves a lot of space and makes more functions smaller makes the problem smaller good for long codes

void randomnamefunction()   //NOTE WHATEVER IS inside {} is local functions, with expression statements, etc... anything
{                              
    for (int num = 0; num < 10; num++)
        cout << " testing void with loop \n";

}
void Playgame()  //This is a function a group of statements that together performcs a task every C++ program must have at least one the most common one is  "int main()" "void" means will return no data like ignore
{                 //whats inside here are {} are local variables and outside are global variables if this program is ran it will be blank becaus int main() is empty and void ignores the data. 
                //Playgame() is named by a programmer like a variable it can be anything as long as it ends ()               

    cout << "You are a secret agent breaking into a secure server room...\n";
    cout << "Enter the correct code to continue:\n\n ";                      //\n newline a type of escape sequence better than endl; because faster print time


    const int CodeA = 4;                //"CodeA" uppercamel space or pascal case it is part of the coding standards a varible starts with upper case
    const int CodeB = 3;                //And instead of a space or underscore another upper case is applied "code_a" "CodeA"
    const int CodeC = 2;



    const int Codesum = CodeA + CodeB + CodeC;
    const int Codeproduct = CodeA * CodeB * CodeC;


    cout << "+ There are 3 numbers in the code\n";
    cout << "+ The codes add-up to : " << Codesum << "\n";
    cout << "+ The codes multiply to give: " << Codeproduct << "\n";

    // Store player guesses
    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;                                  // remember the compiler doesnt read whitespace itll jump till it finds the next one.



    //Check if players guess correct
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == Codesum && GuessProduct == Codeproduct)
    {
        cout << " You win.\n";
    }
    else
    {
        cout << " wrong code try again.";
    }



    //NOTICE that the return value is not copied

}


int main()                                                        //since main is integer "data type" the return must be 0; means no error this is mostly C++ entry for functions
{                                                                 //local variables inside if you run the programming it will simply be blank because "the functions are in the void data type above"

    Playgame();                                                  //here the name of the function you want to be executed so u can make as much functions you want and just put it here.
                                                                 //IMPORTANT u can put any function inside the int main() remember it is wher C++ entry for reading code.
    cout << endl;
    return 0;
}