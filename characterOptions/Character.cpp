#include "Character.h"


    void Character::displayAttributes()
    {
		for ( it = attributeMap.begin(); it != attributeMap.end(); it++ )
		{
			std::cout << it->first << ':' << it->second << std::endl ;
		}
    }

    void Character::addAttribute(std::string attr, int amount)
    {
		for ( it = attributeMap.begin(); it != attributeMap.end(); it++ )
		{
			if (it->first == attr)
            {
                it->second += amount;
            }
		}
    }

    void Character::displaySkills()
    {
		for ( it = skillMap.begin(); it != skillMap.end(); it++ )
		{
			std::cout << it->first << ':' << it->second << std::endl ;
		}
    }

    void Character::addSkill(std::string skill, int amount)
    {
		for ( it = skillMap.begin(); it != skillMap.end(); it++ )
		{
			if (it->first == skill)
            {
                it->second += amount;
            }
		}
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
        std::string attr;
        std::string skill;
        //Tune this down or up to make experience gain faster or slower
        experienceToNextLevel = (experienceToNextLevel + (experienceToNextLevel / 100 * 10));
        level += 1;
        std::cout << "Congrats " << name << ". You are now level " << level << std::endl;

        std::cout << "You have 10 points to spend on an attribute, please enter the attribute you would like to increase" << std::endl;
        std::cin >> attr;
        addAttribute(attr, 10);

        std::cout << "You have 15 points to spend on a skill, please enter the skill you would like to increase" << std::endl;
        std::cin >> skill;
        addSkill(skill, 15);

        checkLeftOver(leftOver);
    }
    
    // Parametrized Constructor
    // I cant see the point in a default constructor due to this being an 'rpg'
    Character::Character(std::string name, std::string classG, int armourRating)
    {
        //implementing attributes
        attributeMap["STRENGTH"] = 0;
        attributeMap["DEXTERITY"] = 0;
        attributeMap["CONSTITUTION"] = 0;
        attributeMap["INTELLIGENCE"] = 0;
        attributeMap["WISDOM"] = 0;
        attributeMap["CHARISMA"] = 0;

        //implementing skills
        skillMap["ACROBATICS"] = 0;
        skillMap["ANMIALHANDLING"] = 0;
        skillMap["ARCANA"] = 0;
        skillMap["ATHLETICS"] = 0;
        skillMap["DECEPTION"] = 0;
        skillMap["HISTORY"] = 0;
        skillMap["INSIGHT"] = 0;
        skillMap["INTIMIDATION"] = 0;
        skillMap["INVESTIGATION"] = 0;
        skillMap["MEDICINE"] = 0;
        skillMap["NATURE"] = 0;
        skillMap["PERCEPTION"] = 0;
        skillMap["PERFORMANCE"] = 0;
        skillMap["PERSUASION"] = 0;
        skillMap["RELIGION"] = 0;
        skillMap["SLEIGHTOFHAND"] = 0;
        skillMap["STEALTH"] = 0;
        skillMap["SURVIVAL"] = 0;

        name = name;
		classG = classG;
		armourRating = armourRating;
        experienceToNextLevel = 100;
        currentExperience = 0;
        level = 1;
        health = 500;
    }
