#include <iostream>

using namespace std;

// This program will calculate the area of a room in a square feet

int main()
{
    int room_width {0};
    cout << "Enter the width of the room: ";
    cin >> room_width;
    
    int room_length {0};
    
    cout << "Enter the length of the room: ";
    cin >> room_length;
    
    cout << " The area of the room is " << room_width * room_length << " square feet " << endl;
    return 0;
}
/*noticed the declaration and variable closer to each usage that is a the ideal syntax structure it will not blob ur top 
    code with a lot of lines and will provide cleaner line of codes     */