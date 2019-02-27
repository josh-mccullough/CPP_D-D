#include <iostream>
#include "../characterOptions/Character.h"

void chapter1 (Character& character) 
{
    switch (character.getCurrentStoryPoint())
    {
        case C1_P1:
            chapterOnePoint1(character);
            break;

        default:
            break;
    
    }
}

void chapterOnePoint1(Character& character)
{
    std::cout << "we getting somewhere now" << std::endl;
}
