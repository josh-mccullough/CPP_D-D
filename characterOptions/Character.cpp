#include "Character.h"
    
    void Character::displayAttributes ()
    {
        //display i guess
    }

    void Character::displaySkills ()
    {
        // yes
    }

    void Character::addXp (int amount)
    {
        std::cout << "You have gained " << amount << " xp" << std::endl;

        if (currentExperience + amount > experienceToNextLevel)
        {
            levelUp ((currentExperience + amount) - experienceToNextLevel);
        }
        else
        {
            currentExperience += amount;
        }
    }
    
    void Character::checkLeftOver (int leftOver)
    {
       if (leftOver > experienceToNextLevel)
       {
            levelUp (leftOver - experienceToNextLevel);
       }
       else
       {
            currentExperience = leftOver;
       }
    }

    void Character::levelUp (int leftOver)
    {
        //Tune this down or up to make experience gain faster or slower
        experienceToNextLevel = (experienceToNextLevel + (experienceToNextLevel / 100 * 10));
        level += 1;
        std::cout << "Congrats " << name << ". You are now level " << level << std::endl;
        checkLeftOver (leftOver);
    }
