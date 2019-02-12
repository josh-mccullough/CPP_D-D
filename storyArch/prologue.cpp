#include <iostream>
#include <string>

#include "../gameMechanics/rollMechanics.cpp"
#include "../characterOptions/initCharacter.cpp"


void welcome()
{
    std::string name;

    std::cout << "Welcome to your adventure, what is  your name?  " << std::endl;
    std::getline( std::cin, name);

    std::cout << "Perfect, let us get started" << std::endl;
    Character  newCharacter(name, 20, 18);
    newCharacter.displayLevel();
    newCharacter.displayAttributes();
    newCharacter.displayExperience();

    newCharacter.addXp(1000);
    
    newCharacter.displayLevel();
    newCharacter.displayAttributes();
    newCharacter.displayExperience();
    
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    welcome();
    return 0;
}
