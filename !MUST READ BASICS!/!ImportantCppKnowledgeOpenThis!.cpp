//Unreal engine C++ developer by game.dev   REFER to unreal engine documentation about coding standards

#include <iostream>     // # is pre-processor with the include directive inside "< >" is what header file you want to put on your program also called libraries
#include <cmath>        //it can be anything from IO streams to graphics to vulkan headers.
#include <ctime>



using std::cout;
using std::cin;
using std::endl;         

//IMPORTANT data type "void" saves a lot of space and makes more functions smaller makes the problem smaller good for long codes
//BELOW the pre processors and this expressions are GLOBAL VARIABLES and inside below this stuff are LOCAL Variables and on thoe statements and expressions {} are BLOCKS

void PrintIntroduction(int Difficulty)  //"Parsing argument"       //This is a function a group of statements that together performcs a task every C++ program must have at least one the most common one is  "int main()" "void" means will return no data.
{
    cout << "\nYou are a secret agent breaking into a secure server room...\n" << Difficulty;
    cout << " secure server room...\nEnter the correct code to continue:\n\n ";

}
bool PlayGame(int Difficulty) // Playgame passed it on difficulty which is connected to PrintIntroduction above           //data type "bool" this must return a boolean value of true or false or you will get an error in the main value "must return a value"
{               

                                                        //\n newline a type of escape sequence better than endl; because faster print time
    PrintIntroduction(Difficulty);                               //scope of the variable. this means it goes up to a level u set on the level difficulty in the main but declared on the int Difficulty in the void function above called "Parsing argument"
    const int CodeA = rand() % Difficulty + Difficulty;              //"CodeA" uppercamel space or pascal case it is part of the coding standards a varible starts with upper case
    const int CodeB = rand() % Difficulty + Difficulty;              //And instead of a space or underscore another upper case is applied "code_a" "CodeA"
    const int CodeC = rand() % Difficulty + Difficulty;              //rand() generates random number you need to initalize this with arithmetic operator % or any to limit the number if not ill got more than 32,000 + numbers
                                                                     //modulus % can be good to predict the range of the number


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
        cout << "\n well done you move on to the next level.";
        return true;                                                //NOTE when a function is declared "bool" inside it with every thing with an conditional value must "return a true; or false;"
    }
    else
    {
        cout << " wrong code try again.";
        return false;
    }



    //NOTICE that the return value is not copied and pasted 

}

int main()                                                        //since main is integer "data type" the return must be 0; means no error this is mostly C++ entry for functions
{
    srand(time(NULL));                                             //part of header <ctime> this randomizes stuff based on the time of day. in this situation it just randomize completey rand() on difficulty                        
    int LevelDifficulty = 1;
    const int MaxLevel = 4;                                       //i set the max level to 4;

    while (LevelDifficulty <= MaxLevel)                          //it will loop until game is completed reach level 4 can be hardcoded to '"true"
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);         //NOTE variable LevelDifficulty has been passed to this parameter              //here the name of the function you want to be executed so u can make as much functions you want and just put it here.                                       
        cin.clear();                                             // clears any errors example if user enters other than a number it will clear out the endless loop
        cin.ignore();                                            // Discards the buffer
        
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        

    }
   
    cout << "\n You have completed all the levels congratulations."; // after completing the 4 levels set by you. winning
                                                                                                                                                                                                  
                                                                                                                                                                      
                                                                 //IMPORTANT u can put any function inside the int main() remember it is wher C++ entry for reading code.
    cout << endl;
    return 0;
}