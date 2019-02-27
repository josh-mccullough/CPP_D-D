#include <iostream>
#include <string>

#include "../characterOptions/Character.h"
#include "ChapterOne.h"


int startGame()
{
    int choice;
    std::string name;
    std::cout << "Welcome to your adventure, what is  your name?  " << std::endl;
    std::getline( std::cin, name);

    Character * newCharacter = new Character(name, "elf", 200);

    while(newCharacter->isAlive())
    {
        switch (newCharacter->getCurrentChapter())
        {
            case CHAPTER_1:
                chapter1(newCharacter);
                break;

            default:
                break;
        }
    
    }

    std::cout << "You have died, would you like to 1.Restart or 2.Quit?" << std::endl;
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
