#include <iostream>
#include <string>
#include <vector>

void PassByValue1(int num);
void PassByValue2(std::string s);
void PassByValue3(std::vector<std::string> v);
void PrintVector(std::vector<std::string> v);

void PassByValue1(int num)      //num is formal parameter the num here is the actual num not in the main() so its 1000
{
    num = 1000;
}

void PassByValue2(std::string s)
{
    s = "Changed";
}

void PassByValue3(std::vector<std::string> v)
{
    for (auto s:v)
        std::cout << s <<" ";
        std::cout << std::endl;
}

void PrintVector(std::vector<std::string> v)
{
    v.clear(); //delete all vector elements
}

int main()
{
    int num {10};
    int num2 {20};

    std::cout <<"num before calling PassByValue1: " << num <<"\n";
    PassByValue1(num);          //passing the value from main() num to the paremter in value 1
    std::cout <<"num after calling PassByValue1: " << num <<" \n "; //now it will apear 10 it replaced the value 1000 

    std::cout <<"\n num2 before calling PassByValue1: " << num2 <<"\n";
    PassByValue1(num2);
    std::cout <<" num2 after calling PassByValue2: " << num2 <<"\n";

    std::string name {"jack"};
    std::cout <<"\n name before calling PassByValue2: " << name <<"\n";
    PassByValue2(name);
    std::cout <<" name after calling PassByValue2: " << name <<"\n";

    std::vector<std::string> stooges {"Larry", "Moe", "Curly"};
    std::cout <<" \n stooges before calling PassByValue3: ";
    PrintVector(stooges);
    PassByValue3(stooges);
    std::cout <<"stooges before calling PassByValue3: ";
    PrintVector(stooges);



    std::cout << std::endl;

    return 0;
}