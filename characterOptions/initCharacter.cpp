#include <iostream>

class Character
{
    public:
        int health;
        std::string name;
        int strength;
        int dexterity;
        int currentExperience;
        int experienceToNextLevel;
        int level;

    // TODO probably make this more efficient, i think the adding functions could be one i guess
    // just need to find a way to tell it what variable i passed it, maybe using pointer/reference magic
    void displayLevel()
    {
        std::cout << name << "is level " << level << std::endl;
    }

    void displayAttributes()
    {
        std::cout << "Strength: " << strength << " | Dexterity: " << dexterity << std::endl;
    }

    void displayExperience()
    {
        std::cout << "Your current experience is: " << currentExperience << std::endl;
        std::cout << "You need " << experienceToNextLevel - currentExperience << " to level up" << std::endl;
    }

    void addDex(int amount)
    {
        dexterity += amount;
    }
    
    void addStrength(int amount)
    {
        strength += amount;
    }
    
    void addXp(int amount)
    {
        if (currentExperience + amount > experienceToNextLevel)
        {
            levelUp((currentExperience + amount) - experienceToNextLevel);
        }
        else
        {
            currentExperience += amount;
        }
    }

    void levelUp(int leftOver)
    {
        int whatToLevel;
        level += 1;

        std::cout << "Congrats " << name << ". You are now level " << level << std::endl;
        std::cout << "Type 1 to add to dexterity, type 2 to add to strength." << std::endl;
        std::cin >> whatToLevel;

        if (whatToLevel == 1)
        {
            addDex(1);
        }
        else if (whatToLevel == 2)
        {
            addStrength(1);
        }

        currentExperience = leftOver;

        //Tune this down or up to make experience gain faster or slower
        experienceToNextLevel = experienceToNextLevel * (experienceToNextLevel / 100 * 10); 
    }
    
    // Parametrized Constructor
    // I cant see the point in a default constructor due to this being an 'rpg'
    Character(std::string name, int dex, int str)
    {
        name = name;
        dexterity = dex;
        strength = str;
        experienceToNextLevel = 100;
        currentExperience = 0;
        level = 1;
        health = 500;
    }
};
