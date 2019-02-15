#include <iostream>
#include <string>

#include "../gameMechanics/rollMechanics.h"
#include "../characterOptions/Character.h"


int startGame()
{
    int choice;
    std::string name;
    std::cout << "Welcome to your adventure, what is  your name?  " << std::endl;
    std::getline( std::cin, name);

    //Creating a pointer for our character 
    //we can now access this character everyone in our program
    Character* newCharacter = new Character(name, 20, 18);

    while(newCharacter->health != 0)
    {
        std::cout << "Your health = " << newCharacter->getHealth() << std::endl;
        newCharacter->loseHealth(100);

        //chapter1
        //chapter2
        //chapter3 etc.
        //manage all progress through the game from here? 
    
    }

    std::cout << "You have died, would you like to 1. Restart or 2. Quit?" << std::endl;
    std::cin >> choice;

    if (choice == 1)
    {
        startGame();
    }
    else
    {
        return 0;
    }


}

int main()
{
    std::ios_base::sync_with_stdio(false);
    startGame();
    return 0;
}
