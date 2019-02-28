#include <iostream>
#include <string>

#include "../characterOptions/Character.h"
#include "ChapterOne.h"


int startGame()
{
    int choice;
    std::string name;
    std::string race;

    std::cout << "Welcome to your adventure, what is  your name?  " << std::endl;
    std::getline( std::cin, name);
    
    std::cout << "What is  your race?  " << std::endl;
    std::getline( std::cin, race);

    Character * newCharacter = new Character(name, race, 200);

    while(newCharacter->isAlive())
    {
        switch (newCharacter->getChapterPoint())
        {
            case Character::CHAPTER_1:
                //LEARNING POINT, WHY DID I HAVE TO DE REFERENCE HERE
                chapterOne(*newCharacter);
                break;
            
            case Character::CHAPTER_2:
                //LEARNING POINT, WHY DID I HAVE TO DE REFERENCE HERE
                std::cout << "make a chapter 2" << std::endl;
                newCharacter->loseHealth(500);
                break;

            default:
                chapterOne(*newCharacter);
                break;
        }
    
    }

    std::cout << "You have died, would you like to 1.Restart or 2.Quit?" << std::endl;
    std::cin >> choice;

    if (choice == 1)
    {
        startGame();
    }
        return 0;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    startGame();
    return 0;
}
