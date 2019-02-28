#include <iostream>
#include "../characterOptions/Character.h"
#include "ChapterOne.h"

int choice;

void chapterOne (Character& character) 
{
    switch (character.getStoryPoint())
    {
        case Character::C1_P1:
            chapterOnePoint1(character);
            break;
        
        case Character::C1_P2:
            chapterOnePoint2(character);
            break;
        
        case Character::C1_P3:
            chapterOnePoint3(character);
            break;
        
        case Character::C1_P4:
            chapterOnePoint4(character);
            break;
        
        case Character::C1_P5:
            chapterOnePoint5(character);
            break;

        default:
            break;
    
    }
}

void chapterOnePoint1(Character& character)
{
    std::cout << "You approach a door with a forest off to the right, would you like to 1. open the door or 2. walk to the forest" << std::endl;
    std::cin >> choice;
    if (choice == 1)
    {
        character.setStoryPoint(Character::C1_P2);    
    }

    character.setStoryPoint(Character::C1_P3);
}

void chapterOnePoint2(Character& character)
{
    std::cout << "point 2" << std::endl;
    character.setStoryPoint(Character::C1_P4);
}

void chapterOnePoint3(Character& character)
{
    std::cout << "point 3" << std::endl;
    character.setStoryPoint(Character::C1_P5);
}

void chapterOnePoint4(Character& character)
{
    std::cout << "point 4" << std::endl;
    character.setStoryPoint(Character::C1_P5);
}

void chapterOnePoint5(Character& character)
{
    std::cout << "A new chapter begins" << std::endl;
    character.setChapterPoint(Character::CHAPTER_2);
}
