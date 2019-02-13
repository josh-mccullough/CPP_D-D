#include "Character.h"

    // TODO probably make this more efficient, i think the adding functions could be one i guess
    // just need to find a way to tell it what variable i passed it, maybe using pointer/reference magic
    void Character::displayLevel()
    {
        std::cout <<  "Your current level is: " << level << std::endl;
    }

    void Character::displayAttributes()
    {
        std::cout << "Strength: " << strength << " | Dexterity: " << dexterity << std::endl;
    }

    void Character::displayExperience()
    {
        std::cout << "Your current experience is: " << currentExperience << std::endl;
        std::cout << "You need " << experienceToNextLevel - currentExperience << " more experience to level up" << std::endl;
    }

    void Character::addDex(int amount)
    {
        dexterity += amount;
    }
    
    void Character::addStrength(int amount)
    {
        strength += amount;
    }
    
    void Character::addXp(int amount)
    {
        std::cout << "You have gained " << amount << " xp" << std::endl;

        if (currentExperience + amount > experienceToNextLevel)
        {
            levelUp((currentExperience + amount) - experienceToNextLevel);
        }
        else
        {
            currentExperience += amount;
        }
    }
    
    void Character::addStat(int number)
    {
        
        if (number == 1)
        {
            addDex(1);
        }
        else if (number == 2)
        {
            addStrength(1);
        }
    }

    void Character::checkLeftOver(int leftOver)
    {
       if (leftOver > experienceToNextLevel)
       {
            levelUp(leftOver - experienceToNextLevel);
       }
       else
       {
            currentExperience = leftOver;
       }
    }

    void Character::levelUp(int leftOver)
    {
        //Tune this down or up to make experience gain faster or slower
        experienceToNextLevel = (experienceToNextLevel + (experienceToNextLevel / 100 * 10));

        int whatToLevel;
        level += 1;

        std::cout << "Congrats " << name << ". You are now level " << level << std::endl;
        std::cout << "Type 1 to add to dexterity, type 2 to add to strength." << std::endl;
        std::cin >> whatToLevel;
        
        addStat(whatToLevel);
        checkLeftOver(leftOver);
    }
    
    // Parametrized Constructor
    // I cant see the point in a default constructor due to this being an 'rpg'
    Character::Character(std::string name, int dex, int str)
    {
        name = name;
        dexterity = dex;
        strength = str;
        experienceToNextLevel = 100;
        currentExperience = 0;
        level = 1;
        health = 500;
    }
