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

        if (mCurrentExperience + amount > mExperienceToNextLevel)
        {
            levelUp ((mCurrentExperience + amount) - mExperienceToNextLevel);
        }
        else
        {
            mCurrentExperience += amount;
        }
    }
    
    void Character::checkLeftOver (int leftOver)
    {
       if (leftOver > mExperienceToNextLevel)
       {
            levelUp (leftOver - mExperienceToNextLevel);
       }
       else
       {
            mCurrentExperience = leftOver;
       }
    }

    void Character::levelUp (int leftOver)
    {
        //Tune this down or up to make experience gain faster or slower
        mExperienceToNextLevel = (mExperienceToNextLevel + (mExperienceToNextLevel / 100 * 10));
        mLevel += 1;
        std::cout << "Congrats " << mName << ". You are now level " << mLevel << std::endl;
        checkLeftOver (leftOver);
    }
