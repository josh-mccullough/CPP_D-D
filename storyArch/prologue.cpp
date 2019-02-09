#include <iostream>
#include <string>

#include "rollMechanics.cpp"


void welcome()
{
    std::string name;
    int age;

    std::cout << "Welcome to your adventure, what is  your name?  " << std::endl;
    std::getline( std::cin, name);

    std::cout << "Thank you " << name << ". What is your age?" << std::endl;
    std::cin >> age;
    std::cout << "Perfect, let us get started" << std::endl;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    welcome();
    return 0;
}
