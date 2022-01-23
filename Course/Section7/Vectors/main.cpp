//VECTORS

#include <iostream>
#include <vector> // insert vector

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
//        vector <char> vowels;       //empty NOTE! some are commented out because u cannot use the same declared vector like arrays "vowels" cannot have multiples
//        vector <char> vowels (5);   //declared 5 vowels but initialized to zero
        vector <char> vowels {'a','e','i','o','u'};
         
/*         cout << vowels[0] << endl;
         cout << vowels[4] << endl;
         
//      vector <int> test_scores (3);       //3 elements all initialized to zero
//      vector <init> test_scores (3, 100);     // 3 elements all initialized to 100

      vector <int> test_scores {100,98,89};

      cout <<"\nTest scores using array syntax: " << endl;
      cout << test_scores[0] << endl;
      cout << test_scores[1] << endl;
      cout << test_scores[2] << endl;

      cout <<"\nTest scores using vector syntax:" << endl;

      cout << test_scores.at(0) << endl;            //the ".at" is a method this method shrinks and expands the dynamic array u want
      cout << test_scores.at(1) << endl;            // notice u can add as much element u want 
      cout << test_scores.at(2) << endl;
//    cout << test_scores.at(3) << endl;            //if u add this extra elemtn it will bounce check
      cout <<"\nThere are " << test_scores.size() << " scores in the vector" << endl;       //notice the () blank because this vector is dynamic it grows and shrinks

      cout <<"\nEnter 3 test scores: ";       //this part we are extracing 3 integers from the input console and we're putting it on the elements, we are chaning the vector elements
      cin >> test_scores.at (0);
      cin >> test_scores.at (1);
      cin >> test_scores.at (2);            //NOTE: if you try to add a 4th integer it will just show 3 results because its int "test_scores" is declared already

      cout <<"\nUpdated test scores: " << endl;
      cout << test_scores.at (0) << endl;
      cout << test_scores.at (1) << endl;
      cout << test_scores.at (2) << endl;

      cout <<"\nEnter a test score to add to the vector: ";   //this example shows a dynamic natture of vector ".push_back"

      int score_to_add {0};     //here a simple variable int "score_to_add" is made
      cin >> score_to_add;

      test_scores.push_back (score_to_add); //NOTE this tells the  "test_scores" vector to push that integer "scores_to_add" at the back of the vector this what makes
                                            //vectors dynamic so "test_scores" vector will add that integer/ if it need to increase in size it will automatically
                                            

      cout <<"\nEnter one more test score to add to the vector: ";
      cin >> score_to_add;

      test_scores.push_back(score_to_add);
      
      
            
      cout <<"\nThe scores are now: " << endl;
      cout << test_scores.at (0) << endl;
      cout << test_scores.at (1) << endl;
      cout << test_scores.at (2) << endl;
      cout << test_scores.at (3) << endl;
      cout << test_scores.at (4) << endl;
      cout <<"\There are now " << test_scores.size() <<" scores in the vector" << endl;
      
//      cout <<"This should cause an exception" << test_scores.at (10) << endl;  //this shows and exception  because there is no 10th index */



//    EXAMPLE of a 2D-vector

      vector <vector<int>> movie_ratings
      {
         {1,2,3,4},         //this is how u declare a vectors of vectors it goes by rows and column multi dimensional vectors same as arrays
         {1,2,4,4},         //the "columns or horizontally" are the "reviewers" and the "rows/vertically" are the "movies" so 3 reviewers 4 numbers of movies to review
         {1,3,4,5}          //same as multidimensional arrays vectors
          
      };
      
      cout <<"\nHere are the movie rating for reviewer#1 using array syntax: " << endl;
      cout << movie_ratings[0][0] << endl;
      cout << movie_ratings[0][1] << endl;
      cout << movie_ratings[0][2] << endl;
      cout << movie_ratings[0][3] << endl;
      
      
      cout <<"\nHere are the movie rating for reviewer#1 using vector syntax: " << endl;
      cout << movie_ratings.at(0).at(0) << endl;
      cout << movie_ratings.at(0).at(1) << endl;
      cout << movie_ratings.at(0).at(2) << endl;
      cout << movie_ratings.at(0).at(3) << endl;
      
      cout << endl;
      
      
        return 0;
}