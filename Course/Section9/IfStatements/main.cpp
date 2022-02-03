//this is a decision making statments   

#include <iostream>

using std::cout;
using std::cin;
using std::endl;




int main()
{
    int num {};         //this are global variables so it will be read inside the local {} variables the scope gets bigger 
    const int min {10};
    const int max {100};


    cout <<"Enter a number between " << min << " and " << max << ": ";
    cin >> num;


    if (num >= min){                    //THIS IS WHAT WE CALL A BLOCK 
                                        //kinda like its own local variables whatever is declared and any expressions within the curly bracket stays there
      cout <<" \n===============if statment 1=====================" << endl;  
      cout << num <<" is greater than or equal to " << min << endl;
      
    int diff {num - min};
    cout << num << " is " << diff <<" greater than " << min << endl;
   }

    if(num <= max) {                //!!NOTE!! notice theres no semicolon on the end of the parenthesis it is because the whole statement is not yet over. if its applied compiler will display error.
        cout <<" \n===============if statment 2=====================" << endl;  
        cout << num <<" is less than or equal to " << max << endl;

    int diff = {max - num};           //NOTICED that "diff" variable has been redaclared inside this block.
    cout << num <<" is " << diff <<" less than " << max <<endl;


    }

    if(num >= min && num <= max) {
        cout <<"\n================if statment 3======================" << endl;
        cout << num <<" is in range " << endl;
        cout <<" This means statements 1 and 2 must also display " << endl;

    }

    if (num== min || num == max) {
        cout <<"\n================if statment 4======================" << endl;
        cout << num <<" is right on the boundary " << endl;
        cout << "This means all 4 statements will display " << endl;
    }    




    cout<< endl;
    return 0;
}