//Testing boolean for equality true or false
//NOTE in boolean terms 1 is "TRUE" 0 is "FALSE"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};
//    
    int num1{}, num2{};             //NOTE for mixed expression testing u can declare different types for example an integer is a whole number u just have to declare a variable
                                    // into a double to compare take a look at the bottom double.
                                    //NOTE at C++ u need to be really specific to what when for variables or anything in fact declaring them
//    
    cout << boolalpha;    //will display true/false instead of 1/0 for booleans
//    
//    cout <<"Enter two integers seperated by a space: ";
//    cin >> num1 >> num2;
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    cout <<"Comparison result (equals): " << equal_result << endl;
//    cout <<"Comparison result (not equals): " << not_equal_result << endl;
    
    
//     char char1{}, char2{};
//       
//     cout <<"Enter two characters separated by a space: ";
//     cin >> char1 >> char2;
//     equal_result = (char1 == char2);
//     not_equal_result = (char1 != char2);
//     cout <<"Comparison result (equals): " << equal_result << endl;
//     cout <<"Comparison result (not equals): " << not_equal_result << endl;
       
    
        double double1{}, double2{};
//        cout <<"Enter two doubles separated by a space: ";
//        cin >> double1 >> double2;
//        equal_result = (double1 == double2);
//        not_equal_result = (double1 != double2);
//        cout <<"Comparison result (equals): " << equal_result << endl;
//        cout <<"Comparison result (not equals): " << not_equal_result << endl;


        cout << "Enter an integer and a double seperated by a space: ";
        cin >> num1 >> double1;
        equal_result = (num1 == double1);
        not_equal_result = (num1 != double1);
        cout <<"Comparison result (equals): " << equal_result << endl;
        cout <<"Comparison result (not equals): " << not_equal_result << endl;
        
          

    
    
    cout << endl;
    return 0; 
    
}
