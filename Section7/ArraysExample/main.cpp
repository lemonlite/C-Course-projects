//BELOW ARE ARRAYS EXPLAINED IN DETAIL

#include <iostream>

int main() 
/* {
    int test_score [5] {100,85,70,75,90};    //the "int" is the element type test_cores is the array its the same as a variable programmers name it
    int  array []  {1,2,3,4,5};                          // the declared number of arrays starts in [INDEX] square  brackets and NOTE! arrays are always initialized with
                                                                //also you can set the declare to [] blank but you need to initialize the compiler will automatically  count it as i shown
                                                                //index starting at 0 and last -1 so in this case since 5 elemets are declared you must initialize 5 lits of scores
                                                                // which are represneted {} and seperated by , comma punctiation
    std::cout << "here are the scores "<< test_score << std::endl;
    
    return 0;
     
    }  */

//ACCESING ARRAY ELEMENTS
//array_name [element_index] 

{
    int test_scores [5] {100,95,99,87,88};
    std::cout << "First score at index 0: " << test_scores [0] << std::endl;   //NOTICED WE STARETD AT 0
    std::cout << "Second score at index 1: " << test_scores [1] << std::endl;
    std::cout << "Third score at index 2: " << test_scores [2] << std::endl;
    std::cout << "Fourth score at index 3: " << test_scores [3] << std::endl;
    std::cout << "Fifth score at index 4: " << test_scores [4] << std::endl;
    
    return 0;
} 