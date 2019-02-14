#include <iostream>
#include <string>

#include "../gameMechanics/rollMechanics.h"
#include "../characterOptions/Character.h"


void welcome()
{
    std::string name;

    std::cout << "Welcome to your adventure, what is  your name?  " << std::endl;
    std::getline( std::cin, name);

    //Creating a pointer for our character 
    //we can now access this character everyone in our program
    Character* newCharacter = new Character(name, 20, 18);

    newCharacter->displayLevel();
    newCharacter->displayAttributes();
    newCharacter->displayExperience();
    newCharacter->addXp(1000);
    
    newCharacter->displayLevel();
    newCharacter->displayAttributes();
    newCharacter->displayExperience(); 
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    welcome();
    return 0;
}
